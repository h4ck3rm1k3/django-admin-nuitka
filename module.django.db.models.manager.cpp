// Generated code for Python source for module 'django.db.models.manager'
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

// The _module_django__db__models__manager is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db__models__manager;
PyDictObject *_moduledict_django__db__models__manager;

// The module level variables.
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_AbstractManagerDescriptor( &_module_django__db__models__manager, &_python_str_plain_AbstractManagerDescriptor );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_EmptyManager( &_module_django__db__models__manager, &_python_str_plain_EmptyManager );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_FieldDoesNotExist( &_module_django__db__models__manager, &_python_str_plain_FieldDoesNotExist );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_Manager( &_module_django__db__models__manager, &_python_str_plain_Manager );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_ManagerDescriptor( &_module_django__db__models__manager, &_python_str_plain_ManagerDescriptor );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_PendingDeprecationWarning( &_module_django__db__models__manager, &_python_str_plain_PendingDeprecationWarning );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_QuerySet( &_module_django__db__models__manager, &_python_str_plain_QuerySet );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_RawQuerySet( &_module_django__db__models__manager, &_python_str_plain_RawQuerySet );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_RenameManagerMethods( &_module_django__db__models__manager, &_python_str_plain_RenameManagerMethods );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_RenameMethodsBase( &_module_django__db__models__manager, &_python_str_plain_RenameMethodsBase );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_SwappedManagerDescriptor( &_module_django__db__models__manager, &_python_str_plain_SwappedManagerDescriptor );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager___metaclass__( &_module_django__db__models__manager, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_copy( &_module_django__db__models__manager, &_python_str_plain_copy );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_ensure_default_manager( &_module_django__db__models__manager, &_python_str_plain_ensure_default_manager );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_insert_query( &_module_django__db__models__manager, &_python_str_plain_insert_query );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_router( &_module_django__db__models__manager, &_python_str_plain_router );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_signals( &_module_django__db__models__manager, &_python_str_plain_signals );
static PyObjectGlobalVariable_django__db__models__manager _mvar_django__db__models__manager_six( &_module_django__db__models__manager, &_python_str_plain_six );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_2_RenameManagerMethods_of_module_django__db__models__manager(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_Manager_of_module_django__db__models__manager(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_ManagerDescriptor_of_module_django__db__models__manager(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_EmptyManager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_10_count_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_15_get_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_17_create_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_1_ensure_default_manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_28_first_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_29_last_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_34_values_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_36_update_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_39_only_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_40_using_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_43__update_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_6_db_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_8_none_of_class_3_Manager_of_module_django__db__models__manager(  );


static PyObject *MAKE_FUNCTION_function_9_all_of_class_3_Manager_of_module_django__db__models__manager(  );


// The module function definitions.
static PyObject *impl_function_1_ensure_default_manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_sender, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_sender( _python_str_plain_sender, _python_par_sender );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_cls( _python_str_plain_cls );
    PyObjectLocalVariable _python_var_default_mgr( _python_str_plain_default_mgr );
    PyObjectLocalVariable _python_var_base_class( _python_str_plain_base_class );

    // Actual function code.
    static PyFrameObject *frame_function_1_ensure_default_manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_1_ensure_default_manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_1_ensure_default_manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_ensure_default_manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_1_ensure_default_manager_of_module_django__db__models__manager );
        }

        frame_function_1_ensure_default_manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_fa617dda0f7e586659f1a87f28a61b1c, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_1_ensure_default_manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_1_ensure_default_manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 16 );
        _python_var_cls.assign0( _python_var_sender.asObject() );
        frame_guard.setLineNumber( 17 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_abstract ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 18 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 setattr3;
                ( ( setattr3.assign( _python_var_cls.asObject() ), BUILTIN_SETATTR( setattr3.asObject0(), _python_str_plain_objects, PyObjectTemporary( ( call1.assign( _mvar_django__db__models__manager_AbstractManagerDescriptor.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_cls.asObject() ) ) ).asObject() ) ), Py_None );
            }
            return INCREASE_REFCOUNT( Py_None );
        }
        else
        {
            frame_guard.setLineNumber( 20 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_swapped ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 21 );
                {
                    PyObjectTempKeeper0 call6;
                    PyObjectTempKeeper0 setattr8;
                    ( ( setattr8.assign( _python_var_cls.asObject() ), BUILTIN_SETATTR( setattr8.asObject0(), _python_str_plain_objects, PyObjectTemporary( ( call6.assign( _mvar_django__db__models__manager_SwappedManagerDescriptor.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_cls.asObject() ) ) ).asObject() ) ), Py_None );
                }
                return INCREASE_REFCOUNT( Py_None );
            }
        }
        frame_guard.setLineNumber( 23 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_GETATTR( _python_var_cls.asObject(), _python_str_plain__default_manager, Py_None ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 25 );
            try
            {
                frame_guard.setLineNumber( 26 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_get_field ) ).asObject(), _python_str_plain_objects ) );
                frame_guard.setLineNumber( 27 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_a61a3f26ce7b95f902f2be768f730606, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain___name__ ) ).asObject() ) ).asObject() ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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

                if ( _exception.matches( _mvar_django__db__models__manager_FieldDoesNotExist.asObject0() ) )
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
            frame_guard.setLineNumber( 30 );
            {
                PyObjectTempKeeper1 call11;
                DECREASE_REFCOUNT( ( call11.assign( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain_add_to_class ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_str_plain_objects, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__db__models__manager_Manager.asObject0() ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 31 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain_objects ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_cls.asObject(), _python_str_plain__base_manager );
            }
        }
        else
        {
            frame_guard.setLineNumber( 32 );
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_GETATTR( _python_var_cls.asObject(), _python_str_plain__base_manager, Py_None ) ).asObject() ) )) )
            {
                frame_guard.setLineNumber( 33 );
                _python_var_default_mgr.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__default_manager ) ).asObject(), _python_str_plain___class__ ) );
                frame_guard.setLineNumber( 34 );
                if ( ( ( _python_var_default_mgr.asObject() == _mvar_django__db__models__manager_Manager.asObject0() ) || CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_GETATTR( _python_var_default_mgr.asObject(), _python_str_plain_use_for_related_fields, Py_False ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 36 );
                    {
                            PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__default_manager ) );
                            SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_cls.asObject(), _python_str_plain__base_manager );
                    }
                }
                else
                {
                    {
                        frame_guard.setLineNumber( 41 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_INDEX_SLICE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_default_mgr.asObject(), _python_str_plain_mro ) ).asObject() ) ).asObject(), 1, PY_SSIZE_T_MAX ) ).asObject() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 41 );
                                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_1 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                                _python_var_base_class.assign0( _python_tmp_iter_value.asObject() );
                            }
                            frame_guard.setLineNumber( 42 );
                            if ( ( ( _python_var_base_class.asObject() == _mvar_django__db__models__manager_Manager.asObject0() ) || CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_GETATTR( _python_var_base_class.asObject(), _python_str_plain_use_for_related_fields, Py_False ) ).asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 44 );
                                {
                                    PyObjectTempKeeper1 call14;
                                    DECREASE_REFCOUNT( ( call14.assign( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain_add_to_class ) ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), _python_str_plain__base_manager, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _python_var_base_class.asObject() ) ).asObject() ) ) );
                                }
                                return INCREASE_REFCOUNT( Py_None );
                            }

                           CONSIDER_THREADING();
                        }
                    }
                    frame_guard.setLineNumber( 46 );
                    {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_ca0e10dfde6ca45680ae13828ccea39a ) ).asObject() ) );
                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_sender.updateLocalsDict( _python_var_base_class.updateLocalsDict( _python_var_default_mgr.updateLocalsDict( _python_var_cls.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_ensure_default_manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_1_ensure_default_manager_of_module_django__db__models__manager );
           frame_function_1_ensure_default_manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_ensure_default_manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_sender = NULL;
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
                        PyErr_Format( PyExc_TypeError, "ensure_default_manager() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "ensure_default_manager() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "ensure_default_manager() keywords must be strings" );
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

    // Check if argument sender was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_sender );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_sender == NULL );

            _python_par_sender = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_sender );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "ensure_default_manager() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "ensure_default_manager() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "ensure_default_manager() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "ensure_default_manager() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "ensure_default_manager() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ensure_default_manager() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "ensure_default_manager() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ensure_default_manager() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "ensure_default_manager() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "ensure_default_manager() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "ensure_default_manager() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "ensure_default_manager() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_sender != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ensure_default_manager() got multiple values for keyword argument 'sender'" );
             goto error_exit;
         }

        _python_par_sender = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_ensure_default_manager_of_module_django__db__models__manager( self, _python_par_sender, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_sender );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1_ensure_default_manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_ensure_default_manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_ensure_default_manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_RenameManagerMethods_of_module_django__db__models__manager(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_renamed_methods( _python_str_plain_renamed_methods );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_manager );
    static PyFrameObject *frame_class_2_RenameManagerMethods_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_class_2_RenameManagerMethods_of_module_django__db__models__manager ) )
    {
        if ( frame_class_2_RenameManagerMethods_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_2_RenameManagerMethods_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_class_2_RenameManagerMethods_of_module_django__db__models__manager );
        }

        frame_class_2_RenameManagerMethods_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_e58988cd5a601d4a6ecace85c87a762c, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_class_2_RenameManagerMethods_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_class_2_RenameManagerMethods_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 52 );
        {
            PyObjectTempKeeper1 make_tuple1;
            _python_var_renamed_methods.assign1( ( make_tuple1.assign( MAKE_TUPLE3( _python_str_plain_get_query_set, _python_str_plain_get_queryset, _mvar_django__db__models__manager_PendingDeprecationWarning.asObject0() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( MAKE_TUPLE3( _python_str_plain_get_prefetch_query_set, _python_str_plain_get_prefetch_queryset, _mvar_django__db__models__manager_PendingDeprecationWarning.asObject0() ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_renamed_methods.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_class_2_RenameManagerMethods_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_class_2_RenameManagerMethods_of_module_django__db__models__manager );
           frame_class_2_RenameManagerMethods_of_module_django__db__models__manager = NULL;
        }

        throw;
    }
    return _python_var_renamed_methods.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_3_Manager_of_module_django__db__models__manager(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_creation_counter( _python_str_plain_creation_counter );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_contribute_to_class( _python_str_plain_contribute_to_class );
    PyObjectLocalVariable _python_var__set_creation_counter( _python_str_plain__set_creation_counter );
    PyObjectLocalVariable _python_var__copy_to_model( _python_str_plain__copy_to_model );
    PyObjectLocalVariable _python_var_db_manager( _python_str_plain_db_manager );
    PyObjectLocalVariable _python_var_db( _python_str_plain_db );
    PyObjectLocalVariable _python_var_get_queryset( _python_str_plain_get_queryset );
    PyObjectLocalVariable _python_var_none( _python_str_plain_none );
    PyObjectLocalVariable _python_var_all( _python_str_plain_all );
    PyObjectLocalVariable _python_var_count( _python_str_plain_count );
    PyObjectLocalVariable _python_var_dates( _python_str_plain_dates );
    PyObjectLocalVariable _python_var_datetimes( _python_str_plain_datetimes );
    PyObjectLocalVariable _python_var_distinct( _python_str_plain_distinct );
    PyObjectLocalVariable _python_var_extra( _python_str_plain_extra );
    PyObjectLocalVariable _python_var_get( _python_str_plain_get );
    PyObjectLocalVariable _python_var_get_or_create( _python_str_plain_get_or_create );
    PyObjectLocalVariable _python_var_create( _python_str_plain_create );
    PyObjectLocalVariable _python_var_bulk_create( _python_str_plain_bulk_create );
    PyObjectLocalVariable _python_var_filter( _python_str_plain_filter );
    PyObjectLocalVariable _python_var_aggregate( _python_str_plain_aggregate );
    PyObjectLocalVariable _python_var_annotate( _python_str_plain_annotate );
    PyObjectLocalVariable _python_var_complex_filter( _python_str_plain_complex_filter );
    PyObjectLocalVariable _python_var_exclude( _python_str_plain_exclude );
    PyObjectLocalVariable _python_var_in_bulk( _python_str_plain_in_bulk );
    PyObjectLocalVariable _python_var_iterator( _python_str_plain_iterator );
    PyObjectLocalVariable _python_var_earliest( _python_str_plain_earliest );
    PyObjectLocalVariable _python_var_latest( _python_str_plain_latest );
    PyObjectLocalVariable _python_var_first( _python_str_plain_first );
    PyObjectLocalVariable _python_var_last( _python_str_plain_last );
    PyObjectLocalVariable _python_var_order_by( _python_str_plain_order_by );
    PyObjectLocalVariable _python_var_select_for_update( _python_str_plain_select_for_update );
    PyObjectLocalVariable _python_var_select_related( _python_str_plain_select_related );
    PyObjectLocalVariable _python_var_prefetch_related( _python_str_plain_prefetch_related );
    PyObjectLocalVariable _python_var_values( _python_str_plain_values );
    PyObjectLocalVariable _python_var_values_list( _python_str_plain_values_list );
    PyObjectLocalVariable _python_var_update( _python_str_plain_update );
    PyObjectLocalVariable _python_var_reverse( _python_str_plain_reverse );
    PyObjectLocalVariable _python_var_defer( _python_str_plain_defer );
    PyObjectLocalVariable _python_var_only( _python_str_plain_only );
    PyObjectLocalVariable _python_var_using( _python_str_plain_using );
    PyObjectLocalVariable _python_var_exists( _python_str_plain_exists );
    PyObjectLocalVariable _python_var__insert( _python_str_plain__insert );
    PyObjectLocalVariable _python_var__update( _python_str_plain__update );
    PyObjectLocalVariable _python_var_raw( _python_str_plain_raw );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_manager );
    _python_var_creation_counter.assign0( _python_int_0 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_contribute_to_class.assign1( MAKE_FUNCTION_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var__set_creation_counter.assign1( MAKE_FUNCTION_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var__copy_to_model.assign1( MAKE_FUNCTION_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_db_manager.assign1( MAKE_FUNCTION_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    static PyFrameObject *frame_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_af28a05d280de4aa55ba123522302500, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 115 );
        _python_var_db.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_6_db_of_class_3_Manager_of_module_django__db__models__manager(  ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_raw.updateLocalsDict( _python_var__update.updateLocalsDict( _python_var__insert.updateLocalsDict( _python_var_exists.updateLocalsDict( _python_var_using.updateLocalsDict( _python_var_only.updateLocalsDict( _python_var_defer.updateLocalsDict( _python_var_reverse.updateLocalsDict( _python_var_update.updateLocalsDict( _python_var_values_list.updateLocalsDict( _python_var_values.updateLocalsDict( _python_var_prefetch_related.updateLocalsDict( _python_var_select_related.updateLocalsDict( _python_var_select_for_update.updateLocalsDict( _python_var_order_by.updateLocalsDict( _python_var_last.updateLocalsDict( _python_var_first.updateLocalsDict( _python_var_latest.updateLocalsDict( _python_var_earliest.updateLocalsDict( _python_var_iterator.updateLocalsDict( _python_var_in_bulk.updateLocalsDict( _python_var_exclude.updateLocalsDict( _python_var_complex_filter.updateLocalsDict( _python_var_annotate.updateLocalsDict( _python_var_aggregate.updateLocalsDict( _python_var_filter.updateLocalsDict( _python_var_bulk_create.updateLocalsDict( _python_var_create.updateLocalsDict( _python_var_get_or_create.updateLocalsDict( _python_var_get.updateLocalsDict( _python_var_extra.updateLocalsDict( _python_var_distinct.updateLocalsDict( _python_var_datetimes.updateLocalsDict( _python_var_dates.updateLocalsDict( _python_var_count.updateLocalsDict( _python_var_all.updateLocalsDict( _python_var_none.updateLocalsDict( _python_var_get_queryset.updateLocalsDict( _python_var_db.updateLocalsDict( _python_var_db_manager.updateLocalsDict( _python_var__copy_to_model.updateLocalsDict( _python_var__set_creation_counter.updateLocalsDict( _python_var_contribute_to_class.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_creation_counter.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_class_3_Manager_of_module_django__db__models__manager );
           frame_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        throw;
    }
    _python_var_get_queryset.assign1( MAKE_FUNCTION_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_none.assign1( MAKE_FUNCTION_function_8_none_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_all.assign1( MAKE_FUNCTION_function_9_all_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_count.assign1( MAKE_FUNCTION_function_10_count_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_dates.assign1( MAKE_FUNCTION_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_datetimes.assign1( MAKE_FUNCTION_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_distinct.assign1( MAKE_FUNCTION_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_extra.assign1( MAKE_FUNCTION_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_get.assign1( MAKE_FUNCTION_function_15_get_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_get_or_create.assign1( MAKE_FUNCTION_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_create.assign1( MAKE_FUNCTION_function_17_create_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_bulk_create.assign1( MAKE_FUNCTION_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_filter.assign1( MAKE_FUNCTION_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_aggregate.assign1( MAKE_FUNCTION_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_annotate.assign1( MAKE_FUNCTION_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_complex_filter.assign1( MAKE_FUNCTION_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_exclude.assign1( MAKE_FUNCTION_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_in_bulk.assign1( MAKE_FUNCTION_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_iterator.assign1( MAKE_FUNCTION_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_earliest.assign1( MAKE_FUNCTION_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_latest.assign1( MAKE_FUNCTION_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_first.assign1( MAKE_FUNCTION_function_28_first_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_last.assign1( MAKE_FUNCTION_function_29_last_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_order_by.assign1( MAKE_FUNCTION_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_select_for_update.assign1( MAKE_FUNCTION_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_select_related.assign1( MAKE_FUNCTION_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_prefetch_related.assign1( MAKE_FUNCTION_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_values.assign1( MAKE_FUNCTION_function_34_values_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_values_list.assign1( MAKE_FUNCTION_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_update.assign1( MAKE_FUNCTION_function_36_update_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_reverse.assign1( MAKE_FUNCTION_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_defer.assign1( MAKE_FUNCTION_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_only.assign1( MAKE_FUNCTION_function_39_only_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_using.assign1( MAKE_FUNCTION_function_40_using_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_exists.assign1( MAKE_FUNCTION_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var__insert.assign1( MAKE_FUNCTION_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var__update.assign1( MAKE_FUNCTION_function_43__update_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    _python_var_raw.assign1( MAKE_FUNCTION_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager(  ) );
    return _python_var_raw.updateLocalsDict( _python_var__update.updateLocalsDict( _python_var__insert.updateLocalsDict( _python_var_exists.updateLocalsDict( _python_var_using.updateLocalsDict( _python_var_only.updateLocalsDict( _python_var_defer.updateLocalsDict( _python_var_reverse.updateLocalsDict( _python_var_update.updateLocalsDict( _python_var_values_list.updateLocalsDict( _python_var_values.updateLocalsDict( _python_var_prefetch_related.updateLocalsDict( _python_var_select_related.updateLocalsDict( _python_var_select_for_update.updateLocalsDict( _python_var_order_by.updateLocalsDict( _python_var_last.updateLocalsDict( _python_var_first.updateLocalsDict( _python_var_latest.updateLocalsDict( _python_var_earliest.updateLocalsDict( _python_var_iterator.updateLocalsDict( _python_var_in_bulk.updateLocalsDict( _python_var_exclude.updateLocalsDict( _python_var_complex_filter.updateLocalsDict( _python_var_annotate.updateLocalsDict( _python_var_aggregate.updateLocalsDict( _python_var_filter.updateLocalsDict( _python_var_bulk_create.updateLocalsDict( _python_var_create.updateLocalsDict( _python_var_get_or_create.updateLocalsDict( _python_var_get.updateLocalsDict( _python_var_extra.updateLocalsDict( _python_var_distinct.updateLocalsDict( _python_var_datetimes.updateLocalsDict( _python_var_dates.updateLocalsDict( _python_var_count.updateLocalsDict( _python_var_all.updateLocalsDict( _python_var_none.updateLocalsDict( _python_var_get_queryset.updateLocalsDict( _python_var_db.updateLocalsDict( _python_var_db_manager.updateLocalsDict( _python_var__copy_to_model.updateLocalsDict( _python_var__set_creation_counter.updateLocalsDict( _python_var_contribute_to_class.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_creation_counter.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_1___init___of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_1___init___of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_a304a1ac04702dc8795f8c8f88badc60, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 63 );
        {
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__db__models__manager_Manager.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 64 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__set_creation_counter ) ).asObject() ) );
        frame_guard.setLineNumber( 65 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_model );
        frame_guard.setLineNumber( 66 );
        SET_ATTRIBUTE( Py_False, _python_var_self.asObject(), _python_str_plain__inherited );
        frame_guard.setLineNumber( 67 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain__db );
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

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_1___init___of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_1___init___of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1___init___of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1___init___of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_model, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_model( _python_str_plain_model, _python_par_model );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_563b86c8d58490777166af13931bae4c, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 71 );
        {
                PyObject *tmp_identifier = _python_var_model.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_model );
        }
        frame_guard.setLineNumber( 73 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_model.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_abstract ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 74 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 setattr3;
                PyObjectTempKeeper0 setattr4;
                ( ( setattr3.assign( _python_var_model.asObject() ), setattr4.assign( _python_var_name.asObject() ), BUILTIN_SETATTR( setattr3.asObject0(), setattr4.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__db__models__manager_AbstractManagerDescriptor.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_model.asObject() ) ) ).asObject() ) ), Py_None );
            }
        }
        else
        {
            frame_guard.setLineNumber( 75 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_model.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_swapped ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 76 );
                {
                    PyObjectTempKeeper0 call6;
                    PyObjectTempKeeper0 setattr8;
                    PyObjectTempKeeper0 setattr9;
                    ( ( setattr8.assign( _python_var_model.asObject() ), setattr9.assign( _python_var_name.asObject() ), BUILTIN_SETATTR( setattr8.asObject0(), setattr9.asObject0(), PyObjectTemporary( ( call6.assign( _mvar_django__db__models__manager_SwappedManagerDescriptor.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_model.asObject() ) ) ).asObject() ) ), Py_None );
                }
            }
            else
            {
                frame_guard.setLineNumber( 79 );
                {
                    PyObjectTempKeeper0 call11;
                    PyObjectTempKeeper0 setattr13;
                    PyObjectTempKeeper0 setattr14;
                    ( ( setattr13.assign( _python_var_model.asObject() ), setattr14.assign( _python_var_name.asObject() ), BUILTIN_SETATTR( setattr13.asObject0(), setattr14.asObject0(), PyObjectTemporary( ( call11.assign( _mvar_django__db__models__manager_ManagerDescriptor.asObject0() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_self.asObject() ) ) ).asObject() ) ), Py_None );
                }
            }
        }
        frame_guard.setLineNumber( 80 );
        {
            PyObjectTempKeeper1 cmp16;
            if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_GETATTR( _python_var_model.asObject(), _python_str_plain__default_manager, Py_None ) ).asObject() ) )) || ( cmp16.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_creation_counter ) ), RICH_COMPARE_BOOL_LT( cmp16.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_model.asObject(), _python_str_plain__default_manager ) ).asObject(), _python_str_plain_creation_counter ) ).asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 81 );
            {
                    PyObject *tmp_identifier = _python_var_self.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_model.asObject(), _python_str_plain__default_manager );
            }
        }
        }
        frame_guard.setLineNumber( 82 );
        if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_model.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_abstract ) ).asObject() ) || ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__inherited ) ).asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_model ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_proxy ) ).asObject() ) )) ) ) )
        {
            frame_guard.setLineNumber( 83 );
            {
                PyObjectTempKeeper1 call21;
                PyObjectTempKeeper1 make_tuple18;
                PyObjectTempKeeper0 make_tuple19;
                DECREASE_REFCOUNT( ( call21.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_model.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_abstract_managers ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), PyObjectTemporary( ( make_tuple18.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_creation_counter ) ), make_tuple19.assign( _python_var_name.asObject() ), MAKE_TUPLE3( make_tuple18.asObject0(), make_tuple19.asObject0(), _python_var_self.asObject() ) ) ).asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 86 );
            {
                PyObjectTempKeeper1 call26;
                PyObjectTempKeeper1 make_tuple23;
                PyObjectTempKeeper0 make_tuple24;
                DECREASE_REFCOUNT( ( call26.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_model.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_concrete_managers ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call26.asObject0(), PyObjectTemporary( ( make_tuple23.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_creation_counter ) ), make_tuple24.assign( _python_var_name.asObject() ), MAKE_TUPLE3( make_tuple23.asObject0(), make_tuple24.asObject0(), _python_var_self.asObject() ) ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_model.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_model = NULL;
    PyObject *_python_par_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "contribute_to_class() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "contribute_to_class() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_model == key )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "contribute_to_class() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "contribute_to_class() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "contribute_to_class() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_model, key ) )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "contribute_to_class() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "contribute_to_class() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "contribute_to_class() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "contribute_to_class() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "contribute_to_class() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "contribute_to_class() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "contribute_to_class() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "contribute_to_class() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "contribute_to_class() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "contribute_to_class() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "contribute_to_class() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "contribute_to_class() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "contribute_to_class() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "contribute_to_class() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "contribute_to_class() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "contribute_to_class() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_model != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "contribute_to_class() got multiple values for keyword argument 'model'" );
             goto error_exit;
         }

        _python_par_model = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "contribute_to_class() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_model, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_model );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_77aa58ff6722f02cd8c375ab69da83d2, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 94 );
        {
                PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _mvar_django__db__models__manager_Manager.asObject0(), _python_str_plain_creation_counter ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_creation_counter );
        }
        {
            frame_guard.setLineNumber( 95 );
            PyObjectTemporary _python_tmp_inplace_start( LOOKUP_ATTRIBUTE( _mvar_django__db__models__manager_Manager.asObject0(), _python_str_plain_creation_counter ) );
            PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start.asObject(), _python_int_pos_1 ) );
            if ( ( _python_tmp_inplace_start.asObject() != _python_tmp_inplace_end.asObject() ) )
            {
                frame_guard.setLineNumber( 95 );
                {
                        PyObject *tmp_identifier = _python_tmp_inplace_end.asObject();
                        SET_ATTRIBUTE( tmp_identifier, _mvar_django__db__models__manager_Manager.asObject0(), _python_str_plain_creation_counter );
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

        if ( frame_guard.getFrame0() == frame_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_set_creation_counter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_set_creation_counter() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_set_creation_counter() got multiple values for keyword argument 'self'" );
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
                   "_set_creation_counter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_set_creation_counter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_set_creation_counter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_set_creation_counter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_set_creation_counter() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_set_creation_counter() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_set_creation_counter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_set_creation_counter() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_set_creation_counter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_set_creation_counter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_set_creation_counter() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_set_creation_counter() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_set_creation_counter() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_set_creation_counter() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_model )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_model( _python_str_plain_model, _python_par_model );
    PyObjectLocalVariable _python_var_mgr( _python_str_plain_mgr );

    // Actual function code.
    static PyFrameObject *frame_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_0950e0ee537cbe457db158b6c8bfe84b, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 103 );
        {
            PyObjectTempKeeper0 call2;
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call2.assign( _python_var_model.asObject() ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_issubclass ), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_model ) ).asObject() ) ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 103 );
            RAISE_EXCEPTION_WITH_TYPE( PyExc_AssertionError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
        }
        }
        frame_guard.setLineNumber( 104 );
        {
            PyObjectTempKeeper1 call4;
            _python_var_mgr.assign1( ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__manager_copy.asObject0(), _python_str_plain_copy ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_self.asObject() ) ) );
        }
        frame_guard.setLineNumber( 105 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_mgr.asObject(), _python_str_plain__set_creation_counter ) ).asObject() ) );
        frame_guard.setLineNumber( 106 );
        {
                PyObject *tmp_identifier = _python_var_model.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_mgr.asObject(), _python_str_plain_model );
        }
        frame_guard.setLineNumber( 107 );
        SET_ATTRIBUTE( Py_True, _python_var_mgr.asObject(), _python_str_plain__inherited );
        frame_guard.setLineNumber( 108 );
        return _python_var_mgr.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_model.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_mgr.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_model = NULL;
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
                PyErr_Format( PyExc_TypeError, "_copy_to_model() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_copy_to_model() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_model == key )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "_copy_to_model() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_copy_to_model() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_model, key ) )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "_copy_to_model() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_copy_to_model() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_copy_to_model() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_copy_to_model() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_copy_to_model() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_copy_to_model() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_copy_to_model() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_copy_to_model() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_copy_to_model() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_copy_to_model() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_copy_to_model() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_copy_to_model() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_copy_to_model() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_copy_to_model() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_copy_to_model() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_model != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_copy_to_model() got multiple values for keyword argument 'model'" );
             goto error_exit;
         }

        _python_par_model = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_model );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_model );

    return NULL;
}

static PyObject *dparse_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalVariable _python_var_obj( _python_str_plain_obj );

    // Actual function code.
    static PyFrameObject *frame_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_275ea90c76b2bf90df2c31a192717ab2, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 111 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_obj.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__manager_copy.asObject0(), _python_str_plain_copy ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_self.asObject() ) ) );
        }
        frame_guard.setLineNumber( 112 );
        {
                PyObject *tmp_identifier = _python_var_using.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_obj.asObject(), _python_str_plain__db );
        }
        frame_guard.setLineNumber( 113 );
        return _python_var_obj.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_obj.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "db_manager() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "db_manager() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "db_manager() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "db_manager() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "db_manager() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "db_manager() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "db_manager() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "db_manager() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "db_manager() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "db_manager() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "db_manager() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "db_manager() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "db_manager() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "db_manager() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "db_manager() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "db_manager() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "db_manager() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "db_manager() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "db_manager() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "db_manager() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_db_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_6_db_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_6_db_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_6_db_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_db_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_6_db_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_6_db_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_a2b2b3b7bc52895acbdf4d93ca7a4c3f, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_6_db_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_6_db_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 117 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 keeper_0;
            return ( CHECK_IF_TRUE( keeper_0.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__db ) ) ) ? keeper_0.asObject() : ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__manager_router.asObject0(), _python_str_plain_db_for_read ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_model ) ).asObject() ) ) );
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

        if ( frame_guard.getFrame0() == frame_function_6_db_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_6_db_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_6_db_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_db_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "db() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "db() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "db() got multiple values for keyword argument 'self'" );
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
                   "db() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "db() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "db() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "db() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "db() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "db() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "db() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "db() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "db() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "db() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "db() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "db() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "db() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "db() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6_db_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6_db_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_db_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_db_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_1914efaf9d817d262e045a0f1536cd13, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 127 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            return ( call1.assign( _mvar_django__db__models__manager_QuerySet.asObject0() ), call2.assign( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_model ) ).asObject() ) ), CALL_FUNCTION( call1.asObject0(), call2.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__db ) ).asObject(), _python_str_plain_using ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_queryset() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_queryset() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_queryset() got multiple values for keyword argument 'self'" );
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
                   "get_queryset() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_queryset() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_queryset() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_queryset() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_queryset() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_queryset() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_queryset() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_none_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_8_none_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_8_none_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_8_none_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_none_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_8_none_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_8_none_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_acfb8aad95e322af40bbc9b53bec6483, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_8_none_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_8_none_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 130 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_none ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_8_none_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_8_none_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_8_none_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_none_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "none() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "none() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "none() got multiple values for keyword argument 'self'" );
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
                   "none() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "none() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "none() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "none() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "none() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "none() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "none() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "none() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "none() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "none() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "none() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "none() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "none() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "none() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_8_none_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_8_none_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_8_none_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_none_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_all_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_9_all_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_9_all_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_9_all_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_all_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_9_all_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_9_all_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_60a95a022e454a621a14b550cbeedbef, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_9_all_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_9_all_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 133 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_9_all_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_9_all_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_9_all_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_all_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "all() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "all() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "all() got multiple values for keyword argument 'self'" );
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
                   "all() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "all() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "all() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "all() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "all() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "all() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "all() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "all() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "all() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "all() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "all() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "all() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "all() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "all() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_9_all_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_9_all_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9_all_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_all_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_count_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_10_count_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_10_count_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_10_count_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_count_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_10_count_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_10_count_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_56a7ef1f5ce6e9f6a9b4622964d8c596, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_10_count_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_10_count_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 136 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_count ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_10_count_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_10_count_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_10_count_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_count_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "count() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "count() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "count() got multiple values for keyword argument 'self'" );
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
                   "count() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "count() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "count() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "count() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "count() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "count() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "count() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "count() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "count() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "count() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "count() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "count() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "count() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "count() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_10_count_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_10_count_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_10_count_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_count_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_dates_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_fef16afd681a7c2e803dbae4e782038c, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 139 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_dates ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "dates() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "dates() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "dates() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "dates() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "dates() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "dates() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "dates() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_7dfc0e31fef814943b9a001276e934f5, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 142 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_datetimes ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "datetimes() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "datetimes() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "datetimes() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "datetimes() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "datetimes() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "datetimes() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "datetimes() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_d6785925068638eb3a289e7584836371, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 145 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_distinct ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "distinct() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "distinct() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "distinct() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "distinct() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "distinct() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "distinct() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "distinct() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14_extra_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_62441c7d5d921680d4b3d6a41b8e3d7e, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 148 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_extra ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "extra() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "extra() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "extra() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "extra() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "extra() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "extra() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "extra() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_get_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_15_get_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_15_get_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_15_get_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15_get_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_15_get_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_15_get_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_f839f7d11c75cb353396f00ffa8040bf, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_15_get_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_15_get_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 151 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_get ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_15_get_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_15_get_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_15_get_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_15_get_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "get() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "get() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "get() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "get() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_15_get_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_15_get_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_15_get_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_15_get_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_0d132399ab1fc346c8118b758d62f604, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 154 );
        {
            PyObjectTempKeeper1 call_tmp1;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_get_or_create ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp1.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                        PyErr_Format( PyExc_TypeError, "get_or_create() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_or_create() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "get_or_create() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_or_create() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_or_create() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_or_create() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_or_create() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_or_create() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_or_create() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_or_create() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_or_create() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_or_create() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_or_create() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_or_create() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_or_create() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_or_create() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_create_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_17_create_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_17_create_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_17_create_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_17_create_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_17_create_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_17_create_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_5dbee5171f2a32fe2cacb7784ecd6452, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_17_create_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_17_create_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 157 );
        {
            PyObjectTempKeeper1 call_tmp1;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_create ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp1.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_17_create_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_17_create_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_17_create_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_17_create_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                        PyErr_Format( PyExc_TypeError, "create() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "create() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "create() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "create() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "create() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "create() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "create() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "create() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "create() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "create() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "create() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "create() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "create() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "create() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "create() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "create() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_17_create_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_17_create_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_17_create_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_17_create_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_5b8756b0bab93d8dbe1db3fb2f7cec15, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 160 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_bulk_create ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "bulk_create() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "bulk_create() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "bulk_create() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "bulk_create() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "bulk_create() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "bulk_create() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "bulk_create() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_19_filter_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_f9cdf817ee2c35a72ce271b194a4d58d, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 163 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_filter ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "filter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "filter() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "filter() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "filter() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "filter() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "filter() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_9307e921ce1cc7d1d8b6c5b1f7bc4222, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 166 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_aggregate ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "aggregate() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "aggregate() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "aggregate() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "aggregate() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "aggregate() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "aggregate() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "aggregate() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_07a6e82c4383475a3796917ac00c6661, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 169 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_annotate ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "annotate() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "annotate() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "annotate() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "annotate() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "annotate() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "annotate() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "annotate() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_5b5c3dd9b5b249f7afdaa52e9ff15a60, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 172 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_complex_filter ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "complex_filter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "complex_filter() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "complex_filter() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "complex_filter() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "complex_filter() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "complex_filter() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "complex_filter() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_701a8107c8de02ca90e903ad475d0fe8, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 175 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_exclude ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "exclude() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "exclude() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "exclude() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "exclude() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "exclude() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "exclude() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "exclude() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_a6d1f7fd70e3dcde8ec97d7bec52c0fe, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 178 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_in_bulk ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "in_bulk() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "in_bulk() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "in_bulk() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "in_bulk() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "in_bulk() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "in_bulk() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "in_bulk() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_567f8a60551425b2a3f7940e1db55a63, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 181 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_iterator ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "iterator() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "iterator() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "iterator() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "iterator() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "iterator() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "iterator() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "iterator() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_a7b10d0ce248158560531e4b206171a9, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 184 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_earliest ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "earliest() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "earliest() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "earliest() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "earliest() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "earliest() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "earliest() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "earliest() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_27_latest_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_0464ddb289ea60ad90706f7a47f3de66, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 187 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_latest ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "latest() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "latest() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "latest() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "latest() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "latest() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "latest() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "latest() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_28_first_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_28_first_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_28_first_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_28_first_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_28_first_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_28_first_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_28_first_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_6506239aed12225ce2d155174ec2b83a, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_28_first_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_28_first_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 190 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_first ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_28_first_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_28_first_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_28_first_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_28_first_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "first() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "first() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "first() got multiple values for keyword argument 'self'" );
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
                   "first() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "first() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "first() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "first() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "first() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "first() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "first() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "first() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "first() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "first() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "first() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "first() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "first() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "first() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_28_first_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_28_first_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_28_first_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_28_first_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_29_last_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_29_last_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_29_last_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_29_last_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_29_last_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_29_last_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_29_last_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_2c9e4f4b5947f7d3e69d30e91a0ad662, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_29_last_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_29_last_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 193 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_last ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_29_last_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_29_last_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_29_last_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_29_last_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "last() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "last() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "last() got multiple values for keyword argument 'self'" );
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
                   "last() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "last() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "last() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "last() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "last() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "last() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "last() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "last() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "last() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "last() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "last() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "last() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "last() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "last() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_29_last_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_29_last_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_29_last_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_29_last_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_6fa9e35909550c4fa622a6d0016f8237, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 196 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_order_by ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "order_by() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "order_by() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "order_by() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "order_by() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "order_by() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "order_by() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "order_by() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_d75912b8cfe1fcf3a655d4da67956a15, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 199 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_select_for_update ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "select_for_update() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "select_for_update() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "select_for_update() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "select_for_update() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "select_for_update() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "select_for_update() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "select_for_update() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_0e711288099326f7c19f0d5aa438e830, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 202 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_select_related ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "select_related() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "select_related() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "select_related() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "select_related() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "select_related() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "select_related() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "select_related() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_ff2e0fa8962ac758a22e0b50fa6d9688, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 205 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_prefetch_related ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "prefetch_related() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "prefetch_related() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "prefetch_related() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "prefetch_related() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "prefetch_related() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "prefetch_related() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "prefetch_related() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_34_values_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_34_values_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_34_values_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_34_values_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_34_values_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_34_values_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_34_values_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_17fe7f5321e9ad7e0067f61e052733b7, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_34_values_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_34_values_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 208 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_values ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_34_values_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_34_values_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_34_values_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_34_values_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "values() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "values() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "values() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "values() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "values() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "values() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "values() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_34_values_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_34_values_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_34_values_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_34_values_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_55123208ab09ed1a45e8eb171b7e6ffa, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 211 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_values_list ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "values_list() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "values_list() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "values_list() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "values_list() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "values_list() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "values_list() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "values_list() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_36_update_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_36_update_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_36_update_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_36_update_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_36_update_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_36_update_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_36_update_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_0eca41d649070f1b78be557f2f3fcbbd, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_36_update_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_36_update_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 214 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_update ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_36_update_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_36_update_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_36_update_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_36_update_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "update() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "update() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "update() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "update() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "update() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "update() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "update() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_36_update_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_36_update_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_36_update_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_36_update_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_a5b668bbb92f7f01efdc7d244c669f83, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 217 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_reverse ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "reverse() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "reverse() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "reverse() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "reverse() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "reverse() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "reverse() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_38_defer_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_51fcd1684151051fc3ade3fbe8f1756c, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 220 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_defer ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "defer() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "defer() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "defer() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "defer() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "defer() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "defer() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "defer() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_39_only_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_39_only_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_39_only_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_39_only_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_39_only_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_39_only_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_39_only_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_87d278dacea6fe873b31fd021d4cf7df, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_39_only_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_39_only_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 223 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_only ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_39_only_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_39_only_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_39_only_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_39_only_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "only() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "only() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "only() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "only() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "only() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "only() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "only() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_39_only_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_39_only_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_39_only_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_39_only_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_40_using_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_40_using_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_40_using_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_40_using_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_40_using_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_40_using_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_40_using_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_8d264c1d101fa2b3725bf02464a76472, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_40_using_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_40_using_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 226 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_using ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_40_using_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_40_using_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_40_using_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_40_using_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "using() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "using() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "using() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "using() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "using() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "using() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "using() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_40_using_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_40_using_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_40_using_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_40_using_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_41_exists_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_4d2d04682ec3a5c10d02c2bdc5f625d6, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 229 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_exists ) ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "exists() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "exists() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "exists() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "exists() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "exists() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "exists() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "exists() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_objs, PyObject *_python_par_fields, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_objs( _python_str_plain_objs, _python_par_objs );
    PyObjectLocalParameterVariableNoDel _python_var_fields( _python_str_plain_fields, _python_par_fields );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_42__insert_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_450878a5434c01eeab09d20543507598, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 232 );
        {
            PyObjectTempKeeper0 call_tmp4;
            PyObjectTempKeeper1 call_tmp5;
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper0 make_tuple2;
            return ( call_tmp4.assign( _mvar_django__db__models__manager_insert_query.asObject0() ), call_tmp5.assign( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_model ) ), make_tuple2.assign( _python_var_objs.asObject() ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), _python_var_fields.asObject() ) ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp4.asObject(), call_tmp5.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_fields.updateLocalsDict( _python_var_objs.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_objs = NULL;
    PyObject *_python_par_fields = NULL;
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
                        PyErr_Format( PyExc_TypeError, "_insert() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_insert() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "_insert() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument objs was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_objs );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_objs == NULL );

            _python_par_objs = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_objs );

            kw_found += 1;
        }
    }

    // Check if argument fields was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_fields );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_fields == NULL );

            _python_par_fields = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_fields );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_insert() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_insert() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_insert() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_insert() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_insert() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_insert() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_insert() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_insert() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_insert() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_insert() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "_insert() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_insert() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_insert() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_objs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_insert() got multiple values for keyword argument 'objs'" );
             goto error_exit;
         }

        _python_par_objs = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_fields != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_insert() got multiple values for keyword argument 'fields'" );
             goto error_exit;
         }

        _python_par_fields = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_objs, _python_par_fields, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_objs );
    Py_XDECREF( _python_par_fields );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_43__update_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_values, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_values( _python_str_plain_values, _python_par_values );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_43__update_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_43__update_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_43__update_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_43__update_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_43__update_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_43__update_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_e7b09f1ac08c1ffec8f1e8e7d524f77f, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_43__update_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_43__update_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 235 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper1 call_tmp2;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain__update ) ), call_tmp2.assign( MAKE_TUPLE1( _python_var_values.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_values.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_43__update_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_43__update_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_43__update_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_43__update_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_values = NULL;
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
                        PyErr_Format( PyExc_TypeError, "_update() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_update() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "_update() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument values was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_values );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_values == NULL );

            _python_par_values = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_values );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_update() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_update() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_update() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_update() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_update() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_update() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_update() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_update() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_update() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_update() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_update() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_update() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_update() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_values != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_update() got multiple values for keyword argument 'values'" );
             goto error_exit;
         }

        _python_par_values = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_43__update_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_values, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_values );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_43__update_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_43__update_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_43__update_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_raw_query, PyObject *_python_par_params, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_raw_query( _python_str_plain_raw_query, _python_par_raw_query );
    PyObjectLocalParameterVariableNoDel _python_var_params( _python_str_plain_params, _python_par_params );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_44_raw_of_class_3_Manager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager );
        }

        frame_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_365de4b4588720a6b628c22088bbc754, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 238 );
        {
            PyObjectTempKeeper1 call_tmp10;
            PyObjectTempKeeper0 call_tmp11;
            PyObjectTempKeeper0 call_tmp9;
            PyObjectTempKeeper0 make_dict1;
            PyObjectTempKeeper1 make_dict3;
            PyObjectTempKeeper0 make_dict5;
            return ( call_tmp9.assign( _mvar_django__db__models__manager_RawQuerySet.asObject0() ), call_tmp10.assign( ( make_dict1.assign( _python_var_raw_query.asObject() ), make_dict3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_model ) ), make_dict5.assign( _python_var_params.asObject() ), MAKE_DICT4( make_dict1.asObject0(), _python_str_plain_raw_query, make_dict3.asObject0(), _python_str_plain_model, make_dict5.asObject0(), _python_str_plain_params, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__db ) ).asObject(), _python_str_plain_using ) ) ), call_tmp11.assign( _python_var_args.asObject() ), impl_function_10_complex_call_helper_keywords_star_list_star_dict_of_module___internal__( call_tmp9.asObject(), call_tmp10.asObject(), call_tmp11.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_params.updateLocalsDict( _python_var_raw_query.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager );
           frame_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_raw_query = NULL;
    PyObject *_python_par_params = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "raw() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "raw() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "raw() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument raw_query was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_raw_query );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_raw_query == NULL );

            _python_par_raw_query = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_raw_query );

            kw_found += 1;
        }
    }

    // Check if argument params was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_params );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_params == NULL );

            _python_par_params = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_params );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "raw() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "raw() takes at least %d non-keyword arguments (%zd given)", 3, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "raw() takes at least %d arguments (%zd given)", 3, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "raw() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_raw_query != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "raw() got multiple values for keyword argument 'raw_query'" );
             goto error_exit;
         }

        _python_par_raw_query = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_params != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "raw() got multiple values for keyword argument 'params'" );
             goto error_exit;
         }

        _python_par_params = INCREASE_REFCOUNT( args[ 2 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 3 )
    {
        _python_par_args = PyTuple_New( args_size - 3 );

        for( Py_ssize_t i = 0; i < args_size - 3; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[3+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }
    // Assign values not given to defaults
    if ( _python_par_params == NULL )
    {
        _python_par_params = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_params );
    }


    return impl_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager( self, _python_par_self, _python_par_raw_query, _python_par_params, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_raw_query );
    Py_XDECREF( _python_par_params );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), MAKE_TUPLE( &args[ 3 ], size > 3 ? size-3 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_ManagerDescriptor_of_module_django__db__models__manager(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___get__( _python_str_plain___get__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_manager );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager(  ) );
    _python_var___get__.assign1( MAKE_FUNCTION_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager(  ) );
    return _python_var___get__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_manager )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_manager( _python_str_plain_manager, _python_par_manager );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager ) )
    {
        if ( frame_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager );
        }

        frame_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_a087b96aaacbb1fe886fb0176202a10e, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 245 );
        {
                PyObject *tmp_identifier = _python_var_manager.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_manager );
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
        frame_guard.getFrame0()->f_locals = _python_var_manager.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager );
           frame_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_manager = NULL;
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
            if ( found == false && _python_str_plain_manager == key )
            {
                if (unlikely( _python_par_manager ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'manager'" );
                    goto error_exit;
                }

                _python_par_manager = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_manager, key ) )
            {
                if (unlikely( _python_par_manager ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'manager'" );
                    goto error_exit;
                }

                _python_par_manager = value;

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
         if (unlikely( _python_par_manager != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'manager'" );
             goto error_exit;
         }

        _python_par_manager = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager( self, _python_par_self, _python_par_manager );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_manager );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_instance, PyObject *_python_par_type )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_instance( _python_str_plain_instance, _python_par_instance );
    PyObjectLocalParameterVariableNoDel _python_var_type( _python_str_plain_type, _python_par_type );

    // Actual function code.
    static PyFrameObject *frame_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager ) )
    {
        if ( frame_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager );
        }

        frame_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_daa0865390271bdb7def3940734aab3a, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 248 );
        if ( RICH_COMPARE_BOOL_NE( _python_var_instance.asObject(), Py_None ) )
        {
            frame_guard.setLineNumber( 249 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AttributeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_d72cc93ba8d1a3d9ddfa39f67e12770c, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_type.asObject(), _python_str_plain___name__ ) ).asObject() ) ).asObject() ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 250 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_manager );
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
        frame_guard.getFrame0()->f_locals = _python_var_type.updateLocalsDict( _python_var_instance.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager );
           frame_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_instance = NULL;
    PyObject *_python_par_type = NULL;
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
                PyErr_Format( PyExc_TypeError, "__get__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_instance == key )
            {
                if (unlikely( _python_par_instance ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'instance'" );
                    goto error_exit;
                }

                _python_par_instance = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_type == key )
            {
                if (unlikely( _python_par_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'type'" );
                    goto error_exit;
                }

                _python_par_type = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_instance, key ) )
            {
                if (unlikely( _python_par_instance ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'instance'" );
                    goto error_exit;
                }

                _python_par_instance = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_type, key ) )
            {
                if (unlikely( _python_par_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'type'" );
                    goto error_exit;
                }

                _python_par_type = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__get__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__get__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__get__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__get__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__get__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__get__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__get__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__get__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_instance != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'instance'" );
             goto error_exit;
         }

        _python_par_instance = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'type'" );
             goto error_exit;
         }

        _python_par_type = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_type == NULL )
    {
        _python_par_type = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_type );
    }


    return impl_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager( self, _python_par_self, _python_par_instance, _python_par_type );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_instance );
    Py_XDECREF( _python_par_type );

    return NULL;
}

static PyObject *dparse_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___get__( _python_str_plain___get__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_manager );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager(  ) );
    _python_var___get__.assign1( MAKE_FUNCTION_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager(  ) );
    return _python_var___get__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_model )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_model( _python_str_plain_model, _python_par_model );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager ) )
    {
        if ( frame_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager );
        }

        frame_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_3a1d8f787608392392b87dd0d8f14bfc, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 257 );
        {
                PyObject *tmp_identifier = _python_var_model.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_model );
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
        frame_guard.getFrame0()->f_locals = _python_var_model.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager );
           frame_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_model = NULL;
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
            if ( found == false && _python_str_plain_model == key )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_model, key ) )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

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
         if (unlikely( _python_par_model != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'model'" );
             goto error_exit;
         }

        _python_par_model = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager( self, _python_par_self, _python_par_model );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_model );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_instance, PyObject *_python_par_type )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_instance( _python_str_plain_instance, _python_par_instance );
    PyObjectLocalParameterVariableNoDel _python_var_type( _python_str_plain_type, _python_par_type );

    // Actual function code.
    static PyFrameObject *frame_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager ) )
    {
        if ( frame_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager );
        }

        frame_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_6a9d65b21f187a8e8a399e5f6f7f7b41, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 260 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AttributeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_69621fc6ff77ecd785b9b36620f54b03, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_model ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ).asObject() ) ).asObject() ) ).asObject() ) ).asObject() ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_type.updateLocalsDict( _python_var_instance.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager );
           frame_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_instance = NULL;
    PyObject *_python_par_type = NULL;
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
                PyErr_Format( PyExc_TypeError, "__get__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_instance == key )
            {
                if (unlikely( _python_par_instance ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'instance'" );
                    goto error_exit;
                }

                _python_par_instance = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_type == key )
            {
                if (unlikely( _python_par_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'type'" );
                    goto error_exit;
                }

                _python_par_type = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_instance, key ) )
            {
                if (unlikely( _python_par_instance ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'instance'" );
                    goto error_exit;
                }

                _python_par_instance = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_type, key ) )
            {
                if (unlikely( _python_par_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'type'" );
                    goto error_exit;
                }

                _python_par_type = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__get__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__get__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__get__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__get__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__get__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__get__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__get__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__get__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_instance != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'instance'" );
             goto error_exit;
         }

        _python_par_instance = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'type'" );
             goto error_exit;
         }

        _python_par_type = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_type == NULL )
    {
        _python_par_type = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_type );
    }


    return impl_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager( self, _python_par_self, _python_par_instance, _python_par_type );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_instance );
    Py_XDECREF( _python_par_type );

    return NULL;
}

static PyObject *dparse_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___get__( _python_str_plain___get__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_manager );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager(  ) );
    _python_var___get__.assign1( MAKE_FUNCTION_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager(  ) );
    return _python_var___get__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_model )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_model( _python_str_plain_model, _python_par_model );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager ) )
    {
        if ( frame_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager );
        }

        frame_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_e4d577fb94ce03d6add94c36db819313, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 269 );
        {
                PyObject *tmp_identifier = _python_var_model.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_model );
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
        frame_guard.getFrame0()->f_locals = _python_var_model.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager );
           frame_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_model = NULL;
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
            if ( found == false && _python_str_plain_model == key )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_model, key ) )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

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
         if (unlikely( _python_par_model != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'model'" );
             goto error_exit;
         }

        _python_par_model = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager( self, _python_par_self, _python_par_model );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_model );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_instance, PyObject *_python_par_type )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_instance( _python_str_plain_instance, _python_par_instance );
    PyObjectLocalParameterVariableNoDel _python_var_type( _python_str_plain_type, _python_par_type );

    // Actual function code.
    static PyFrameObject *frame_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager ) )
    {
        if ( frame_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager );
        }

        frame_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_7c115ef0b1a59d885e39bf15df6b3008, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 272 );
        {
            PyObjectTempKeeper1 make_tuple1;
            {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AttributeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_7f83c5460cec6d86dd7d8f016de048da, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_model ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_model ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_swapped ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_type.updateLocalsDict( _python_var_instance.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager );
           frame_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_instance = NULL;
    PyObject *_python_par_type = NULL;
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
                PyErr_Format( PyExc_TypeError, "__get__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_instance == key )
            {
                if (unlikely( _python_par_instance ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'instance'" );
                    goto error_exit;
                }

                _python_par_instance = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_type == key )
            {
                if (unlikely( _python_par_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'type'" );
                    goto error_exit;
                }

                _python_par_type = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_instance, key ) )
            {
                if (unlikely( _python_par_instance ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'instance'" );
                    goto error_exit;
                }

                _python_par_instance = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_type, key ) )
            {
                if (unlikely( _python_par_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'type'" );
                    goto error_exit;
                }

                _python_par_type = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__get__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__get__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__get__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__get__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__get__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__get__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__get__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__get__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__get__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_instance != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'instance'" );
             goto error_exit;
         }

        _python_par_instance = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'type'" );
             goto error_exit;
         }

        _python_par_type = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_type == NULL )
    {
        _python_par_type = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_type );
    }


    return impl_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager( self, _python_par_self, _python_par_instance, _python_par_type );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_instance );
    Py_XDECREF( _python_par_type );

    return NULL;
}

static PyObject *dparse_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_7_EmptyManager_of_module_django__db__models__manager(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_get_queryset( _python_str_plain_get_queryset );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_manager );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager(  ) );
    _python_var_get_queryset.assign1( MAKE_FUNCTION_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager(  ) );
    return _python_var_get_queryset.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_model )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_model( _python_str_plain_model, _python_par_model );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager );
        }

        frame_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_a72caefde9f1be9f0095afe4b0306e51, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 279 );
        {
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__db__models__manager_EmptyManager.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 280 );
        {
                PyObject *tmp_identifier = _python_var_model.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_model );
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
        frame_guard.getFrame0()->f_locals = _python_var_model.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager );
           frame_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_model = NULL;
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
            if ( found == false && _python_str_plain_model == key )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_model, key ) )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

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
         if (unlikely( _python_par_model != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'model'" );
             goto error_exit;
         }

        _python_par_model = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager( self, _python_par_self, _python_par_model );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_model );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager = NULL;

    if ( isFrameUnusable( frame_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager ) )
    {
        if ( frame_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager" );
#endif
            Py_DECREF( frame_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager );
        }

        frame_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager = MAKE_FRAME( _codeobj_9cc77887ee5ecc5319b87ebfba952fdc, _module_django__db__models__manager );
    }

    FrameGuard frame_guard( frame_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 283 );
        {
            PyObjectTempKeeper0 super1;
            return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__db__models__manager_EmptyManager.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_get_queryset ) ).asObject() ) ).asObject(), _python_str_plain_none ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager )
        {
           Py_DECREF( frame_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager );
           frame_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_queryset() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_queryset() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_queryset() got multiple values for keyword argument 'self'" );
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
                   "get_queryset() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_queryset() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_queryset() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_queryset() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_queryset() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_queryset() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_queryset() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_queryset() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_count_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_count_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_10_count_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_count,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_56a7ef1f5ce6e9f6a9b4622964d8c596,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_11_dates_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_dates,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fef16afd681a7c2e803dbae4e782038c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_12_datetimes_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_datetimes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7dfc0e31fef814943b9a001276e934f5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_13_distinct_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_distinct,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d6785925068638eb3a289e7584836371,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_14_extra_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_extra,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_62441c7d5d921680d4b3d6a41b8e3d7e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_get_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_get_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_15_get_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_get,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f839f7d11c75cb353396f00ffa8040bf,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_16_get_or_create_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_get_or_create,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0d132399ab1fc346c8118b758d62f604,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_create_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_create_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_17_create_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_create,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5dbee5171f2a32fe2cacb7784ecd6452,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_18_bulk_create_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_bulk_create,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5b8756b0bab93d8dbe1db3fb2f7cec15,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_19_filter_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f9cdf817ee2c35a72ce271b194a4d58d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_1___init___of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a304a1ac04702dc8795f8c8f88badc60,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager,
        dparse_function_1___init___of_class_4_ManagerDescriptor_of_module_django__db__models__manager,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a087b96aaacbb1fe886fb0176202a10e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager,
        dparse_function_1___init___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3a1d8f787608392392b87dd0d8f14bfc,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager,
        dparse_function_1___init___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e4d577fb94ce03d6add94c36db819313,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager,
        dparse_function_1___init___of_class_7_EmptyManager_of_module_django__db__models__manager,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a72caefde9f1be9f0095afe4b0306e51,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_ensure_default_manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_ensure_default_manager_of_module_django__db__models__manager,
        dparse_function_1_ensure_default_manager_of_module_django__db__models__manager,
        _python_str_plain_ensure_default_manager,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fa617dda0f7e586659f1a87f28a61b1c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        _python_str_digest_7e3c0b80d973839bd85632ad7b64838c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_20_aggregate_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_aggregate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9307e921ce1cc7d1d8b6c5b1f7bc4222,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_21_annotate_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_annotate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_07a6e82c4383475a3796917ac00c6661,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_22_complex_filter_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_complex_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5b5c3dd9b5b249f7afdaa52e9ff15a60,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_23_exclude_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_exclude,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_701a8107c8de02ca90e903ad475d0fe8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_24_in_bulk_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_in_bulk,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a6d1f7fd70e3dcde8ec97d7bec52c0fe,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_25_iterator_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_iterator,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_567f8a60551425b2a3f7940e1db55a63,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_26_earliest_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_earliest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a7b10d0ce248158560531e4b206171a9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_27_latest_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_latest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0464ddb289ea60ad90706f7a47f3de66,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_28_first_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_28_first_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_28_first_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_first,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6506239aed12225ce2d155174ec2b83a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_29_last_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_29_last_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_29_last_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_last,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2c9e4f4b5947f7d3e69d30e91a0ad662,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager,
        dparse_function_2___get___of_class_4_ManagerDescriptor_of_module_django__db__models__manager,
        _python_str_plain___get__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_daa0865390271bdb7def3940734aab3a,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager,
        dparse_function_2___get___of_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager,
        _python_str_plain___get__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6a9d65b21f187a8e8a399e5f6f7f7b41,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager,
        dparse_function_2___get___of_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager,
        _python_str_plain___get__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7c115ef0b1a59d885e39bf15df6b3008,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_2_contribute_to_class_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_contribute_to_class,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_563b86c8d58490777166af13931bae4c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager,
        dparse_function_2_get_queryset_of_class_7_EmptyManager_of_module_django__db__models__manager,
        _python_str_plain_get_queryset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9cc77887ee5ecc5319b87ebfba952fdc,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_30_order_by_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_order_by,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6fa9e35909550c4fa622a6d0016f8237,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_31_select_for_update_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_select_for_update,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d75912b8cfe1fcf3a655d4da67956a15,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_32_select_related_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_select_related,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0e711288099326f7c19f0d5aa438e830,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_33_prefetch_related_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_prefetch_related,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ff2e0fa8962ac758a22e0b50fa6d9688,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_34_values_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_34_values_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_34_values_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_values,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_17fe7f5321e9ad7e0067f61e052733b7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_35_values_list_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_values_list,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_55123208ab09ed1a45e8eb171b7e6ffa,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_36_update_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_36_update_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_36_update_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_update,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0eca41d649070f1b78be557f2f3fcbbd,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_37_reverse_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_reverse,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a5b668bbb92f7f01efdc7d244c669f83,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_38_defer_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_defer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_51fcd1684151051fc3ade3fbe8f1756c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_39_only_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_39_only_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_39_only_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_only,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_87d278dacea6fe873b31fd021d4cf7df,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_3__set_creation_counter_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain__set_creation_counter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_77aa58ff6722f02cd8c375ab69da83d2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        _python_str_digest_54a8042ccca8e90ff89947a0ee9ebace
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_40_using_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_40_using_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_40_using_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_using,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8d264c1d101fa2b3725bf02464a76472,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_41_exists_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_exists,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4d2d04682ec3a5c10d02c2bdc5f625d6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_42__insert_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain__insert,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_450878a5434c01eeab09d20543507598,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_43__update_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_43__update_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_43__update_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain__update,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e7b09f1ac08c1ffec8f1e8e7d524f77f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_44_raw_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_raw,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_365de4b4588720a6b628c22088bbc754,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_4__copy_to_model_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain__copy_to_model,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0950e0ee537cbe457db158b6c8bfe84b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        _python_str_digest_df84c1dc34bf93e702107560f094b787
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_5_db_manager_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_db_manager,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_275ea90c76b2bf90df2c31a192717ab2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_db_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_db_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_6_db_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_db,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a2b2b3b7bc52895acbdf4d93ca7a4c3f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_7_get_queryset_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_get_queryset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1914efaf9d817d262e045a0f1536cd13,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        _python_str_digest_a6cb14b8a7e9e00ad9ea4155d6bea7e7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_none_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_none_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_8_none_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_none,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_acfb8aad95e322af40bbc9b53bec6483,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_all_of_class_3_Manager_of_module_django__db__models__manager(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_all_of_class_3_Manager_of_module_django__db__models__manager,
        dparse_function_9_all_of_class_3_Manager_of_module_django__db__models__manager,
        _python_str_plain_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_60a95a022e454a621a14b550cbeedbef,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__manager,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db.models.manager",   /* m_name */
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

MOD_INIT_DECL( django__db__models__manager )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db__models__manager );
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

    // puts( "in initdjango__db__models__manager" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db__models__manager = Py_InitModule4(
        "django.db.models.manager",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db__models__manager = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db__models__manager = (PyDictObject *)((PyModuleObject *)_module_django__db__models__manager)->md_dict;

    assertObject( _module_django__db__models__manager );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_1c8eebaa8ea71ffa40946e237205aa8d, _module_django__db__models__manager );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db__models__manager );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db__models__manager != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_d55a2a959351c7c4bbb38e35dd145e2f );
    PyFrameObject *frame_module_django__db__models__manager = MAKE_FRAME( _codeobj_1ae4cb893108ece122a1377daace379d, _module_django__db__models__manager );

    FrameGuard frame_guard( frame_module_django__db__models__manager );
    try
    {
        assert( Py_REFCNT( frame_module_django__db__models__manager ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_copy, IMPORT_MODULE( _python_str_plain_copy, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_router, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, _python_list_str_plain_router_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_router ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_QuerySet, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7724c9571b8badb7e606430d6fe9b7eb, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, _python_list_8f3c56b92920f5ec678771802e6e8e82_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_QuerySet ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_insert_query, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7724c9571b8badb7e606430d6fe9b7eb, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, _python_list_8f3c56b92920f5ec678771802e6e8e82_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_insert_query ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_RawQuerySet, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7724c9571b8badb7e606430d6fe9b7eb, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, _python_list_8f3c56b92920f5ec678771802e6e8e82_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_RawQuerySet ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_signals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_cb8fece6bec5decd96c3feee6d1288d4, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, _python_list_str_plain_signals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_signals ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_FieldDoesNotExist, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_a15da66f68fa45171bbcd4f7a464bcd8, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, _python_list_str_plain_FieldDoesNotExist_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FieldDoesNotExist ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_RenameMethodsBase, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_82e2052e97d6975cbf1c3e3aad670491, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, ((PyModuleObject *)_module_django__db__models__manager)->md_dict, _python_list_str_plain_RenameMethodsBase_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_RenameMethodsBase ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_ensure_default_manager, MAKE_FUNCTION_function_1_ensure_default_manager_of_module_django__db__models__manager(  ) );
        frame_guard.setLineNumber( 48 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__manager_signals.asObject0(), _python_str_plain_class_prepared ) ).asObject(), _python_str_plain_connect ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _mvar_django__db__models__manager_ensure_default_manager.asObject0() ) ) );
        }
        {
            frame_guard.setLineNumber( 51 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__manager_RenameMethodsBase.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_RenameManagerMethods_of_module_django__db__models__manager(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__manager___metaclass__.isInitialized( false ) ? _mvar_django__db__models__manager___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call3;
                PyObjectTempKeeper0 call5;
                _tmp_python_tmp_class = ( call3.assign( _python_tmp_metaclass.asObject() ), call5.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_str_plain_RenameManagerMethods, call5.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_RenameManagerMethods, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 58 );
            PyObject *_tmp_python_tmp_bases;
            {
                PyObjectTempKeeper1 call7;
                _tmp_python_tmp_bases = MAKE_TUPLE1( PyObjectTemporary( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__manager_six.asObject0(), _python_str_plain_with_metaclass ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _mvar_django__db__models__manager_RenameManagerMethods.asObject0() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_bases( _tmp_python_tmp_bases );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_Manager_of_module_django__db__models__manager(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__manager___metaclass__.isInitialized( false ) ? _mvar_django__db__models__manager___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_Manager, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_Manager, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 241 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_ManagerDescriptor_of_module_django__db__models__manager(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__manager___metaclass__.isInitialized( false ) ? _mvar_django__db__models__manager___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call15;
                _tmp_python_tmp_class = ( call13.assign( _python_tmp_metaclass.asObject() ), call15.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_str_plain_ManagerDescriptor, call15.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_ManagerDescriptor, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 253 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_5_AbstractManagerDescriptor_of_module_django__db__models__manager(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__manager___metaclass__.isInitialized( false ) ? _mvar_django__db__models__manager___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call17;
                PyObjectTempKeeper0 call19;
                _tmp_python_tmp_class = ( call17.assign( _python_tmp_metaclass.asObject() ), call19.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_str_plain_AbstractManagerDescriptor, call19.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_AbstractManagerDescriptor, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 265 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_6_SwappedManagerDescriptor_of_module_django__db__models__manager(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__manager___metaclass__.isInitialized( false ) ? _mvar_django__db__models__manager___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call21;
                PyObjectTempKeeper0 call23;
                _tmp_python_tmp_class = ( call21.assign( _python_tmp_metaclass.asObject() ), call23.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), _python_str_plain_SwappedManagerDescriptor, call23.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_SwappedManagerDescriptor, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 277 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__manager_Manager.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_7_EmptyManager_of_module_django__db__models__manager(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__manager___metaclass__.isInitialized( false ) ? _mvar_django__db__models__manager___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call25;
                PyObjectTempKeeper0 call27;
                _tmp_python_tmp_class = ( call25.assign( _python_tmp_metaclass.asObject() ), call27.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), _python_str_plain_EmptyManager, call27.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__manager, (Nuitka_StringObject *)_python_str_plain_EmptyManager, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db__models__manager)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__db__models__manager );
}
