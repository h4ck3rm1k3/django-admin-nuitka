// Generated code for Python source for module 'django.db.models.base'
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

// The _module_django__db__models__base is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db__models__base;
PyDictObject *_moduledict_django__db__models__base;

// The module level variables.
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_AutoField( &_module_django__db__models__base, &_python_str_plain_AutoField );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_Collector( &_module_django__db__models__base, &_python_str_plain_Collector );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_DEFAULT_DB_ALIAS( &_module_django__db__models__base, &_python_str_plain_DEFAULT_DB_ALIAS );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_DatabaseError( &_module_django__db__models__base, &_python_str_plain_DatabaseError );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_DeferredAttribute( &_module_django__db__models__base, &_python_str_plain_DeferredAttribute );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_FieldDoesNotExist( &_module_django__db__models__base, &_python_str_plain_FieldDoesNotExist );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_FieldError( &_module_django__db__models__base, &_python_str_plain_FieldError );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_ForeignObjectRel( &_module_django__db__models__base, &_python_str_plain_ForeignObjectRel );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_ManyToOneRel( &_module_django__db__models__base, &_python_str_plain_ManyToOneRel );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_Model( &_module_django__db__models__base, &_python_str_plain_Model );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_ModelBase( &_module_django__db__models__base, &_python_str_plain_ModelBase );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_ModelState( &_module_django__db__models__base, &_python_str_plain_ModelState );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_MultipleObjectsReturned( &_module_django__db__models__base, &_python_str_plain_MultipleObjectsReturned );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_NON_FIELD_ERRORS( &_module_django__db__models__base, &_python_str_plain_NON_FIELD_ERRORS );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_ObjectDoesNotExist( &_module_django__db__models__base, &_python_str_plain_ObjectDoesNotExist );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_OneToOneField( &_module_django__db__models__base, &_python_str_plain_OneToOneField );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_Options( &_module_django__db__models__base, &_python_str_plain_Options );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_Q( &_module_django__db__models__base, &_python_str_plain_Q );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_ValidationError( &_module_django__db__models__base, &_python_str_plain_ValidationError );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base__( &_module_django__db__models__base, &_python_str_plain__ );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base___metaclass__( &_module_django__db__models__base, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_add_lazy_relation( &_module_django__db__models__base, &_python_str_plain_add_lazy_relation );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_capfirst( &_module_django__db__models__base, &_python_str_plain_capfirst );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_copy( &_module_django__db__models__base, &_python_str_plain_copy );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_curry( &_module_django__db__models__base, &_python_str_plain_curry );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_deferred_class_factory( &_module_django__db__models__base, &_python_str_plain_deferred_class_factory );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_force_str( &_module_django__db__models__base, &_python_str_plain_force_str );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_force_text( &_module_django__db__models__base, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_get_absolute_url( &_module_django__db__models__base, &_python_str_plain_get_absolute_url );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_get_model( &_module_django__db__models__base, &_python_str_plain_get_model );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_get_text_list( &_module_django__db__models__base, &_python_str_plain_get_text_list );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_method_get_order( &_module_django__db__models__base, &_python_str_plain_method_get_order );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_method_set_order( &_module_django__db__models__base, &_python_str_plain_method_set_order );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_model_unpickle( &_module_django__db__models__base, &_python_str_plain_model_unpickle );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_register_models( &_module_django__db__models__base, &_python_str_plain_register_models );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_router( &_module_django__db__models__base, &_python_str_plain_router );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_settings( &_module_django__db__models__base, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_signals( &_module_django__db__models__base, &_python_str_plain_signals );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_six( &_module_django__db__models__base, &_python_str_plain_six );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_subclass_exception( &_module_django__db__models__base, &_python_str_plain_subclass_exception );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_sys( &_module_django__db__models__base, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_transaction( &_module_django__db__models__base, &_python_str_plain_transaction );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_unpickle_inner_exception( &_module_django__db__models__base, &_python_str_plain_unpickle_inner_exception );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_update_wrapper( &_module_django__db__models__base, &_python_str_plain_update_wrapper );
static PyObjectGlobalVariable_django__db__models__base _mvar_django__db__models__base_zip( &_module_django__db__models__base, &_python_str_plain_zip );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_2_ModelBase_of_module_django__db__models__base(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_b );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_4_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_f );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_5_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator, PyObjectLocalParameterVariableNoDel &python_closure_cls );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_6_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_f );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_f );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_ModelState_of_module_django__db__models__base(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_Model_of_module_django__db__models__base(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_11_save_of_class_4_Model_of_module_django__db__models__base( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_f, PyObjectLocalParameterVariableNoDel &python_closure_self );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_f );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_f, PyObjectLocalParameterVariableNoDel &python_closure_update_fields );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_3_of_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_f, PyObjectLocalParameterVariableNoDel &python_closure_raw, PyObjectLocalParameterVariableNoDel &python_closure_self );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_4_of_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_f );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_f, PyObjectLocalVariable &python_closure_opts );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_6_method_get_order_of_module_django__db__models__base( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_pk_name, PyObjectLocalVariable &python_closure_r );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_Empty_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_10_unpickle_inner_exception_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_11_save_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_12_save_base_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_14__save_table_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_15__do_update_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_17_delete_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_ModelState_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base( PyObjectSharedLocalVariable &python_closure_attached_to, PyObjectSharedLocalVariable &python_closure_name );


// This structure is for attachment as self of function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base.
// It is allocated at the time the function object is created.
struct _context_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_attached_to;
    PyObjectClosureVariable python_closure_name;
};

static void _context_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base_destructor( void *context_voidptr )
{
    _context_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base_t *_python_context = (_context_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_1_subclass_exception_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_22_clean_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_2___repr___of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_3___str___of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_4___eq___of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_5___ne___of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_5_method_set_order_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_6___hash___of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_6_method_get_order_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_7___reduce___of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_7_get_absolute_url_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base(  );


static PyObject *MAKE_FUNCTION_function_9_model_unpickle_of_module_django__db__models__base(  );


// The module function definitions.
static PyObject *impl_function_1_subclass_exception_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_name, PyObject *_python_par_parents, PyObject *_python_par_module, PyObject *_python_par_attached_to )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_parents( _python_str_plain_parents, _python_par_parents );
    PyObjectLocalParameterVariableNoDel _python_var_module( _python_str_plain_module, _python_par_module );
    PyObjectSharedLocalVariable _python_var_attached_to( _python_str_plain_attached_to, _python_par_attached_to );
    PyObjectLocalVariable _python_var_class_dict( _python_str_plain_class_dict );
    PyObjectLocalVariable _python_var___reduce__( _python_str_plain___reduce__ );
    PyObjectLocalVariable _python_var___setstate__( _python_str_plain___setstate__ );

    // Actual function code.
    static PyFrameObject *frame_function_1_subclass_exception_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_1_subclass_exception_of_module_django__db__models__base ) )
    {
        if ( frame_function_1_subclass_exception_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_subclass_exception_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_1_subclass_exception_of_module_django__db__models__base );
        }

        frame_function_1_subclass_exception_of_module_django__db__models__base = MAKE_FRAME( _codeobj_cc5c2e465ea5e5d93db1b4a7a77bb971, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_1_subclass_exception_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_1_subclass_exception_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 38 );
        _python_var_class_dict.assign1( MAKE_DICT1( _python_var_module.asObject(), _python_unicode_plain___module__ ) );
        frame_guard.setLineNumber( 39 );
        if ( ( _python_var_attached_to.asObject() != Py_None ) )
        {
            _python_var___reduce__.assign1( MAKE_FUNCTION_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base( _python_var_attached_to, _python_var_name ) );
            _python_var___setstate__.assign1( MAKE_FUNCTION_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base(  ) );
            frame_guard.setLineNumber( 48 );
            {
                    PyObject *tmp_identifier = _python_var___reduce__.asObject();
                    SET_SUBSCRIPT( tmp_identifier, _python_var_class_dict.asObject(), _python_unicode_plain___reduce__ );
            }
            frame_guard.setLineNumber( 49 );
            {
                    PyObject *tmp_identifier = _python_var___setstate__.asObject();
                    SET_SUBSCRIPT( tmp_identifier, _python_var_class_dict.asObject(), _python_unicode_plain___setstate__ );
            }
        }
        frame_guard.setLineNumber( 51 );
        {
            PyObjectTempKeeper0 type31;
            PyObjectTempKeeper0 type32;
            return ( type31.assign( _python_var_name.asObject() ), type32.assign( _python_var_parents.asObject() ), BUILTIN_TYPE3( _python_str_digest_b9e245945c635125fec435a5e0acf03b, type31.asObject0(), type32.asObject0(), _python_var_class_dict.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_attached_to.updateLocalsDict( _python_var_module.updateLocalsDict( _python_var_parents.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var___setstate__.updateLocalsDict( _python_var___reduce__.updateLocalsDict( _python_var_class_dict.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_subclass_exception_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_1_subclass_exception_of_module_django__db__models__base );
           frame_function_1_subclass_exception_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_subclass_exception_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_parents = NULL;
    PyObject *_python_par_module = NULL;
    PyObject *_python_par_attached_to = NULL;
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
                PyErr_Format( PyExc_TypeError, "subclass_exception() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "subclass_exception() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_parents == key )
            {
                if (unlikely( _python_par_parents ))
                {
                    PyErr_Format( PyExc_TypeError, "subclass_exception() got multiple values for keyword argument 'parents'" );
                    goto error_exit;
                }

                _python_par_parents = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_module == key )
            {
                if (unlikely( _python_par_module ))
                {
                    PyErr_Format( PyExc_TypeError, "subclass_exception() got multiple values for keyword argument 'module'" );
                    goto error_exit;
                }

                _python_par_module = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_attached_to == key )
            {
                if (unlikely( _python_par_attached_to ))
                {
                    PyErr_Format( PyExc_TypeError, "subclass_exception() got multiple values for keyword argument 'attached_to'" );
                    goto error_exit;
                }

                _python_par_attached_to = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "subclass_exception() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_parents, key ) )
            {
                if (unlikely( _python_par_parents ))
                {
                    PyErr_Format( PyExc_TypeError, "subclass_exception() got multiple values for keyword argument 'parents'" );
                    goto error_exit;
                }

                _python_par_parents = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_module, key ) )
            {
                if (unlikely( _python_par_module ))
                {
                    PyErr_Format( PyExc_TypeError, "subclass_exception() got multiple values for keyword argument 'module'" );
                    goto error_exit;
                }

                _python_par_module = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_attached_to, key ) )
            {
                if (unlikely( _python_par_attached_to ))
                {
                    PyErr_Format( PyExc_TypeError, "subclass_exception() got multiple values for keyword argument 'attached_to'" );
                    goto error_exit;
                }

                _python_par_attached_to = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "subclass_exception() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 4 ))
    {
        if ( 4 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "subclass_exception() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "subclass_exception() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "subclass_exception() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "subclass_exception() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "subclass_exception() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "subclass_exception() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "subclass_exception() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "subclass_exception() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "subclass_exception() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "subclass_exception() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "subclass_exception() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "subclass_exception() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "subclass_exception() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_parents != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "subclass_exception() got multiple values for keyword argument 'parents'" );
             goto error_exit;
         }

        _python_par_parents = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_module != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "subclass_exception() got multiple values for keyword argument 'module'" );
             goto error_exit;
         }

        _python_par_module = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_attached_to != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "subclass_exception() got multiple values for keyword argument 'attached_to'" );
             goto error_exit;
         }

        _python_par_attached_to = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_attached_to == NULL )
    {
        _python_par_attached_to = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_attached_to );
    }


    return impl_function_1_subclass_exception_of_module_django__db__models__base( self, _python_par_name, _python_par_parents, _python_par_module, _python_par_attached_to );

error_exit:;

    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_parents );
    Py_XDECREF( _python_par_module );
    Py_XDECREF( _python_par_attached_to );

    return NULL;
}

static PyObject *dparse_function_1_subclass_exception_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1_subclass_exception_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_subclass_exception_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // The context of the function.
    struct _context_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base_t *_python_context = (struct _context_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base ) )
    {
        if ( frame_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base );
        }

        frame_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base = MAKE_FRAME( _codeobj_19f913ef8e3cdebf82e68b0b0831c674, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 43 );
        {
            PyObjectTempKeeper0 make_tuple1;
            PyObjectTempKeeper0 make_tuple3;
            PyObjectTempKeeper1 make_tuple4;
            return ( make_tuple3.assign( _mvar_django__db__models__base_unpickle_inner_exception.asObject0() ), make_tuple4.assign( ( make_tuple1.assign( _python_context->python_closure_attached_to.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), _python_context->python_closure_name.asObject() ) ) ), MAKE_TUPLE3( make_tuple3.asObject0(), make_tuple4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_args ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_context->python_closure_name.updateLocalsDict( _python_context->python_closure_attached_to.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base );
           frame_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__reduce__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__reduce__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__reduce__() got multiple values for keyword argument 'self'" );
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
                   "__reduce__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__reduce__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__reduce__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__reduce__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__reduce__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__reduce__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__reduce__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );

    // Actual function code.
    static PyFrameObject *frame_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base ) )
    {
        if ( frame_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base );
        }

        frame_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base = MAKE_FRAME( _codeobj_568228fea9efd423368dc590e6ad31b3, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 46 );
        {
                PyObject *tmp_identifier = _python_var_args.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_args );
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
        frame_guard.getFrame0()->f_locals = _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base );
           frame_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                PyErr_Format( PyExc_TypeError, "__setstate__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__setstate__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_args == key )
            {
                if (unlikely( _python_par_args ))
                {
                    PyErr_Format( PyExc_TypeError, "__setstate__() got multiple values for keyword argument 'args'" );
                    goto error_exit;
                }

                _python_par_args = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__setstate__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_args, key ) )
            {
                if (unlikely( _python_par_args ))
                {
                    PyErr_Format( PyExc_TypeError, "__setstate__() got multiple values for keyword argument 'args'" );
                    goto error_exit;
                }

                _python_par_args = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__setstate__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__setstate__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__setstate__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__setstate__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__setstate__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__setstate__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setstate__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__setstate__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setstate__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__setstate__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__setstate__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__setstate__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__setstate__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__setstate__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_args != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setstate__() got multiple values for keyword argument 'args'" );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base( self, _python_par_self, _python_par_args );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );

    return NULL;
}

static PyObject *dparse_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_ModelBase_of_module_django__db__models__base(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___new__( _python_str_plain___new__ );
    PyObjectLocalVariable _python_var_copy_managers( _python_str_plain_copy_managers );
    PyObjectLocalVariable _python_var_add_to_class( _python_str_plain_add_to_class );
    PyObjectLocalVariable _python_var__prepare( _python_str_plain__prepare );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_base );
    _python_var___doc__.assign0( _python_unicode_digest_b7e101574d8344b159d28ed06bdb9365 );
    static PyFrameObject *frame_class_2_ModelBase_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_class_2_ModelBase_of_module_django__db__models__base ) )
    {
        if ( frame_class_2_ModelBase_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_2_ModelBase_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_class_2_ModelBase_of_module_django__db__models__base );
        }

        frame_class_2_ModelBase_of_module_django__db__models__base = MAKE_FRAME( _codeobj_9957f60ae942cd6d88bcb70b288981e7, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_class_2_ModelBase_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_class_2_ModelBase_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 58 );
        _python_var___new__.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_staticmethod ), PyObjectTemporary( MAKE_FUNCTION_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base(  ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var__prepare.updateLocalsDict( _python_var_add_to_class.updateLocalsDict( _python_var_copy_managers.updateLocalsDict( _python_var___new__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_2_ModelBase_of_module_django__db__models__base )
        {
           Py_DECREF( frame_class_2_ModelBase_of_module_django__db__models__base );
           frame_class_2_ModelBase_of_module_django__db__models__base = NULL;
        }

        throw;
    }
    _python_var_copy_managers.assign1( MAKE_FUNCTION_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base(  ) );
    _python_var_add_to_class.assign1( MAKE_FUNCTION_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base(  ) );
    _python_var__prepare.assign1( MAKE_FUNCTION_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base(  ) );
    return _python_var__prepare.updateLocalsDict( _python_var_add_to_class.updateLocalsDict( _python_var_copy_managers.updateLocalsDict( _python_var___new__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_cls, PyObject *_python_par_name, PyObject *_python_par_bases, PyObject *_python_par_attrs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_bases( _python_str_plain_bases, _python_par_bases );
    PyObjectLocalParameterVariableNoDel _python_var_attrs( _python_str_plain_attrs, _python_par_attrs );
    PyObjectLocalVariable _python_var_super_new( _python_str_plain_super_new );
    PyObjectLocalVariable _python_var_parents( _python_str_plain_parents );
    PyObjectLocalVariable _python_var_module( _python_str_plain_module );
    PyObjectLocalVariable _python_var_new_class( _python_str_plain_new_class );
    PyObjectLocalVariable _python_var_attr_meta( _python_str_plain_attr_meta );
    PyObjectLocalVariable _python_var_abstract( _python_str_plain_abstract );
    PyObjectLocalVariable _python_var_meta( _python_str_plain_meta );
    PyObjectLocalVariable _python_var_base_meta( _python_str_plain_base_meta );
    PyObjectLocalVariable _python_var_model_module( _python_str_plain_model_module );
    PyObjectLocalVariable _python_var_kwargs( _python_str_plain_kwargs );
    PyObjectLocalVariable _python_var_is_proxy( _python_str_plain_is_proxy );
    PyObjectLocalVariable _python_var_m( _python_str_plain_m );
    PyObjectLocalVariable _python_var_obj_name( _python_str_plain_obj_name );
    PyObjectLocalVariable _python_var_obj( _python_str_plain_obj );
    PyObjectLocalVariable _python_var_new_fields( _python_str_plain_new_fields );
    PyObjectLocalVariable _python_var_field_names( _python_str_plain_field_names );
    PyObjectLocalVariable _python_var_base( _python_str_plain_base );
    PyObjectLocalVariable _python_var_parent( _python_str_plain_parent );
    PyObjectLocalVariable _python_var_o2o_map( _python_str_plain_o2o_map );
    PyObjectLocalVariable _python_var_original_base( _python_str_plain_original_base );
    PyObjectLocalVariable _python_var_parent_fields( _python_str_plain_parent_fields );
    PyObjectLocalVariable _python_var_field( _python_str_plain_field );
    PyObjectLocalVariable _python_var_attr_name( _python_str_plain_attr_name );
    PyObjectLocalVariable _python_var_b( _python_str_plain_b );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );

    // Actual function code.
    static PyFrameObject *frame_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base ) )
    {
        if ( frame_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___new___of_class_2_ModelBase_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base );
        }

        frame_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base = MAKE_FRAME( _codeobj_0206af204c2a329bd8ad441d9ff5cf41, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 59 );
        {
            PyObjectTempKeeper0 super1;
            _python_var_super_new.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__db__models__base_ModelBase.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_cls.asObject() ) ) ).asObject(), _python_str_plain___new__ ) );
        }
        frame_guard.setLineNumber( 67 );
        if ( ( RICH_COMPARE_BOOL_EQ( _python_var_name.asObject(), _python_unicode_plain_NewBase ) && RICH_COMPARE_BOOL_EQ( _python_var_attrs.asObject(), PyObjectTemporary( PyDict_New() ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 68 );
            {
                PyObjectTempKeeper0 call3;
                PyObjectTempKeeper0 call4;
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call6;
                return ( call3.assign( _python_var_super_new.asObject() ), call4.assign( _python_var_cls.asObject() ), call5.assign( _python_var_name.asObject() ), call6.assign( _python_var_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), call5.asObject0(), call6.asObject0(), _python_var_attrs.asObject() ) );
            }
        }
        frame_guard.setLineNumber( 72 );
        _python_var_parents.assign1( impl_listcontr_1_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( MAKE_ITERATOR( _python_var_bases.asObject() ), _python_var_b ) );
        frame_guard.setLineNumber( 74 );
        if ( (!( CHECK_IF_TRUE( _python_var_parents.asObject() ) )) )
        {
            frame_guard.setLineNumber( 75 );
            {
                PyObjectTempKeeper0 call10;
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call8;
                PyObjectTempKeeper0 call9;
                return ( call8.assign( _python_var_super_new.asObject() ), call9.assign( _python_var_cls.asObject() ), call10.assign( _python_var_name.asObject() ), call11.assign( _python_var_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), call9.asObject0(), call10.asObject0(), call11.asObject0(), _python_var_attrs.asObject() ) );
            }
        }
        frame_guard.setLineNumber( 78 );
        _python_var_module.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_attrs.asObject(), _python_str_plain_pop ) ).asObject(), _python_unicode_plain___module__ ) );
        frame_guard.setLineNumber( 79 );
        {
            PyObjectTempKeeper0 call13;
            PyObjectTempKeeper0 call14;
            PyObjectTempKeeper0 call15;
            PyObjectTempKeeper0 call16;
            _python_var_new_class.assign1( ( call13.assign( _python_var_super_new.asObject() ), call14.assign( _python_var_cls.asObject() ), call15.assign( _python_var_name.asObject() ), call16.assign( _python_var_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), call14.asObject0(), call15.asObject0(), call16.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_module.asObject(), _python_unicode_plain___module__ ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 80 );
        _python_var_attr_meta.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_attrs.asObject(), _python_str_plain_pop ) ).asObject(), _python_unicode_plain_Meta, Py_None ) );
        frame_guard.setLineNumber( 81 );
        _python_var_abstract.assign1( BUILTIN_GETATTR( _python_var_attr_meta.asObject(), _python_unicode_plain_abstract, Py_False ) );
        frame_guard.setLineNumber( 82 );
        if ( (!( CHECK_IF_TRUE( _python_var_attr_meta.asObject() ) )) )
        {
            frame_guard.setLineNumber( 83 );
            _python_var_meta.assign1( BUILTIN_GETATTR( _python_var_new_class.asObject(), _python_unicode_plain_Meta, Py_None ) );
        }
        else
        {
            frame_guard.setLineNumber( 85 );
            _python_var_meta.assign0( _python_var_attr_meta.asObject() );
        }
        frame_guard.setLineNumber( 86 );
        _python_var_base_meta.assign1( BUILTIN_GETATTR( _python_var_new_class.asObject(), _python_unicode_plain__meta, Py_None ) );
        frame_guard.setLineNumber( 88 );
        if ( ( PyObjectTemporary( BUILTIN_GETATTR( _python_var_meta.asObject(), _python_unicode_plain_app_label, Py_None ) ).asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 91 );
            {
                PyObjectTempKeeper1 subscr18;
                _python_var_model_module.assign1( ( subscr18.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_sys.asObject0(), _python_str_plain_modules ) ), LOOKUP_SUBSCRIPT( subscr18.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain___module__ ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 92 );
            _python_var_kwargs.assign1( MAKE_DICT1( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_model_module.asObject(), _python_str_plain___name__ ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_dot ) ).asObject(), _python_int_neg_2, -2 ) ).asObject(), _python_unicode_plain_app_label ) );
        }
        else
        {
            _python_var_kwargs.assign1( PyDict_New() );
        }
        frame_guard.setLineNumber( 96 );
        {
            PyObjectTempKeeper1 call23;
            PyObjectTempKeeper0 call_tmp20;
            PyObjectTempKeeper1 call_tmp21;
            DECREASE_REFCOUNT( ( call23.assign( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain_add_to_class ) ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), _python_unicode_plain__meta, PyObjectTemporary( ( call_tmp20.assign( _mvar_django__db__models__base_Options.asObject0() ), call_tmp21.assign( MAKE_TUPLE1( _python_var_meta.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp20.asObject(), call_tmp21.asObject(), _python_var_kwargs.asObject1() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 97 );
        if ( (!( CHECK_IF_TRUE( _python_var_abstract.asObject() ) )) )
        {
            frame_guard.setLineNumber( 98 );
            {
                PyObjectTempKeeper0 call29;
                PyObjectTempKeeper1 call30;
                PyObjectTempKeeper1 call32;
                PyObjectTempKeeper1 keeper_1;
                PyObjectTempKeeper1 make_tuple27;
                DECREASE_REFCOUNT( ( call32.assign( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain_add_to_class ) ), CALL_FUNCTION_WITH_ARGS( call32.asObject0(), _python_unicode_plain_DoesNotExist, PyObjectTemporary( ( call29.assign( _mvar_django__db__models__base_subclass_exception.asObject0() ), call30.assign( ( make_tuple27.assign( ( CHECK_IF_TRUE( keeper_1.assign( TO_TUPLE( PyObjectTemporary( impl_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( MAKE_ITERATOR( _python_var_parents.asObject() ) ) ).asObject() ) ) ) ? keeper_1.asObject() : MAKE_TUPLE1( _mvar_django__db__models__base_ObjectDoesNotExist.asObject0() ) ) ), MAKE_TUPLE3( _python_str_plain_DoesNotExist, make_tuple27.asObject0(), _python_var_module.asObject() ) ) ), CALL_FUNCTION( call29.asObject0(), call30.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_new_class.asObject(), _python_str_plain_attached_to ) ).asObject() ) ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 103 );
            {
                PyObjectTempKeeper0 call38;
                PyObjectTempKeeper1 call39;
                PyObjectTempKeeper1 call41;
                PyObjectTempKeeper1 keeper_2;
                PyObjectTempKeeper1 make_tuple36;
                DECREASE_REFCOUNT( ( call41.assign( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain_add_to_class ) ), CALL_FUNCTION_WITH_ARGS( call41.asObject0(), _python_unicode_plain_MultipleObjectsReturned, PyObjectTemporary( ( call38.assign( _mvar_django__db__models__base_subclass_exception.asObject0() ), call39.assign( ( make_tuple36.assign( ( CHECK_IF_TRUE( keeper_2.assign( TO_TUPLE( PyObjectTemporary( impl_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( MAKE_ITERATOR( _python_var_parents.asObject() ) ) ).asObject() ) ) ) ? keeper_2.asObject() : MAKE_TUPLE1( _mvar_django__db__models__base_MultipleObjectsReturned.asObject0() ) ) ), MAKE_TUPLE3( _python_str_plain_MultipleObjectsReturned, make_tuple36.asObject0(), _python_var_module.asObject() ) ) ), CALL_FUNCTION( call38.asObject0(), call39.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_new_class.asObject(), _python_str_plain_attached_to ) ).asObject() ) ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 108 );
            if ( ( CHECK_IF_TRUE( _python_var_base_meta.asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base_meta.asObject(), _python_str_plain_abstract ) ).asObject() ) )) ) )
            {
                frame_guard.setLineNumber( 112 );
                if ( (!( HAS_ATTRIBUTE( _python_var_meta.asObject(), _python_unicode_plain_ordering ) )) )
                {
                    frame_guard.setLineNumber( 113 );
                    {
                            PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_base_meta.asObject(), _python_str_plain_ordering ) );
                            SET_ATTRIBUTE( tmp_identifier.asObject(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_ordering );
                    }
                }
                frame_guard.setLineNumber( 114 );
                if ( (!( HAS_ATTRIBUTE( _python_var_meta.asObject(), _python_unicode_plain_get_latest_by ) )) )
                {
                    frame_guard.setLineNumber( 115 );
                    {
                            PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_base_meta.asObject(), _python_str_plain_get_latest_by ) );
                            SET_ATTRIBUTE( tmp_identifier.asObject(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_get_latest_by );
                    }
                }
            }
        }
        frame_guard.setLineNumber( 117 );
        _python_var_is_proxy.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_proxy ) );
        frame_guard.setLineNumber( 121 );
        if ( ( CHECK_IF_TRUE( _python_var_is_proxy.asObject() ) && ( CHECK_IF_TRUE( _python_var_base_meta.asObject() ) && CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base_meta.asObject(), _python_str_plain_swapped ) ).asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 122 );
            {
                PyObjectTempKeeper0 make_tuple44;
                {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_33ad42fb67dcabac7e604eb3e4f2a0a2, PyObjectTemporary( ( make_tuple44.assign( _python_var_name.asObject() ), MAKE_TUPLE2( make_tuple44.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base_meta.asObject(), _python_str_plain_swapped ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        frame_guard.setLineNumber( 124 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_GETATTR( _python_var_new_class.asObject(), _python_unicode_plain__default_manager, Py_None ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 125 );
            if ( (!( CHECK_IF_TRUE( _python_var_is_proxy.asObject() ) )) )
            {
                frame_guard.setLineNumber( 128 );
                SET_ATTRIBUTE( Py_None, _python_var_new_class.asObject(), _python_str_plain__default_manager );
                frame_guard.setLineNumber( 129 );
                SET_ATTRIBUTE( Py_None, _python_var_new_class.asObject(), _python_str_plain__base_manager );
            }
            else
            {
                frame_guard.setLineNumber( 133 );
                {
                    PyObjectTempKeeper1 call46;
                    {
                        PyObjectTemporary tmp_identifier( ( call46.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__default_manager ) ).asObject(), _python_str_plain__copy_to_model ) ), CALL_FUNCTION_WITH_ARGS( call46.asObject0(), _python_var_new_class.asObject() ) ) );
                        SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_new_class.asObject(), _python_str_plain__default_manager );
                }
                }
                frame_guard.setLineNumber( 134 );
                {
                    PyObjectTempKeeper1 call48;
                    {
                        PyObjectTemporary tmp_identifier( ( call48.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__base_manager ) ).asObject(), _python_str_plain__copy_to_model ) ), CALL_FUNCTION_WITH_ARGS( call48.asObject0(), _python_var_new_class.asObject() ) ) );
                        SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_new_class.asObject(), _python_str_plain__base_manager );
                }
                }
            }
        }
        frame_guard.setLineNumber( 137 );
        {
            PyObjectTempKeeper0 call52;
            PyObjectTempKeeper1 make_tuple50;
            _python_var_m.assign1( ( call52.assign( _mvar_django__db__models__base_get_model.asObject0() ), CALL_FUNCTION( call52.asObject0(), PyObjectTemporary( ( make_tuple50.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_app_label ) ), MAKE_TUPLE2( make_tuple50.asObject0(), _python_var_name.asObject() ) ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_efd1f8e1afb2a58ff97c10d5c64fa9af ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 139 );
        if ( ( _python_var_m.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 140 );
            return _python_var_m.asObject1();
        }
        {
            frame_guard.setLineNumber( 143 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_attrs.asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 143 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 143 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_obj_name.assign0( _python_tmp_element_1.asObject() );
                        _python_var_obj.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 144 );
                {
                    PyObjectTempKeeper1 call55;
                    PyObjectTempKeeper0 call56;
                    DECREASE_REFCOUNT( ( call55.assign( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain_add_to_class ) ), call56.assign( _python_var_obj_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call55.asObject0(), call56.asObject0(), _python_var_obj.asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 147 );
        {
            PyObjectTempKeeper1 op58;
            PyObjectTempKeeper1 op60;
            _python_var_new_fields.assign1( ( op60.assign( ( op58.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_local_fields ) ), BINARY_OPERATION_ADD( op58.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_local_many_to_many ) ).asObject() ) ) ), BINARY_OPERATION_ADD( op60.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_virtual_fields ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 150 );
        _python_var_field_names.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), PyObjectTemporary( impl_listcontr_4_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( MAKE_ITERATOR( _python_var_new_fields.asObject() ), _python_var_f ) ).asObject() ) );
        frame_guard.setLineNumber( 153 );
        if ( CHECK_IF_TRUE( _python_var_is_proxy.asObject() ) )
        {
            _python_var_base.assign0( Py_None );
            {
                frame_guard.setLineNumber( 155 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( impl_listcontr_5_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( MAKE_ITERATOR( _python_var_parents.asObject() ), _python_var_cls ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 155 );
                        PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_2 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                        _python_var_parent.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 156 );
                    if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_parent.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_abstract ) ).asObject() ) )
                    {
                        frame_guard.setLineNumber( 157 );
                        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_parent.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_fields ) ).asObject() ) )
                        {
                            frame_guard.setLineNumber( 158 );
                            {
                                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_2eddaffc04e7630791d11bcec1f0f742, _python_var_name.asObject() ) ).asObject() ) ).asObject() ) );
                                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 160 );
                            CONSIDER_THREADING(); continue;
                        }
                    }
                    frame_guard.setLineNumber( 161 );
                    if ( ( _python_var_base.asObject() != Py_None ) )
                    {
                        frame_guard.setLineNumber( 162 );
                        {
                                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_4f7af50b902f5b517c92ece77650c1da, _python_var_name.asObject() ) ).asObject() ) ).asObject() ) );
                                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 164 );
                        _python_var_base.assign0( _python_var_parent.asObject() );
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 165 );
            if ( ( _python_var_base.asObject() == Py_None ) )
            {
                frame_guard.setLineNumber( 166 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_8fdb3406d4e9fad64531a3c62c6a9e1a, _python_var_name.asObject() ) ).asObject() ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
            frame_guard.setLineNumber( 167 );
            if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_local_fields ) ).asObject() ) || CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_local_many_to_many ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 169 );
                {
                    PyObjectTempKeeper0 call62;
                    {
                        PyObjectTemporary tmp_exception_type( ( call62.assign( _mvar_django__db__models__base_FieldError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call62.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_093e6aea12540da602619cadaee11000, _python_var_name.asObject() ) ).asObject() ) ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
                }
            }
            frame_guard.setLineNumber( 170 );
            {
                PyObjectTempKeeper1 call64;
                DECREASE_REFCOUNT( ( call64.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_setup_proxy ) ), CALL_FUNCTION_WITH_ARGS( call64.asObject0(), _python_var_base.asObject() ) ) );
            }
            frame_guard.setLineNumber( 171 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_concrete_model ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_concrete_model );
            }
        }
        else
        {
            frame_guard.setLineNumber( 173 );
            {
                    PyObject *tmp_identifier = _python_var_new_class.asObject();
                    SET_ATTRIBUTE( tmp_identifier, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_concrete_model );
            }
        }
        frame_guard.setLineNumber( 176 );
        _python_var_o2o_map.assign1( TO_DICT( PyObjectTemporary( impl_listcontr_6_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_local_fields ) ).asObject() ), _python_var_f ) ).asObject(), NULL ) );
        {
            frame_guard.setLineNumber( 179 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_parents.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 179 );
                    PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_3 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                    _python_var_base.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 180 );
                _python_var_original_base.assign0( _python_var_base.asObject() );
                frame_guard.setLineNumber( 181 );
                if ( (!( HAS_ATTRIBUTE( _python_var_base.asObject(), _python_unicode_plain__meta ) )) )
                {
                    frame_guard.setLineNumber( 184 );
                    CONSIDER_THREADING(); continue;
                }
                frame_guard.setLineNumber( 186 );
                {
                    PyObjectTempKeeper1 op66;
                    _python_var_parent_fields.assign1( ( op66.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_local_fields ) ), BINARY_OPERATION_ADD( op66.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_local_many_to_many ) ).asObject() ) ) );
                }
                {
                    frame_guard.setLineNumber( 190 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_parent_fields.asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 190 );
                            PyObject *_tmp_unpack_4 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_4 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_4 );
                            _python_var_field.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 191 );
                        {
                            PyObjectTempKeeper1 cmp73;
                            if ( ( cmp73.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ), SEQUENCE_CONTAINS_BOOL( cmp73.asObject0(), _python_var_field_names.asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 192 );
                            {
                                PyObjectTempKeeper0 call71;
                                PyObjectTempKeeper1 make_tuple68;
                                PyObjectTempKeeper0 make_tuple69;
                                {
                                    PyObjectTemporary tmp_exception_type( ( call71.assign( _mvar_django__db__models__base_FieldError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call71.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_1ca160ffdfd4c6df61dc79feb3284448, PyObjectTemporary( ( make_tuple68.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ), make_tuple69.assign( _python_var_name.asObject() ), MAKE_TUPLE3( make_tuple68.asObject0(), make_tuple69.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                            }
                            }
                        }
                        }

                       CONSIDER_THREADING();
                    }
                }
                frame_guard.setLineNumber( 196 );
                if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_abstract ) ).asObject() ) )) )
                {
                    frame_guard.setLineNumber( 198 );
                    _python_var_base.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_concrete_model ) );
                    frame_guard.setLineNumber( 199 );
                    {
                        PyObjectTempKeeper0 cmp83;
                        if ( ( cmp83.assign( _python_var_base.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp83.asObject0(), _python_var_o2o_map.asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 200 );
                        {
                            PyObjectTempKeeper0 subscr75;
                            _python_var_field.assign1( ( subscr75.assign( _python_var_o2o_map.asObject() ), LOOKUP_SUBSCRIPT( subscr75.asObject0(), _python_var_base.asObject() ) ) );
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 201 );
                        if ( (!( CHECK_IF_TRUE( _python_var_is_proxy.asObject() ) )) )
                        {
                            frame_guard.setLineNumber( 202 );
                            _python_var_attr_name.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_94794d2addfc47ff6b45bdc0cf804322, PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_model_name ) ).asObject() ) );
                            frame_guard.setLineNumber( 203 );
                            {
                                PyObjectTempKeeper0 call77;
                                PyObjectTempKeeper1 call78;
                                _python_var_field.assign1( ( call77.assign( _mvar_django__db__models__base_OneToOneField.asObject0() ), call78.assign( MAKE_TUPLE1( _python_var_base.asObject() ) ), CALL_FUNCTION( call77.asObject0(), call78.asObject0(), PyObjectTemporary( MAKE_DICT3( _python_var_attr_name.asObject(), _python_str_plain_name, Py_True, _python_str_plain_auto_created, Py_True, _python_str_plain_parent_link ) ).asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 205 );
                            {
                                PyObjectTempKeeper1 call80;
                                PyObjectTempKeeper0 call81;
                                DECREASE_REFCOUNT( ( call80.assign( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain_add_to_class ) ), call81.assign( _python_var_attr_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call80.asObject0(), call81.asObject0(), _python_var_field.asObject() ) ) );
                            }
                        }
                        else
                        {
                            _python_var_field.assign0( Py_None );
                        }
                    }
                    }
                    frame_guard.setLineNumber( 208 );
                    {
                            PyObject *tmp_identifier = _python_var_field.asObject();
                            PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_parents ) );
                            SET_SUBSCRIPT( tmp_identifier, tmp_subscribed.asObject(), _python_var_base.asObject() );
                    }
                }
                else
                {
                    {
                        frame_guard.setLineNumber( 211 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_parent_fields.asObject() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 211 );
                                PyObject *_tmp_unpack_5 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_5 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_5 );
                                _python_var_field.assign0( _python_tmp_iter_value.asObject() );
                            }
                            frame_guard.setLineNumber( 212 );
                            {
                                PyObjectTempKeeper1 call85;
                                PyObjectTempKeeper1 call87;
                                PyObjectTempKeeper1 call88;
                                DECREASE_REFCOUNT( ( call87.assign( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain_add_to_class ) ), call88.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ), CALL_FUNCTION_WITH_ARGS( call87.asObject0(), call88.asObject0(), PyObjectTemporary( ( call85.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_copy.asObject0(), _python_str_plain_deepcopy ) ), CALL_FUNCTION_WITH_ARGS( call85.asObject0(), _python_var_field.asObject() ) ) ).asObject() ) ) );
                            }

                           CONSIDER_THREADING();
                        }
                    }
                    frame_guard.setLineNumber( 215 );
                    {
                        PyObjectTempKeeper1 call90;
                        DECREASE_REFCOUNT( ( call90.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_parents ) ).asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call90.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_parents ) ).asObject() ) ) );
                    }
                }
                frame_guard.setLineNumber( 218 );
                {
                    PyObjectTempKeeper1 call92;
                    DECREASE_REFCOUNT( ( call92.assign( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain_copy_managers ) ), CALL_FUNCTION_WITH_ARGS( call92.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_abstract_managers ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 222 );
                if ( CHECK_IF_TRUE( _python_var_is_proxy.asObject() ) )
                {
                    frame_guard.setLineNumber( 223 );
                    {
                        PyObjectTempKeeper1 call94;
                        DECREASE_REFCOUNT( ( call94.assign( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain_copy_managers ) ), CALL_FUNCTION_WITH_ARGS( call94.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_original_base.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_concrete_managers ) ).asObject() ) ) );
                    }
                }
                {
                    frame_guard.setLineNumber( 227 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_virtual_fields ) ).asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 227 );
                            PyObject *_tmp_unpack_6 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_6 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_6 );
                            _python_var_field.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 228 );
                        {
                            PyObjectTempKeeper1 cmp101;
                            if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_abstract ) ).asObject() ) && ( cmp101.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ), SEQUENCE_CONTAINS_BOOL( cmp101.asObject0(), _python_var_field_names.asObject() ) ) ) )
                        {
                            frame_guard.setLineNumber( 229 );
                            {
                                PyObjectTempKeeper0 call99;
                                PyObjectTempKeeper1 make_tuple96;
                                PyObjectTempKeeper0 make_tuple97;
                                {
                                    PyObjectTemporary tmp_exception_type( ( call99.assign( _mvar_django__db__models__base_FieldError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call99.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_21eaa2578295476cf8e5095f3bcd16bf, PyObjectTemporary( ( make_tuple96.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ), make_tuple97.assign( _python_var_name.asObject() ), MAKE_TUPLE3( make_tuple96.asObject0(), make_tuple97.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                            }
                            }
                        }
                        }
                        frame_guard.setLineNumber( 233 );
                        {
                            PyObjectTempKeeper1 call103;
                            PyObjectTempKeeper1 call105;
                            PyObjectTempKeeper1 call106;
                            DECREASE_REFCOUNT( ( call105.assign( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain_add_to_class ) ), call106.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ), CALL_FUNCTION_WITH_ARGS( call105.asObject0(), call106.asObject0(), PyObjectTemporary( ( call103.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_copy.asObject0(), _python_str_plain_deepcopy ) ), CALL_FUNCTION_WITH_ARGS( call103.asObject0(), _python_var_field.asObject() ) ) ).asObject() ) ) );
                        }

                       CONSIDER_THREADING();
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 235 );
        if ( CHECK_IF_TRUE( _python_var_abstract.asObject() ) )
        {
            frame_guard.setLineNumber( 239 );
            SET_ATTRIBUTE( Py_False, _python_var_attr_meta.asObject(), _python_str_plain_abstract );
            frame_guard.setLineNumber( 240 );
            {
                    PyObject *tmp_identifier = _python_var_attr_meta.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_new_class.asObject(), _python_str_plain_Meta );
            }
            frame_guard.setLineNumber( 241 );
            return _python_var_new_class.asObject1();
        }
        frame_guard.setLineNumber( 243 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__prepare ) ).asObject() ) );
        frame_guard.setLineNumber( 244 );
        {
            PyObjectTempKeeper0 call108;
            PyObjectTempKeeper1 call109;
            DECREASE_REFCOUNT( ( call108.assign( _mvar_django__db__models__base_register_models.asObject0() ), call109.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_app_label ) ), CALL_FUNCTION_WITH_ARGS( call108.asObject0(), call109.asObject0(), _python_var_new_class.asObject() ) ) );
        }
        frame_guard.setLineNumber( 250 );
        {
            PyObjectTempKeeper0 call113;
            PyObjectTempKeeper1 make_tuple111;
            return ( call113.assign( _mvar_django__db__models__base_get_model.asObject0() ), CALL_FUNCTION( call113.asObject0(), PyObjectTemporary( ( make_tuple111.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_app_label ) ), MAKE_TUPLE2( make_tuple111.asObject0(), _python_var_name.asObject() ) ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_efd1f8e1afb2a58ff97c10d5c64fa9af ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_attrs.updateLocalsDict( _python_var_bases.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_b.updateLocalsDict( _python_var_attr_name.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_parent_fields.updateLocalsDict( _python_var_original_base.updateLocalsDict( _python_var_o2o_map.updateLocalsDict( _python_var_parent.updateLocalsDict( _python_var_base.updateLocalsDict( _python_var_field_names.updateLocalsDict( _python_var_new_fields.updateLocalsDict( _python_var_obj.updateLocalsDict( _python_var_obj_name.updateLocalsDict( _python_var_m.updateLocalsDict( _python_var_is_proxy.updateLocalsDict( _python_var_kwargs.updateLocalsDict( _python_var_model_module.updateLocalsDict( _python_var_base_meta.updateLocalsDict( _python_var_meta.updateLocalsDict( _python_var_abstract.updateLocalsDict( _python_var_attr_meta.updateLocalsDict( _python_var_new_class.updateLocalsDict( _python_var_module.updateLocalsDict( _python_var_parents.updateLocalsDict( _python_var_super_new.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base );
           frame_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_bases = NULL;
    PyObject *_python_par_attrs = NULL;
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
                PyErr_Format( PyExc_TypeError, "__new__() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_cls == key )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_bases == key )
            {
                if (unlikely( _python_par_bases ))
                {
                    PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'bases'" );
                    goto error_exit;
                }

                _python_par_bases = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_attrs == key )
            {
                if (unlikely( _python_par_attrs ))
                {
                    PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'attrs'" );
                    goto error_exit;
                }

                _python_par_attrs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cls, key ) )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_bases, key ) )
            {
                if (unlikely( _python_par_bases ))
                {
                    PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'bases'" );
                    goto error_exit;
                }

                _python_par_bases = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_attrs, key ) )
            {
                if (unlikely( _python_par_attrs ))
                {
                    PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'attrs'" );
                    goto error_exit;
                }

                _python_par_attrs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__new__() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 4 ))
    {
        if ( 4 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__new__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__new__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__new__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__new__() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__new__() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__new__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__new__() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__new__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 4 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__new__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__new__() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "__new__() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__new__() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_cls != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'cls'" );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_bases != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'bases'" );
             goto error_exit;
         }

        _python_par_bases = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_attrs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'attrs'" );
             goto error_exit;
         }

        _python_par_attrs = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( self, _python_par_cls, _python_par_name, _python_par_bases, _python_par_attrs );

error_exit:;

    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_bases );
    Py_XDECREF( _python_par_attrs );

    return NULL;
}

static PyObject *dparse_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_b )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 72 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 72 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_b.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 cmp3;
                    PyObjectTempKeeper0 isinstance1;
                    if ( ( ( isinstance1.assign( python_closure_b.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), _mvar_django__db__models__base_ModelBase.asObject0() ) ) && (!( ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_b.asObject(), _python_str_plain___name__ ) ).asObject(), _python_unicode_plain_NewBase ) && ( cmp3.assign( LOOKUP_ATTRIBUTE( python_closure_b.asObject(), _python_str_plain___mro__ ) ), RICH_COMPARE_BOOL_EQ( cmp3.asObject0(), PyObjectTemporary( MAKE_TUPLE2( python_closure_b.asObject(), LOOKUP_BUILTIN( _python_str_plain_object ) ) ).asObject() ) ) ) )) ) )
                {
                    frame_guard.setLineNumber( 72 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_b.asObject() ), Py_None;
                }
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}



struct _context_generator_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_x;
};

static void _context_generator_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_destructor( void *context_voidptr )
{
    _context_generator_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t *_python_context = (struct _context_generator_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t *_python_context = (_context_generator_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_x.setVariableName( _python_str_plain_x );

        // Actual function code.
        static PyFrameObject *frame_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base ) )
        {
            if ( frame_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base" );
#endif
                Py_DECREF( frame_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base );
            }

            frame_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base = MAKE_FRAME( _codeobj_079cc36b749bd07cb526e2f07737a091, _module_django__db__models__base );
        }

        Py_INCREF( frame_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base );
        generator->m_frame = frame_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base;

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
                    frame_guard.setLineNumber( 99 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 99 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_x.assign0( _python_tmp_iter_value.asObject() );
                        if ( ( HAS_ATTRIBUTE( _python_context->python_var_x.asObject(), _python_unicode_plain__meta ) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_x.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_abstract ) ).asObject() ) )) ) )
                        {
                            frame_guard.setLineNumber( 99 );
                            YIELD_VALUE( generator, LOOKUP_ATTRIBUTE( _python_context->python_var_x.asObject(), _python_str_plain_DoesNotExist ) );
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

static PyObject *impl_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t *_python_context = new _context_generator_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_context,
            _python_str_angle_genexpr,
            _codeobj_f7ee45ece5907447cadf6fbca44d2811,
            _python_context,
            _context_generator_genexpr_2_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_destructor
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



struct _context_generator_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_x;
};

static void _context_generator_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_destructor( void *context_voidptr )
{
    _context_generator_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t *_python_context = (struct _context_generator_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t *_python_context = (_context_generator_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_x.setVariableName( _python_str_plain_x );

        // Actual function code.
        static PyFrameObject *frame_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base ) )
        {
            if ( frame_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base" );
#endif
                Py_DECREF( frame_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base );
            }

            frame_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base = MAKE_FRAME( _codeobj_898a42d7ae959a2c414c8f64448e29b0, _module_django__db__models__base );
        }

        Py_INCREF( frame_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base );
        generator->m_frame = frame_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base;

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
                    frame_guard.setLineNumber( 104 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 104 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_x.assign0( _python_tmp_iter_value.asObject() );
                        if ( ( HAS_ATTRIBUTE( _python_context->python_var_x.asObject(), _python_unicode_plain__meta ) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_x.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_abstract ) ).asObject() ) )) ) )
                        {
                            frame_guard.setLineNumber( 104 );
                            YIELD_VALUE( generator, LOOKUP_ATTRIBUTE( _python_context->python_var_x.asObject(), _python_str_plain_MultipleObjectsReturned ) );
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

static PyObject *impl_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t *_python_context = new _context_generator_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_context,
            _python_str_angle_genexpr,
            _codeobj_86ca9a80e29c5a767903629a63f61ecf,
            _python_context,
            _context_generator_genexpr_3_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base_destructor
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


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_4_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_f )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 150 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 150 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_f.assign0( _python_tmp_iter_value.asObject() );
                APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_f.asObject(), _python_str_plain_name ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_5_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator,PyObjectLocalParameterVariableNoDel &python_closure_cls )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 155 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 155 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_cls.assign0( _python_tmp_iter_value.asObject() );
                if ( HAS_ATTRIBUTE( python_closure_cls.asObject(), _python_unicode_plain__meta ) )
                {
                    frame_guard.setLineNumber( 155 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_cls.asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_6_of_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_f )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 176 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 176 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_f.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 isinstance3;
                    if ( ( isinstance3.assign( python_closure_f.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), _mvar_django__db__models__base_OneToOneField.asObject0() ) ) )
                {
                    frame_guard.setLineNumber( 176 );
                    {
                        PyObjectTempKeeper1 make_tuple1;
                        APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ), MAKE_TUPLE2( make_tuple1.asObject0(), python_closure_f.asObject() ) ) ).asObject() ), Py_None;
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_cls, PyObject *_python_par_base_managers )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );
    PyObjectLocalParameterVariableNoDel _python_var_base_managers( _python_str_plain_base_managers, _python_par_base_managers );
    PyObjectLocalVariable _python_var__( _python_str_plain__ );
    PyObjectLocalVariable _python_var_mgr_name( _python_str_plain_mgr_name );
    PyObjectLocalVariable _python_var_manager( _python_str_plain_manager );
    PyObjectLocalVariable _python_var_val( _python_str_plain_val );
    PyObjectLocalVariable _python_var_new_manager( _python_str_plain_new_manager );

    // Actual function code.
    static PyFrameObject *frame_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base ) )
    {
        if ( frame_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base );
        }

        frame_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base = MAKE_FRAME( _codeobj_81c8fe3dba67977b2f9a4be34161cf95, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 255 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base_managers.asObject(), _python_str_plain_sort ) ).asObject() ) );
        {
            frame_guard.setLineNumber( 256 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_base_managers.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 256 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 256 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                        _python_var__.assign0( _python_tmp_element_1.asObject() );
                        _python_var_mgr_name.assign0( _python_tmp_element_2.asObject() );
                        _python_var_manager.assign0( _python_tmp_element_3.asObject() );
                    }
                }
                frame_guard.setLineNumber( 257 );
                {
                    PyObjectTempKeeper0 getattr1;
                    _python_var_val.assign1( ( getattr1.assign( _python_var_cls.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), _python_var_mgr_name.asObject(), Py_None ) ) );
                }
                frame_guard.setLineNumber( 258 );
                if ( ( (!( CHECK_IF_TRUE( _python_var_val.asObject() ) )) || ( _python_var_val.asObject() == _python_var_manager.asObject() ) ) )
                {
                    frame_guard.setLineNumber( 259 );
                    {
                        PyObjectTempKeeper1 call4;
                        _python_var_new_manager.assign1( ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_manager.asObject(), _python_str_plain__copy_to_model ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_cls.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 260 );
                    {
                        PyObjectTempKeeper1 call6;
                        PyObjectTempKeeper0 call7;
                        DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain_add_to_class ) ), call7.assign( _python_var_mgr_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), call7.asObject0(), _python_var_new_manager.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_base_managers.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_new_manager.updateLocalsDict( _python_var_val.updateLocalsDict( _python_var_manager.updateLocalsDict( _python_var_mgr_name.updateLocalsDict( _python_var__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base );
           frame_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_base_managers = NULL;
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
                PyErr_Format( PyExc_TypeError, "copy_managers() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_cls == key )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "copy_managers() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_base_managers == key )
            {
                if (unlikely( _python_par_base_managers ))
                {
                    PyErr_Format( PyExc_TypeError, "copy_managers() got multiple values for keyword argument 'base_managers'" );
                    goto error_exit;
                }

                _python_par_base_managers = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cls, key ) )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "copy_managers() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_base_managers, key ) )
            {
                if (unlikely( _python_par_base_managers ))
                {
                    PyErr_Format( PyExc_TypeError, "copy_managers() got multiple values for keyword argument 'base_managers'" );
                    goto error_exit;
                }

                _python_par_base_managers = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "copy_managers() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "copy_managers() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "copy_managers() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "copy_managers() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "copy_managers() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "copy_managers() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "copy_managers() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "copy_managers() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "copy_managers() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "copy_managers() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "copy_managers() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "copy_managers() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "copy_managers() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_cls != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "copy_managers() got multiple values for keyword argument 'cls'" );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_base_managers != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "copy_managers() got multiple values for keyword argument 'base_managers'" );
             goto error_exit;
         }

        _python_par_base_managers = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base( self, _python_par_cls, _python_par_base_managers );

error_exit:;

    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_base_managers );

    return NULL;
}

static PyObject *dparse_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_cls, PyObject *_python_par_name, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base ) )
    {
        if ( frame_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base );
        }

        frame_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base = MAKE_FRAME( _codeobj_4d68ac6dc224855933a1e31f93f7b91e, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 263 );
        if ( HAS_ATTRIBUTE( _python_var_value.asObject(), _python_unicode_plain_contribute_to_class ) )
        {
            frame_guard.setLineNumber( 264 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call2;
                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_contribute_to_class ) ), call2.assign( _python_var_cls.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_name.asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 266 );
            {
                PyObjectTempKeeper0 setattr4;
                PyObjectTempKeeper0 setattr5;
                ( ( setattr4.assign( _python_var_cls.asObject() ), setattr5.assign( _python_var_name.asObject() ), BUILTIN_SETATTR( setattr4.asObject0(), setattr5.asObject0(), _python_var_value.asObject() ) ), Py_None );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_cls.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base );
           frame_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "add_to_class() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_cls == key )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_class() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_class() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_class() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cls, key ) )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_class() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_class() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_class() got multiple values for keyword argument 'value'" );
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
                   "add_to_class() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "add_to_class() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "add_to_class() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "add_to_class() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "add_to_class() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "add_to_class() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add_to_class() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "add_to_class() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add_to_class() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "add_to_class() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "add_to_class() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "add_to_class() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "add_to_class() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_cls != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add_to_class() got multiple values for keyword argument 'cls'" );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add_to_class() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add_to_class() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base( self, _python_par_cls, _python_par_name, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_cls )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );
    PyObjectLocalVariable _python_var_opts( _python_str_plain_opts );
    PyObjectLocalVariable _python_var_make_foreign_order_accessors( _python_str_plain_make_foreign_order_accessors );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );

    // Actual function code.
    static PyFrameObject *frame_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base ) )
    {
        if ( frame_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base );
        }

        frame_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base = MAKE_FRAME( _codeobj_a5a7d84d1c256299184cce4962d41949, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 272 );
        _python_var_opts.assign1( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__meta ) );
        frame_guard.setLineNumber( 273 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain__prepare ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_cls.asObject() ) ) );
        }
        frame_guard.setLineNumber( 275 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_order_with_respect_to ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 276 );
            {
                PyObjectTempKeeper0 call3;
                {
                    PyObjectTemporary tmp_identifier( ( call3.assign( _mvar_django__db__models__base_curry.asObject0() ), CALL_FUNCTION( call3.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__get_next_or_previous_in_order ) ).asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_f222b71a2a34c6bcae6b46a87922f326 ) ).asObject() ) ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_cls.asObject(), _python_str_plain_get_next_in_order );
            }
            }
            frame_guard.setLineNumber( 277 );
            {
                PyObjectTempKeeper0 call6;
                {
                    PyObjectTemporary tmp_identifier( ( call6.assign( _mvar_django__db__models__base_curry.asObject0() ), CALL_FUNCTION( call6.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__get_next_or_previous_in_order ) ).asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_6048632f6622e2fa98bfd569e3805207 ) ).asObject() ) ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_cls.asObject(), _python_str_plain_get_previous_in_order );
            }
            }
            _python_var_make_foreign_order_accessors.assign1( MAKE_FUNCTION_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base(  ) );
            frame_guard.setLineNumber( 292 );
            {
                PyObjectTempKeeper0 call10;
                PyObjectTempKeeper1 call11;
                PyObjectTempKeeper1 call12;
                PyObjectTempKeeper0 call9;
                DECREASE_REFCOUNT( ( call9.assign( _mvar_django__db__models__base_add_lazy_relation.asObject0() ), call10.assign( _python_var_cls.asObject() ), call11.assign( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_order_with_respect_to ) ), call12.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_order_with_respect_to ) ).asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), call10.asObject0(), call11.asObject0(), call12.asObject0(), _python_var_make_foreign_order_accessors.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 300 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain___doc__ ) ).asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 301 );
            {
                PyObjectTempKeeper1 call14;
                PyObjectTempKeeper1 make_tuple16;
                {
                    PyObjectTemporary tmp_identifier( BINARY_OPERATION_REMAINDER( _python_unicode_digest_8a5bfde993b6bf32f8579d8af94a2ccd, PyObjectTemporary( ( make_tuple16.assign( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain___name__ ) ), MAKE_TUPLE2( make_tuple16.asObject0(), PyObjectTemporary( ( call14.assign( LOOKUP_ATTRIBUTE( _python_unicode_digest_fc763cb31e9938f37737394681228f83, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), PyObjectTemporary( impl_listcontr_2_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_fields ) ).asObject() ), _python_var_f ) ).asObject() ) ) ).asObject() ) ) ).asObject() ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_cls.asObject(), _python_str_plain___doc__ );
            }
            }
        }
        frame_guard.setLineNumber( 303 );
        if ( HAS_ATTRIBUTE( _python_var_cls.asObject(), _python_unicode_plain_get_absolute_url ) )
        {
            frame_guard.setLineNumber( 304 );
            {
                PyObjectTempKeeper0 call18;
                PyObjectTempKeeper0 call19;
                PyObjectTempKeeper0 call20;
                PyObjectTempKeeper0 call22;
                PyObjectTempKeeper1 call23;
                {
                    PyObjectTemporary tmp_identifier( ( call22.assign( _mvar_django__db__models__base_update_wrapper.asObject0() ), call23.assign( ( call18.assign( _mvar_django__db__models__base_curry.asObject0() ), call19.assign( _mvar_django__db__models__base_get_absolute_url.asObject0() ), call20.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), call19.asObject0(), call20.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain_get_absolute_url ) ).asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call22.asObject0(), call23.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain_get_absolute_url ) ).asObject() ) ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_cls.asObject(), _python_str_plain_get_absolute_url );
            }
            }
        }
        frame_guard.setLineNumber( 307 );
        {
            PyObjectTempKeeper1 call25;
            DECREASE_REFCOUNT( ( call25.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_signals.asObject0(), _python_str_plain_class_prepared ) ).asObject(), _python_str_plain_send ) ), CALL_FUNCTION( call25.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_cls.asObject(), _python_str_plain_sender ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_cls.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_make_foreign_order_accessors.updateLocalsDict( _python_var_opts.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base );
           frame_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cls = NULL;
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
                PyErr_Format( PyExc_TypeError, "_prepare() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_cls == key )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "_prepare() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cls, key ) )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "_prepare() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_prepare() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_prepare() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_prepare() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_prepare() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_prepare() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_prepare() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_prepare() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_prepare() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_prepare() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_prepare() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_prepare() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_prepare() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_prepare() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_cls != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_prepare() got multiple values for keyword argument 'cls'" );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( self, _python_par_cls );

error_exit:;

    Py_XDECREF( _python_par_cls );

    return NULL;
}

static PyObject *dparse_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_field, PyObject *_python_par_model, PyObject *_python_par_cls )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_field( _python_str_plain_field, _python_par_field );
    PyObjectLocalParameterVariableNoDel _python_var_model( _python_str_plain_model, _python_par_model );
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );

    // Actual function code.
    static PyFrameObject *frame_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base ) )
    {
        if ( frame_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base );
        }

        frame_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base = MAKE_FRAME( _codeobj_8a296cc0a751f44dd917a7e9bc47b8b0, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 282 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper1 setattr4;
            PyObjectTempKeeper1 setattr5;
            ( ( setattr4.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ), setattr5.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_316bad5bfe204b32bd7a78e0dea4d554, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain___name__ ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() ) ), BUILTIN_SETATTR( setattr4.asObject0(), setattr5.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__db__models__base_curry.asObject0() ), call2.assign( _mvar_django__db__models__base_method_get_order.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_cls.asObject() ) ) ).asObject() ) ), Py_None );
        }
        frame_guard.setLineNumber( 287 );
        {
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper0 call8;
            PyObjectTempKeeper1 setattr10;
            PyObjectTempKeeper1 setattr11;
            ( ( setattr10.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ), setattr11.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_184b8f665cf11ba6e897a03023e65e27, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain___name__ ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() ) ), BUILTIN_SETATTR( setattr10.asObject0(), setattr11.asObject0(), PyObjectTemporary( ( call7.assign( _mvar_django__db__models__base_curry.asObject0() ), call8.assign( _mvar_django__db__models__base_method_set_order.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), call8.asObject0(), _python_var_cls.asObject() ) ) ).asObject() ) ), Py_None );
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
        frame_guard.getFrame0()->f_locals = _python_var_cls.updateLocalsDict( _python_var_model.updateLocalsDict( _python_var_field.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base );
           frame_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_field = NULL;
    PyObject *_python_par_model = NULL;
    PyObject *_python_par_cls = NULL;
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
                PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_field == key )
            {
                if (unlikely( _python_par_field ))
                {
                    PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() got multiple values for keyword argument 'field'" );
                    goto error_exit;
                }

                _python_par_field = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_model == key )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_cls == key )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_field, key ) )
            {
                if (unlikely( _python_par_field ))
                {
                    PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() got multiple values for keyword argument 'field'" );
                    goto error_exit;
                }

                _python_par_field = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_model, key ) )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cls, key ) )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "make_foreign_order_accessors() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_field != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() got multiple values for keyword argument 'field'" );
             goto error_exit;
         }

        _python_par_field = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_model != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() got multiple values for keyword argument 'model'" );
             goto error_exit;
         }

        _python_par_model = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_cls != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_foreign_order_accessors() got multiple values for keyword argument 'cls'" );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( self, _python_par_field, _python_par_model, _python_par_cls );

error_exit:;

    Py_XDECREF( _python_par_field );
    Py_XDECREF( _python_par_model );
    Py_XDECREF( _python_par_cls );

    return NULL;
}

static PyObject *dparse_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_f )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 301 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 301 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_f.assign0( _python_tmp_iter_value.asObject() );
                APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_f.asObject(), _python_str_plain_attname ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_class_3_ModelState_of_module_django__db__models__base(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_base );
    _python_var___doc__.assign0( _python_unicode_digest_dc4500094f6dd0478b314bc373d6162e );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_ModelState_of_module_django__db__models__base(  ) );
    return _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___init___of_class_3_ModelState_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_db )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_db( _python_str_plain_db, _python_par_db );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_ModelState_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_ModelState_of_module_django__db__models__base ) )
    {
        if ( frame_function_1___init___of_class_3_ModelState_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_ModelState_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_ModelState_of_module_django__db__models__base );
        }

        frame_function_1___init___of_class_3_ModelState_of_module_django__db__models__base = MAKE_FRAME( _codeobj_0073086bea8f3ed68a6622aa9d202c14, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_ModelState_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_ModelState_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 315 );
        {
                PyObject *tmp_identifier = _python_var_db.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_db );
        }
        frame_guard.setLineNumber( 319 );
        SET_ATTRIBUTE( Py_True, _python_var_self.asObject(), _python_str_plain_adding );
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
        frame_guard.getFrame0()->f_locals = _python_var_db.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_ModelState_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_1___init___of_class_3_ModelState_of_module_django__db__models__base );
           frame_function_1___init___of_class_3_ModelState_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_ModelState_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_db = NULL;
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
            if ( found == false && _python_str_plain_db == key )
            {
                if (unlikely( _python_par_db ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'db'" );
                    goto error_exit;
                }

                _python_par_db = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_db, key ) )
            {
                if (unlikely( _python_par_db ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'db'" );
                    goto error_exit;
                }

                _python_par_db = value;

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
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
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
                if ( 2 == 1 )
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
         if (unlikely( _python_par_db != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'db'" );
             goto error_exit;
         }

        _python_par_db = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_db == NULL )
    {
        _python_par_db = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_db );
    }


    return impl_function_1___init___of_class_3_ModelState_of_module_django__db__models__base( self, _python_par_self, _python_par_db );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_db );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_ModelState_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_3_ModelState_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_ModelState_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_Model_of_module_django__db__models__base(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var__deferred( _python_str_plain__deferred );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );
    PyObjectLocalVariable _python_var___str__( _python_str_plain___str__ );
    PyObjectLocalVariable _python_var___eq__( _python_str_plain___eq__ );
    PyObjectLocalVariable _python_var___ne__( _python_str_plain___ne__ );
    PyObjectLocalVariable _python_var___hash__( _python_str_plain___hash__ );
    PyObjectLocalVariable _python_var___reduce__( _python_str_plain___reduce__ );
    PyObjectLocalVariable _python_var__get_pk_val( _python_str_plain__get_pk_val );
    PyObjectLocalVariable _python_var__set_pk_val( _python_str_plain__set_pk_val );
    PyObjectLocalVariable _python_var_pk( _python_str_plain_pk );
    PyObjectLocalVariable _python_var_serializable_value( _python_str_plain_serializable_value );
    PyObjectLocalVariable _python_var_save( _python_str_plain_save );
    PyObjectLocalVariable _python_var_save_base( _python_str_plain_save_base );
    PyObjectLocalVariable _python_var__save_parents( _python_str_plain__save_parents );
    PyObjectLocalVariable _python_var__save_table( _python_str_plain__save_table );
    PyObjectLocalVariable _python_var__do_update( _python_str_plain__do_update );
    PyObjectLocalVariable _python_var__do_insert( _python_str_plain__do_insert );
    PyObjectLocalVariable _python_var_delete( _python_str_plain_delete );
    PyObjectLocalVariable _python_var__get_FIELD_display( _python_str_plain__get_FIELD_display );
    PyObjectLocalVariable _python_var__get_next_or_previous_by_FIELD( _python_str_plain__get_next_or_previous_by_FIELD );
    PyObjectLocalVariable _python_var__get_next_or_previous_in_order( _python_str_plain__get_next_or_previous_in_order );
    PyObjectLocalVariable _python_var_prepare_database_save( _python_str_plain_prepare_database_save );
    PyObjectLocalVariable _python_var_clean( _python_str_plain_clean );
    PyObjectLocalVariable _python_var_validate_unique( _python_str_plain_validate_unique );
    PyObjectLocalVariable _python_var__get_unique_checks( _python_str_plain__get_unique_checks );
    PyObjectLocalVariable _python_var__perform_unique_checks( _python_str_plain__perform_unique_checks );
    PyObjectLocalVariable _python_var__perform_date_checks( _python_str_plain__perform_date_checks );
    PyObjectLocalVariable _python_var_date_error_message( _python_str_plain_date_error_message );
    PyObjectLocalVariable _python_var_unique_error_message( _python_str_plain_unique_error_message );
    PyObjectLocalVariable _python_var_full_clean( _python_str_plain_full_clean );
    PyObjectLocalVariable _python_var_clean_fields( _python_str_plain_clean_fields );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_base );
    _python_var__deferred.assign0( Py_False );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_2___repr___of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var___str__.assign1( MAKE_FUNCTION_function_3___str___of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var___eq__.assign1( MAKE_FUNCTION_function_4___eq___of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var___ne__.assign1( MAKE_FUNCTION_function_5___ne___of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var___hash__.assign1( MAKE_FUNCTION_function_6___hash___of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var___reduce__.assign1( MAKE_FUNCTION_function_7___reduce___of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var__get_pk_val.assign1( MAKE_FUNCTION_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var__set_pk_val.assign1( MAKE_FUNCTION_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base(  ) );
    static PyFrameObject *frame_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_class_4_Model_of_module_django__db__models__base );
        }

        frame_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_74146524c25e8ee53490278bc4c43188, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 473 );
        {
            PyObjectTempKeeper0 call2;
            _python_var_pk.assign1( ( call2.assign( _python_var__get_pk_val.asObject() ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), call2.asObject0(), _python_var__set_pk_val.asObject() ) ) );
        }
        _python_var_serializable_value.assign1( MAKE_FUNCTION_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base(  ) );
        _python_var_save.assign1( MAKE_FUNCTION_function_11_save_of_class_4_Model_of_module_django__db__models__base(  ) );
        frame_guard.setLineNumber( 549 );
        SET_ATTRIBUTE( Py_True, _python_var_save.asObject(), _python_str_plain_alters_data );
        _python_var_save_base.assign1( MAKE_FUNCTION_function_12_save_base_of_class_4_Model_of_module_django__db__models__base(  ) );
        frame_guard.setLineNumber( 587 );
        SET_ATTRIBUTE( Py_True, _python_var_save_base.asObject(), _python_str_plain_alters_data );
        _python_var__save_parents.assign1( MAKE_FUNCTION_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base(  ) );
        _python_var__save_table.assign1( MAKE_FUNCTION_function_14__save_table_of_class_4_Model_of_module_django__db__models__base(  ) );
        _python_var__do_update.assign1( MAKE_FUNCTION_function_15__do_update_of_class_4_Model_of_module_django__db__models__base(  ) );
        _python_var__do_insert.assign1( MAKE_FUNCTION_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base(  ) );
        _python_var_delete.assign1( MAKE_FUNCTION_function_17_delete_of_class_4_Model_of_module_django__db__models__base(  ) );
        frame_guard.setLineNumber( 692 );
        SET_ATTRIBUTE( Py_True, _python_var_delete.asObject(), _python_str_plain_alters_data );
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
        frame_guard.getFrame0()->f_locals = _python_var_clean_fields.updateLocalsDict( _python_var_full_clean.updateLocalsDict( _python_var_unique_error_message.updateLocalsDict( _python_var_date_error_message.updateLocalsDict( _python_var__perform_date_checks.updateLocalsDict( _python_var__perform_unique_checks.updateLocalsDict( _python_var__get_unique_checks.updateLocalsDict( _python_var_validate_unique.updateLocalsDict( _python_var_clean.updateLocalsDict( _python_var_prepare_database_save.updateLocalsDict( _python_var__get_next_or_previous_in_order.updateLocalsDict( _python_var__get_next_or_previous_by_FIELD.updateLocalsDict( _python_var__get_FIELD_display.updateLocalsDict( _python_var_delete.updateLocalsDict( _python_var__do_insert.updateLocalsDict( _python_var__do_update.updateLocalsDict( _python_var__save_table.updateLocalsDict( _python_var__save_parents.updateLocalsDict( _python_var_save_base.updateLocalsDict( _python_var_save.updateLocalsDict( _python_var_serializable_value.updateLocalsDict( _python_var_pk.updateLocalsDict( _python_var__set_pk_val.updateLocalsDict( _python_var__get_pk_val.updateLocalsDict( _python_var___reduce__.updateLocalsDict( _python_var___hash__.updateLocalsDict( _python_var___ne__.updateLocalsDict( _python_var___eq__.updateLocalsDict( _python_var___str__.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var__deferred.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_class_4_Model_of_module_django__db__models__base );
           frame_class_4_Model_of_module_django__db__models__base = NULL;
        }

        throw;
    }
    _python_var__get_FIELD_display.assign1( MAKE_FUNCTION_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var__get_next_or_previous_by_FIELD.assign1( MAKE_FUNCTION_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var__get_next_or_previous_in_order.assign1( MAKE_FUNCTION_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var_prepare_database_save.assign1( MAKE_FUNCTION_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var_clean.assign1( MAKE_FUNCTION_function_22_clean_of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var_validate_unique.assign1( MAKE_FUNCTION_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var__get_unique_checks.assign1( MAKE_FUNCTION_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var__perform_unique_checks.assign1( MAKE_FUNCTION_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var__perform_date_checks.assign1( MAKE_FUNCTION_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var_date_error_message.assign1( MAKE_FUNCTION_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var_unique_error_message.assign1( MAKE_FUNCTION_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var_full_clean.assign1( MAKE_FUNCTION_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base(  ) );
    _python_var_clean_fields.assign1( MAKE_FUNCTION_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base(  ) );
    return _python_var_clean_fields.updateLocalsDict( _python_var_full_clean.updateLocalsDict( _python_var_unique_error_message.updateLocalsDict( _python_var_date_error_message.updateLocalsDict( _python_var__perform_date_checks.updateLocalsDict( _python_var__perform_unique_checks.updateLocalsDict( _python_var__get_unique_checks.updateLocalsDict( _python_var_validate_unique.updateLocalsDict( _python_var_clean.updateLocalsDict( _python_var_prepare_database_save.updateLocalsDict( _python_var__get_next_or_previous_in_order.updateLocalsDict( _python_var__get_next_or_previous_by_FIELD.updateLocalsDict( _python_var__get_FIELD_display.updateLocalsDict( _python_var_delete.updateLocalsDict( _python_var__do_insert.updateLocalsDict( _python_var__do_update.updateLocalsDict( _python_var__save_table.updateLocalsDict( _python_var__save_parents.updateLocalsDict( _python_var_save_base.updateLocalsDict( _python_var_save.updateLocalsDict( _python_var_serializable_value.updateLocalsDict( _python_var_pk.updateLocalsDict( _python_var__set_pk_val.updateLocalsDict( _python_var__get_pk_val.updateLocalsDict( _python_var___reduce__.updateLocalsDict( _python_var___hash__.updateLocalsDict( _python_var___ne__.updateLocalsDict( _python_var___eq__.updateLocalsDict( _python_var___str__.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var__deferred.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_args_len( _python_str_plain_args_len );
    PyObjectLocalVariable _python_var_fields_iter( _python_str_plain_fields_iter );
    PyObjectLocalVariable _python_var_val( _python_str_plain_val );
    PyObjectLocalVariable _python_var_field( _python_str_plain_field );
    PyObjectLocalVariable _python_var_is_related_object( _python_str_plain_is_related_object );
    PyObjectLocalVariable _python_var_rel_obj( _python_str_plain_rel_obj );
    PyObjectLocalVariable _python_var_prop( _python_str_plain_prop );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_1___init___of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_1___init___of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_1___init___of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_0e309877ed9790b0437a5828f921df85, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 326 );
        {
            PyObjectTempKeeper1 call7;
            PyObjectTempKeeper1 make_dict1;
            PyObjectTempKeeper0 make_dict3;
            DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_signals.asObject0(), _python_str_plain_pre_init ) ).asObject(), _python_str_plain_send ) ), CALL_FUNCTION( call7.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), make_dict3.assign( _python_var_args.asObject() ), MAKE_DICT3( make_dict1.asObject0(), _python_str_plain_sender, make_dict3.asObject0(), _python_str_plain_args, _python_var_kwargs.asObject(), _python_str_plain_kwargs ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 329 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( _mvar_django__db__models__base_ModelState.asObject0() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__state );
        }
        frame_guard.setLineNumber( 335 );
        _python_var_args_len.assign1( BUILTIN_LEN( _python_var_args.asObject() ) );
        frame_guard.setLineNumber( 336 );
        {
            PyObjectTempKeeper0 cmp10;
            if ( ( cmp10.assign( _python_var_args_len.asObject() ), RICH_COMPARE_BOOL_GT( cmp10.asObject0(), PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_concrete_fields ) ).asObject() ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 338 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_IndexError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_d9cd5a619883f41407ad8adbee6b5c8b ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        }
        frame_guard.setLineNumber( 340 );
        if ( (!( CHECK_IF_TRUE( _python_var_kwargs.asObject() ) )) )
        {
            frame_guard.setLineNumber( 341 );
            _python_var_fields_iter.assign1( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_concrete_fields ) ).asObject() ) );
            {
                frame_guard.setLineNumber( 346 );
                PyObject *_tmp_python_tmp_for_iterator;
                {
                    PyObjectTempKeeper0 call12;
                    PyObjectTempKeeper0 call13;
                    _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call12.assign( _mvar_django__db__models__base_zip.asObject0() ), call13.assign( _python_var_args.asObject() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), call13.asObject0(), _python_var_fields_iter.asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 346 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        {
                            frame_guard.setLineNumber( 346 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_val.assign0( _python_tmp_element_1.asObject() );
                            _python_var_field.assign0( _python_tmp_element_2.asObject() );
                        }
                    }
                    frame_guard.setLineNumber( 347 );
                    {
                        PyObjectTempKeeper0 setattr15;
                        PyObjectTempKeeper1 setattr16;
                        ( ( setattr15.assign( _python_var_self.asObject() ), setattr16.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ), BUILTIN_SETATTR( setattr15.asObject0(), setattr16.asObject0(), _python_var_val.asObject() ) ), Py_None );
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        else
        {
            frame_guard.setLineNumber( 350 );
            _python_var_fields_iter.assign1( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_fields ) ).asObject() ) );
            {
                frame_guard.setLineNumber( 351 );
                PyObject *_tmp_python_tmp_for_iterator;
                {
                    PyObjectTempKeeper0 call18;
                    PyObjectTempKeeper0 call19;
                    _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call18.assign( _mvar_django__db__models__base_zip.asObject0() ), call19.assign( _python_var_args.asObject() ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), call19.asObject0(), _python_var_fields_iter.asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 351 );
                        PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_2 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                        {
                            frame_guard.setLineNumber( 351 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_val.assign0( _python_tmp_element_1.asObject() );
                            _python_var_field.assign0( _python_tmp_element_2.asObject() );
                        }
                    }
                    frame_guard.setLineNumber( 352 );
                    {
                        PyObjectTempKeeper0 setattr21;
                        PyObjectTempKeeper1 setattr22;
                        ( ( setattr21.assign( _python_var_self.asObject() ), setattr22.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ), BUILTIN_SETATTR( setattr21.asObject0(), setattr22.asObject0(), _python_var_val.asObject() ) ), Py_None );
                    }
                    frame_guard.setLineNumber( 353 );
                    {
                        PyObjectTempKeeper1 call24;
                        DECREASE_REFCOUNT( ( call24.assign( LOOKUP_ATTRIBUTE( _python_var_kwargs.asObject(), _python_str_plain_pop ) ), CALL_FUNCTION_WITH_ARGS( call24.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ).asObject(), Py_None ) ) );
                    }
                    frame_guard.setLineNumber( 355 );
                    {
                        PyObjectTempKeeper1 isinstance30;
                        if ( ( isinstance30.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_rel ) ), BUILTIN_ISINSTANCE_BOOL( isinstance30.asObject0(), _mvar_django__db__models__base_ManyToOneRel.asObject0() ) ) )
                    {
                        frame_guard.setLineNumber( 356 );
                        {
                            PyObjectTempKeeper1 call27;
                            DECREASE_REFCOUNT( ( call27.assign( LOOKUP_ATTRIBUTE( _python_var_kwargs.asObject(), _python_str_plain_pop ) ), CALL_FUNCTION_WITH_ARGS( call27.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject(), Py_None ) ) );
                        }
                    }
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        {
            frame_guard.setLineNumber( 361 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_fields_iter.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 361 );
                    PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_3 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                    _python_var_field.assign0( _python_tmp_iter_value.asObject() );
                }
                _python_var_is_related_object.assign0( Py_False );
                frame_guard.setLineNumber( 366 );
                {
                    PyObjectTempKeeper1 call34;
                    PyObjectTempKeeper1 cmp32;
                    PyObjectTempKeeper1 isinstance36;
                    if ( ( ( cmp32.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ), SEQUENCE_CONTAINS_NOT_BOOL( cmp32.asObject0(), _python_var_kwargs.asObject() ) ) && ( ( isinstance36.assign( ( call34.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___dict__ ) ).asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call34.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject() ) ) ), BUILTIN_ISINSTANCE_BOOL( isinstance36.asObject0(), _mvar_django__db__models__base_DeferredAttribute.asObject0() ) ) || ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_column ) ).asObject() == Py_None ) ) ) )
                {
                    frame_guard.setLineNumber( 370 );
                    CONSIDER_THREADING(); continue;
                }
                }
                frame_guard.setLineNumber( 371 );
                if ( CHECK_IF_TRUE( _python_var_kwargs.asObject() ) )
                {
                    frame_guard.setLineNumber( 372 );
                    {
                        PyObjectTempKeeper1 isinstance44;
                        if ( ( isinstance44.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_rel ) ), BUILTIN_ISINSTANCE_BOOL( isinstance44.asObject0(), _mvar_django__db__models__base_ForeignObjectRel.asObject0() ) ) )
                    {
                        {
                            PyObject *_python_tmp_unhandled_indicator = Py_True;
                            frame_guard.setLineNumber( 373 );
                            try
                            {
                                frame_guard.setLineNumber( 375 );
                                {
                                    PyObjectTempKeeper1 call40;
                                    _python_var_rel_obj.assign1( ( call40.assign( LOOKUP_ATTRIBUTE( _python_var_kwargs.asObject(), _python_str_plain_pop ) ), CALL_FUNCTION_WITH_ARGS( call40.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ).asObject() ) ) );
                                }
                                _python_var_is_related_object.assign0( Py_True );
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

                                if ( _exception.matches( PyExc_KeyError ) )
                                {
                                    frame_guard.detachFrame();
                                    _python_tmp_unhandled_indicator = Py_False;
                                    frame_guard.setLineNumber( 378 );
                                    try
                                    {
                                        frame_guard.setLineNumber( 380 );
                                        {
                                            PyObjectTempKeeper1 call38;
                                            _python_var_val.assign1( ( call38.assign( LOOKUP_ATTRIBUTE( _python_var_kwargs.asObject(), _python_str_plain_pop ) ), CALL_FUNCTION_WITH_ARGS( call38.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject() ) ) );
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

                                        if ( _exception.matches( PyExc_KeyError ) )
                                        {
                                            frame_guard.detachFrame();
                                            frame_guard.setLineNumber( 382 );
                                            _python_var_val.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_get_default ) ).asObject() ) );
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
                                    PyTracebackObject *tb = _exception.getTraceback();
                                    frame_guard.setLineNumber( tb->tb_lineno );
                                    _exception.setTraceback( tb->tb_next );
                                    tb->tb_next = NULL;

                                    throw;
                                }
                            }
                            if ( ( _python_tmp_unhandled_indicator == Py_True ) )
                            {
                                frame_guard.setLineNumber( 386 );
                                if ( ( ( _python_var_rel_obj.asObject() == Py_None ) && CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_null ) ).asObject() ) ) )
                                {
                                    _python_var_val.assign0( Py_None );
                                }
                            }
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 389 );
                        try
                        {
                            frame_guard.setLineNumber( 390 );
                            {
                                PyObjectTempKeeper1 call42;
                                _python_var_val.assign1( ( call42.assign( LOOKUP_ATTRIBUTE( _python_var_kwargs.asObject(), _python_str_plain_pop ) ), CALL_FUNCTION_WITH_ARGS( call42.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject() ) ) );
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

                            if ( _exception.matches( PyExc_KeyError ) )
                            {
                                frame_guard.detachFrame();
                                frame_guard.setLineNumber( 396 );
                                _python_var_val.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_get_default ) ).asObject() ) );
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
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 398 );
                    _python_var_val.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_get_default ) ).asObject() ) );
                }
                frame_guard.setLineNumber( 400 );
                if ( CHECK_IF_TRUE( _python_var_is_related_object.asObject() ) )
                {
                    frame_guard.setLineNumber( 405 );
                    {
                        PyObjectTempKeeper0 setattr46;
                        PyObjectTempKeeper1 setattr47;
                        ( ( setattr46.assign( _python_var_self.asObject() ), setattr47.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ), BUILTIN_SETATTR( setattr46.asObject0(), setattr47.asObject0(), _python_var_rel_obj.asObject() ) ), Py_None );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 407 );
                    {
                        PyObjectTempKeeper0 setattr49;
                        PyObjectTempKeeper1 setattr50;
                        ( ( setattr49.assign( _python_var_self.asObject() ), setattr50.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ), BUILTIN_SETATTR( setattr49.asObject0(), setattr50.asObject0(), _python_var_val.asObject() ) ), Py_None );
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 409 );
        if ( CHECK_IF_TRUE( _python_var_kwargs.asObject() ) )
        {
            {
                frame_guard.setLineNumber( 410 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( TO_LIST( _python_var_kwargs.asObject() ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 410 );
                        PyObject *_tmp_unpack_4 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_4 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_4 );
                        _python_var_prop.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 411 );
                    try
                    {
                        frame_guard.setLineNumber( 412 );
                        {
                            PyObjectTempKeeper1 getattr57;
                            if ( BUILTIN_ISINSTANCE_BOOL( PyObjectTemporary( ( getattr57.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), BUILTIN_GETATTR( getattr57.asObject0(), _python_var_prop.asObject(), NULL ) ) ).asObject(), LOOKUP_BUILTIN( _python_str_plain_property ) ) )
                        {
                            frame_guard.setLineNumber( 413 );
                            {
                                PyObjectTempKeeper1 call52;
                                PyObjectTempKeeper0 setattr54;
                                PyObjectTempKeeper0 setattr55;
                                ( ( setattr54.assign( _python_var_self.asObject() ), setattr55.assign( _python_var_prop.asObject() ), BUILTIN_SETATTR( setattr54.asObject0(), setattr55.asObject0(), PyObjectTemporary( ( call52.assign( LOOKUP_ATTRIBUTE( _python_var_kwargs.asObject(), _python_str_plain_pop ) ), CALL_FUNCTION_WITH_ARGS( call52.asObject0(), _python_var_prop.asObject() ) ) ).asObject() ) ), Py_None );
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

                        frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
                        ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
                        _exception.toExceptionHandler();

                        if ( _exception.matches( PyExc_AttributeError ) )
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

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 416 );
            if ( CHECK_IF_TRUE( _python_var_kwargs.asObject() ) )
            {
                frame_guard.setLineNumber( 417 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_9c728917716c64124d4239fd0ebfe72f, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( TO_LIST( _python_var_kwargs.asObject() ) ).asObject(), _python_int_0, 0 ) ).asObject() ) ).asObject() ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
        }
        frame_guard.setLineNumber( 418 );
        {
            PyObjectTempKeeper0 super60;
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super60.assign( _mvar_django__db__models__base_Model.asObject0() ), BUILTIN_SUPER( super60.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 419 );
        {
            PyObjectTempKeeper1 call66;
            PyObjectTempKeeper1 make_dict62;
            DECREASE_REFCOUNT( ( call66.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_signals.asObject0(), _python_str_plain_post_init ) ).asObject(), _python_str_plain_send ) ), CALL_FUNCTION( call66.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict62.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), MAKE_DICT2( make_dict62.asObject0(), _python_str_plain_sender, _python_var_self.asObject(), _python_str_plain_instance ) ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_prop.updateLocalsDict( _python_var_rel_obj.updateLocalsDict( _python_var_is_related_object.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_val.updateLocalsDict( _python_var_fields_iter.updateLocalsDict( _python_var_args_len.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_1___init___of_class_4_Model_of_module_django__db__models__base );
           frame_function_1___init___of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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


    return impl_function_1___init___of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___repr___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_u( _python_str_plain_u );

    // Actual function code.
    static PyFrameObject *frame_function_2___repr___of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_2___repr___of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_2___repr___of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___repr___of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_2___repr___of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_2___repr___of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_40908b5a3df7785cd52dd3a1c73d98b2, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_2___repr___of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_2___repr___of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 422 );
        try
        {
            frame_guard.setLineNumber( 423 );
            {
                PyObjectTempKeeper1 call1;
                _python_var_u.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_self.asObject() ) ) );
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

            if ( _exception.matches( PyExc_UnicodeEncodeError ) || _exception.matches( PyExc_UnicodeDecodeError ) )
            {
                frame_guard.detachFrame();
                _python_var_u.assign0( _python_unicode_digest_fa48efb1cde1f2ad6dd885cafb192a7c );
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
        frame_guard.setLineNumber( 426 );
        {
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper1 make_tuple3;
            return ( call5.assign( _mvar_django__db__models__base_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_2cd859f75f1f8232c125cc11124965d8, PyObjectTemporary( ( make_tuple3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ), MAKE_TUPLE2( make_tuple3.asObject0(), _python_var_u.asObject() ) ) ).asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_u.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2___repr___of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_2___repr___of_class_4_Model_of_module_django__db__models__base );
           frame_function_2___repr___of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___repr___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__repr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__repr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__repr__() got multiple values for keyword argument 'self'" );
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
                   "__repr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__repr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__repr__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__repr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___repr___of_class_4_Model_of_module_django__db__models__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___repr___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___repr___of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___repr___of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___str___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_klass_name( _python_str_plain_klass_name );

    // Actual function code.
    static PyFrameObject *frame_function_3___str___of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_3___str___of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_3___str___of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___str___of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_3___str___of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_3___str___of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_3c7774c103881e3e54ebe609910b53b2, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_3___str___of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_3___str___of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 429 );
        if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )) && HAS_ATTRIBUTE( _python_var_self.asObject(), _python_unicode_plain___unicode__ ) ) )
        {
            frame_guard.setLineNumber( 430 );
            {
                PyObjectTempKeeper1 cmp1;
                if ( ( cmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_self.asObject() ) ).asObject(), _python_str_plain___unicode__ ) ), RICH_COMPARE_BOOL_EQ( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_Model.asObject0(), _python_str_plain___str__ ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 431 );
                _python_var_klass_name.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_self.asObject() ) ).asObject(), _python_str_plain___name__ ) );
                frame_guard.setLineNumber( 432 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_RuntimeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_e4c5162f04fa7c4cc76b9757cd1463d2, _python_var_klass_name.asObject() ) ).asObject() ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
            }
            frame_guard.setLineNumber( 435 );
            {
                PyObjectTempKeeper0 call3;
                return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call3.assign( _mvar_django__db__models__base_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_digest_e9e2aa8136260a22b0b09fdee43ccb8a );
            }
        }
        frame_guard.setLineNumber( 436 );
        return BINARY_OPERATION_REMAINDER( _python_unicode_digest_6f42f4b531bb7af9b368cc720c3d8132, PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_klass_name.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3___str___of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_3___str___of_class_4_Model_of_module_django__db__models__base );
           frame_function_3___str___of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3___str___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__str__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__str__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__str__() got multiple values for keyword argument 'self'" );
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
                   "__str__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__str__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__str__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__str__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3___str___of_class_4_Model_of_module_django__db__models__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3___str___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3___str___of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___str___of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___eq___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_other )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_other( _python_str_plain_other, _python_par_other );

    // Actual function code.
    static PyFrameObject *frame_function_4___eq___of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_4___eq___of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_4___eq___of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4___eq___of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_4___eq___of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_4___eq___of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_fed7b0c1aec10135a88fbd99e34b3a87, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_4___eq___of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_4___eq___of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 439 );
        {
            PyObjectTempKeeper1 cmp3;
            PyObjectTempKeeper0 isinstance1;
            PyObjectTempKeeper0 keeper_0;
            return ( CHECK_IF_TRUE( keeper_0.assign( BOOL_FROM( ( isinstance1.assign( _python_var_other.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject() ) ) ) ) ) ? ( cmp3.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get_pk_val ) ).asObject() ) ), RICH_COMPARE_EQ( cmp3.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_other.asObject(), _python_str_plain__get_pk_val ) ).asObject() ) ).asObject() ) ) : INCREASE_REFCOUNT( keeper_0.asObject0() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_other.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4___eq___of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_4___eq___of_class_4_Model_of_module_django__db__models__base );
           frame_function_4___eq___of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4___eq___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_other = NULL;
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
                PyErr_Format( PyExc_TypeError, "__eq__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__eq__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_other == key )
            {
                if (unlikely( _python_par_other ))
                {
                    PyErr_Format( PyExc_TypeError, "__eq__() got multiple values for keyword argument 'other'" );
                    goto error_exit;
                }

                _python_par_other = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__eq__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_other, key ) )
            {
                if (unlikely( _python_par_other ))
                {
                    PyErr_Format( PyExc_TypeError, "__eq__() got multiple values for keyword argument 'other'" );
                    goto error_exit;
                }

                _python_par_other = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__eq__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__eq__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__eq__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__eq__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__eq__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__eq__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__eq__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__eq__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__eq__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__eq__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__eq__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__eq__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__eq__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__eq__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_other != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__eq__() got multiple values for keyword argument 'other'" );
             goto error_exit;
         }

        _python_par_other = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4___eq___of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_other );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_other );

    return NULL;
}

static PyObject *dparse_function_4___eq___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4___eq___of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___eq___of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5___ne___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_other )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_other( _python_str_plain_other, _python_par_other );

    // Actual function code.
    static PyFrameObject *frame_function_5___ne___of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_5___ne___of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_5___ne___of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5___ne___of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_5___ne___of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_5___ne___of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_69a65bdfd6718aa64b1b6ae1f66f019d, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_5___ne___of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_5___ne___of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 442 );
        {
            PyObjectTempKeeper1 call1;
            return INCREASE_REFCOUNT( UNARY_OPERATION( UNARY_NOT, PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___eq__ ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_other.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_other.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5___ne___of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_5___ne___of_class_4_Model_of_module_django__db__models__base );
           frame_function_5___ne___of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5___ne___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_other = NULL;
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
                PyErr_Format( PyExc_TypeError, "__ne__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__ne__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_other == key )
            {
                if (unlikely( _python_par_other ))
                {
                    PyErr_Format( PyExc_TypeError, "__ne__() got multiple values for keyword argument 'other'" );
                    goto error_exit;
                }

                _python_par_other = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__ne__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_other, key ) )
            {
                if (unlikely( _python_par_other ))
                {
                    PyErr_Format( PyExc_TypeError, "__ne__() got multiple values for keyword argument 'other'" );
                    goto error_exit;
                }

                _python_par_other = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__ne__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__ne__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__ne__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__ne__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__ne__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__ne__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__ne__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__ne__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__ne__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__ne__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__ne__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__ne__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__ne__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__ne__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_other != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__ne__() got multiple values for keyword argument 'other'" );
             goto error_exit;
         }

        _python_par_other = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_5___ne___of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_other );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_other );

    return NULL;
}

static PyObject *dparse_function_5___ne___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5___ne___of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5___ne___of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6___hash___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_6___hash___of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_6___hash___of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_6___hash___of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6___hash___of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_6___hash___of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_6___hash___of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_b3a3f916001613c90481a5b2a08ff29a, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_6___hash___of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_6___hash___of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 445 );
        return CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_hash ), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get_pk_val ) ).asObject() ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_6___hash___of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_6___hash___of_class_4_Model_of_module_django__db__models__base );
           frame_function_6___hash___of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6___hash___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__hash__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__hash__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__hash__() got multiple values for keyword argument 'self'" );
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
                   "__hash__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__hash__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__hash__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__hash__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__hash__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__hash__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__hash__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__hash__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__hash__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__hash__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__hash__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__hash__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__hash__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__hash__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6___hash___of_class_4_Model_of_module_django__db__models__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6___hash___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6___hash___of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6___hash___of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7___reduce___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_data( _python_str_plain_data );
    PyObjectLocalVariable _python_var_defers( _python_str_plain_defers );
    PyObjectLocalVariable _python_var_field( _python_str_plain_field );
    PyObjectLocalVariable _python_var_model( _python_str_plain_model );

    // Actual function code.
    static PyFrameObject *frame_function_7___reduce___of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_7___reduce___of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_7___reduce___of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7___reduce___of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_7___reduce___of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_7___reduce___of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_dffb89490b4699e10e1869d9f9bf54fa, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_7___reduce___of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_7___reduce___of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 454 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__deferred ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 455 );
            {
                PyObjectTempKeeper0 super1;
                return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__db__models__base_Model.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___reduce__ ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 456 );
        _python_var_data.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___dict__ ) );
        _python_var_defers.assign1( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 458 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_fields ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 458 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_field.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 459 );
                {
                    PyObjectTempKeeper1 call5;
                    PyObjectTempKeeper1 isinstance7;
                    if ( ( isinstance7.assign( ( call5.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___dict__ ) ).asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject() ) ) ), BUILTIN_ISINSTANCE_BOOL( isinstance7.asObject0(), _mvar_django__db__models__base_DeferredAttribute.asObject0() ) ) )
                {
                    frame_guard.setLineNumber( 461 );
                    {
                        PyObjectTempKeeper1 call3;
                        DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_defers.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject() ) ) );
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 462 );
        _python_var_model.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_proxy_for_model ) );
        frame_guard.setLineNumber( 463 );
        {
            PyObjectTempKeeper0 make_tuple11;
            PyObjectTempKeeper1 make_tuple12;
            PyObjectTempKeeper0 make_tuple9;
            return ( make_tuple11.assign( _mvar_django__db__models__base_model_unpickle.asObject0() ), make_tuple12.assign( ( make_tuple9.assign( _python_var_model.asObject() ), MAKE_TUPLE2( make_tuple9.asObject0(), _python_var_defers.asObject() ) ) ), MAKE_TUPLE3( make_tuple11.asObject0(), make_tuple12.asObject0(), _python_var_data.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_model.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_defers.updateLocalsDict( _python_var_data.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7___reduce___of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_7___reduce___of_class_4_Model_of_module_django__db__models__base );
           frame_function_7___reduce___of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7___reduce___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__reduce__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__reduce__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__reduce__() got multiple values for keyword argument 'self'" );
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
                   "__reduce__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__reduce__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__reduce__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__reduce__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__reduce__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__reduce__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__reduce__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__reduce__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7___reduce___of_class_4_Model_of_module_django__db__models__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_7___reduce___of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7___reduce___of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7___reduce___of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_meta )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_meta( _python_str_plain_meta, _python_par_meta );

    // Actual function code.
    static PyFrameObject *frame_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_739cf5f0be3e513c00bcdcb6cea8b21e, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 466 );
        if ( (!( CHECK_IF_TRUE( _python_var_meta.asObject() ) )) )
        {
            frame_guard.setLineNumber( 467 );
            _python_var_meta.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) );
        }
        frame_guard.setLineNumber( 468 );
        {
            PyObjectTempKeeper0 getattr1;
            return ( getattr1.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_meta.asObject(), _python_str_plain_pk ) ).asObject(), _python_str_plain_attname ) ).asObject(), NULL ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_meta.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base );
           frame_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_meta = NULL;
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
                PyErr_Format( PyExc_TypeError, "_get_pk_val() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_get_pk_val() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_meta == key )
            {
                if (unlikely( _python_par_meta ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_pk_val() got multiple values for keyword argument 'meta'" );
                    goto error_exit;
                }

                _python_par_meta = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_pk_val() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_meta, key ) )
            {
                if (unlikely( _python_par_meta ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_pk_val() got multiple values for keyword argument 'meta'" );
                    goto error_exit;
                }

                _python_par_meta = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_get_pk_val() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_get_pk_val() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_get_pk_val() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_get_pk_val() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_pk_val() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_pk_val() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_pk_val() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_pk_val() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_pk_val() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "_get_pk_val() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_get_pk_val() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_get_pk_val() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_get_pk_val() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_get_pk_val() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_meta != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_get_pk_val() got multiple values for keyword argument 'meta'" );
             goto error_exit;
         }

        _python_par_meta = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_meta == NULL )
    {
        _python_par_meta = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_meta );
    }


    return impl_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_meta );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_meta );

    return NULL;
}

static PyObject *dparse_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_b7a61084651b1b4c34cfad7f682f4adf, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 471 );
        {
            PyObjectTempKeeper0 setattr1;
            PyObjectTempKeeper1 setattr2;
            return INCREASE_REFCOUNT( ( ( setattr1.assign( _python_var_self.asObject() ), setattr2.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_pk ) ).asObject(), _python_str_plain_attname ) ), BUILTIN_SETATTR( setattr1.asObject0(), setattr2.asObject0(), _python_var_value.asObject() ) ), Py_None ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base );
           frame_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "_set_pk_val() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_set_pk_val() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "_set_pk_val() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_set_pk_val() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "_set_pk_val() got multiple values for keyword argument 'value'" );
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
                   "_set_pk_val() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_set_pk_val() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_set_pk_val() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_set_pk_val() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_set_pk_val() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_set_pk_val() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_set_pk_val() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_set_pk_val() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_set_pk_val() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_set_pk_val() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_set_pk_val() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_set_pk_val() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_set_pk_val() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_set_pk_val() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_set_pk_val() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_field_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_field_name( _python_str_plain_field_name, _python_par_field_name );
    PyObjectLocalVariable _python_var_field( _python_str_plain_field );

    // Actual function code.
    static PyFrameObject *frame_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_660bf5d7ade89a810dba3478e4b99656, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 486 );
        try
        {
            frame_guard.setLineNumber( 487 );
            {
                PyObjectTempKeeper1 call4;
                _python_var_field.assign1( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_get_field_by_name ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_field_name.asObject() ) ) ).asObject(), _python_int_0, 0 ) );
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

            if ( _exception.matches( _mvar_django__db__models__base_FieldDoesNotExist.asObject0() ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 489 );
                {
                    PyObjectTempKeeper0 getattr1;
                    return ( getattr1.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), _python_var_field_name.asObject(), NULL ) );
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
        frame_guard.setLineNumber( 490 );
        {
            PyObjectTempKeeper0 getattr6;
            return ( getattr6.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject(), NULL ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_field_name.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_field.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base );
           frame_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_field_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "serializable_value() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "serializable_value() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_field_name == key )
            {
                if (unlikely( _python_par_field_name ))
                {
                    PyErr_Format( PyExc_TypeError, "serializable_value() got multiple values for keyword argument 'field_name'" );
                    goto error_exit;
                }

                _python_par_field_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "serializable_value() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_field_name, key ) )
            {
                if (unlikely( _python_par_field_name ))
                {
                    PyErr_Format( PyExc_TypeError, "serializable_value() got multiple values for keyword argument 'field_name'" );
                    goto error_exit;
                }

                _python_par_field_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "serializable_value() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "serializable_value() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "serializable_value() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "serializable_value() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "serializable_value() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "serializable_value() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "serializable_value() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "serializable_value() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "serializable_value() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "serializable_value() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "serializable_value() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "serializable_value() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "serializable_value() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "serializable_value() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_field_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "serializable_value() got multiple values for keyword argument 'field_name'" );
             goto error_exit;
         }

        _python_par_field_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_field_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_field_name );

    return NULL;
}

static PyObject *dparse_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_save_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_force_insert, PyObject *_python_par_force_update, PyObject *_python_par_using, PyObject *_python_par_update_fields )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_force_insert( _python_str_plain_force_insert, _python_par_force_insert );
    PyObjectLocalParameterVariableNoDel _python_var_force_update( _python_str_plain_force_update, _python_par_force_update );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalParameterVariableNoDel _python_var_update_fields( _python_str_plain_update_fields, _python_par_update_fields );
    PyObjectLocalVariable _python_var_field_names( _python_str_plain_field_names );
    PyObjectLocalVariable _python_var_field( _python_str_plain_field );
    PyObjectLocalVariable _python_var_non_model_fields( _python_str_plain_non_model_fields );
    PyObjectLocalVariable _python_var_deferred_fields( _python_str_plain_deferred_fields );
    PyObjectLocalVariable _python_var_loaded_fields( _python_str_plain_loaded_fields );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );

    // Actual function code.
    static PyFrameObject *frame_function_11_save_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_11_save_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_11_save_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_save_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_11_save_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_11_save_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_7174da9a756810c435461c7699000f0c, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_11_save_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_11_save_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 502 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper0 keeper_0;
            _python_var_using.assign1( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_using.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_router.asObject0(), _python_str_plain_db_for_write ) ), call2.assign( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject() ) ), CALL_FUNCTION( call1.asObject0(), call2.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_self.asObject(), _python_str_plain_instance ) ).asObject() ) ) ) );
        }
        frame_guard.setLineNumber( 503 );
        if ( ( CHECK_IF_TRUE( _python_var_force_insert.asObject() ) && ( CHECK_IF_TRUE( _python_var_force_update.asObject() ) || CHECK_IF_TRUE( _python_var_update_fields.asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 504 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_0fdf69973c0ea37e14166e2836728f04 ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 506 );
        if ( ( _python_var_update_fields.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 510 );
            if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( _python_var_update_fields.asObject() ) ).asObject(), _python_int_0 ) )
            {
                return INCREASE_REFCOUNT( Py_None );
            }
            frame_guard.setLineNumber( 513 );
            _python_var_update_fields.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_frozenset ), _python_var_update_fields.asObject() ) );
            frame_guard.setLineNumber( 514 );
            _python_var_field_names.assign1( CALL_FUNCTION_NO_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ) ) );
            {
                frame_guard.setLineNumber( 516 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_fields ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 516 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_field.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 517 );
                    if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_primary_key ) ).asObject() ) )) )
                    {
                        frame_guard.setLineNumber( 518 );
                        {
                            PyObjectTempKeeper1 call4;
                            DECREASE_REFCOUNT( ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_field_names.asObject(), _python_str_plain_add ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ).asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 520 );
                        {
                            PyObjectTempKeeper1 cmp8;
                            if ( ( cmp8.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ), RICH_COMPARE_BOOL_NE( cmp8.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 521 );
                            {
                                PyObjectTempKeeper1 call6;
                                DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_field_names.asObject(), _python_str_plain_add ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject() ) ) );
                            }
                        }
                        }
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 523 );
            {
                PyObjectTempKeeper1 call10;
                _python_var_non_model_fields.assign1( ( call10.assign( LOOKUP_ATTRIBUTE( _python_var_update_fields.asObject(), _python_str_plain_difference ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_field_names.asObject() ) ) );
            }
            frame_guard.setLineNumber( 525 );
            if ( CHECK_IF_TRUE( _python_var_non_model_fields.asObject() ) )
            {
                frame_guard.setLineNumber( 526 );
                {
                    PyObjectTempKeeper1 call12;
                    {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_020f59cd71280ef66a4fd9b87fba8059, PyObjectTemporary( ( call12.assign( LOOKUP_ATTRIBUTE( _python_unicode_digest_fc763cb31e9938f37737394681228f83, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_var_non_model_fields.asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
                }
            }
        }
        else
        {
            frame_guard.setLineNumber( 532 );
            {
                PyObjectTempKeeper0 cmp18;
                if ( ( (!( CHECK_IF_TRUE( _python_var_force_insert.asObject() ) )) && ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__deferred ) ).asObject() ) && ( cmp18.assign( _python_var_using.asObject() ), RICH_COMPARE_BOOL_EQ( cmp18.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__state ) ).asObject(), _python_str_plain_db ) ).asObject() ) ) ) ) )
            {
                frame_guard.setLineNumber( 533 );
                _python_var_field_names.assign1( CALL_FUNCTION_NO_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ) ) );
                {
                    frame_guard.setLineNumber( 534 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_concrete_fields ) ).asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 534 );
                            PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_2 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                            _python_var_field.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 535 );
                        if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_primary_key ) ).asObject() ) )) && (!( HAS_ATTRIBUTE( _python_var_field.asObject(), _python_unicode_plain_through ) )) ) )
                        {
                            frame_guard.setLineNumber( 536 );
                            {
                                PyObjectTempKeeper1 call14;
                                DECREASE_REFCOUNT( ( call14.assign( LOOKUP_ATTRIBUTE( _python_var_field_names.asObject(), _python_str_plain_add ) ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject() ) ) );
                            }
                        }

                       CONSIDER_THREADING();
                    }
                }
                frame_guard.setLineNumber( 537 );
                _python_var_deferred_fields.assign1( impl_listcontr_1_of_function_11_save_of_class_4_Model_of_module_django__db__models__base( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_fields ) ).asObject() ), _python_var_f, _python_var_self ) );
                frame_guard.setLineNumber( 543 );
                {
                    PyObjectTempKeeper1 call16;
                    _python_var_loaded_fields.assign1( ( call16.assign( LOOKUP_ATTRIBUTE( _python_var_field_names.asObject(), _python_str_plain_difference ) ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), _python_var_deferred_fields.asObject() ) ) );
                }
                frame_guard.setLineNumber( 544 );
                if ( CHECK_IF_TRUE( _python_var_loaded_fields.asObject() ) )
                {
                    frame_guard.setLineNumber( 545 );
                    _python_var_update_fields.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_frozenset ), _python_var_loaded_fields.asObject() ) );
                }
            }
            }
        }
        frame_guard.setLineNumber( 547 );
        {
            PyObjectTempKeeper1 call28;
            PyObjectTempKeeper0 make_dict20;
            PyObjectTempKeeper0 make_dict22;
            PyObjectTempKeeper0 make_dict24;
            DECREASE_REFCOUNT( ( call28.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_save_base ) ), CALL_FUNCTION( call28.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict20.assign( _python_var_using.asObject() ), make_dict22.assign( _python_var_force_insert.asObject() ), make_dict24.assign( _python_var_force_update.asObject() ), MAKE_DICT4( make_dict20.asObject0(), _python_str_plain_using, make_dict22.asObject0(), _python_str_plain_force_insert, make_dict24.asObject0(), _python_str_plain_force_update, _python_var_update_fields.asObject(), _python_str_plain_update_fields ) ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_update_fields.updateLocalsDict( _python_var_using.updateLocalsDict( _python_var_force_update.updateLocalsDict( _python_var_force_insert.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_loaded_fields.updateLocalsDict( _python_var_deferred_fields.updateLocalsDict( _python_var_non_model_fields.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_field_names.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_11_save_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_11_save_of_class_4_Model_of_module_django__db__models__base );
           frame_function_11_save_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_11_save_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_force_insert = NULL;
    PyObject *_python_par_force_update = NULL;
    PyObject *_python_par_using = NULL;
    PyObject *_python_par_update_fields = NULL;
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
                PyErr_Format( PyExc_TypeError, "save() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_force_insert == key )
            {
                if (unlikely( _python_par_force_insert ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'force_insert'" );
                    goto error_exit;
                }

                _python_par_force_insert = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_force_update == key )
            {
                if (unlikely( _python_par_force_update ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'force_update'" );
                    goto error_exit;
                }

                _python_par_force_update = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_update_fields == key )
            {
                if (unlikely( _python_par_update_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'update_fields'" );
                    goto error_exit;
                }

                _python_par_update_fields = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_force_insert, key ) )
            {
                if (unlikely( _python_par_force_insert ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'force_insert'" );
                    goto error_exit;
                }

                _python_par_force_insert = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_force_update, key ) )
            {
                if (unlikely( _python_par_force_update ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'force_update'" );
                    goto error_exit;
                }

                _python_par_force_update = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_update_fields, key ) )
            {
                if (unlikely( _python_par_update_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'update_fields'" );
                    goto error_exit;
                }

                _python_par_update_fields = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "save() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 5 ))
    {
        if ( 5 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "save() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "save() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "save() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "save() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "save() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "save() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "save() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "save() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 5 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "save() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "save() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "save() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "save() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 5 ? args_given : 5;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_force_insert != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'force_insert'" );
             goto error_exit;
         }

        _python_par_force_insert = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_force_update != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'force_update'" );
             goto error_exit;
         }

        _python_par_force_update = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_update_fields != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'update_fields'" );
             goto error_exit;
         }

        _python_par_update_fields = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_force_insert == NULL )
    {
        _python_par_force_insert = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_force_insert );
    }
    if ( _python_par_force_update == NULL )
    {
        _python_par_force_update = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_force_update );
    }
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_using );
    }
    if ( _python_par_update_fields == NULL )
    {
        _python_par_update_fields = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_update_fields );
    }


    return impl_function_11_save_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_force_insert, _python_par_force_update, _python_par_using, _python_par_update_fields );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_force_insert );
    Py_XDECREF( _python_par_force_update );
    Py_XDECREF( _python_par_using );
    Py_XDECREF( _python_par_update_fields );

    return NULL;
}

static PyObject *dparse_function_11_save_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_11_save_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_save_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_11_save_of_class_4_Model_of_module_django__db__models__base( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_f,PyObjectLocalParameterVariableNoDel &python_closure_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 538 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 538 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_f.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 cmp1;
                    PyObjectTempKeeper1 isinstance5;
                    PyObjectTempKeeper1 subscr3;
                    if ( ( ( cmp1.assign( LOOKUP_ATTRIBUTE( python_closure_f.asObject(), _python_str_plain_attname ) ), SEQUENCE_CONTAINS_NOT_BOOL( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_self.asObject(), _python_str_plain___dict__ ) ).asObject() ) ) && ( isinstance5.assign( ( subscr3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___dict__ ) ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_f.asObject(), _python_str_plain_attname ) ).asObject() ) ) ), BUILTIN_ISINSTANCE_BOOL( isinstance5.asObject0(), _mvar_django__db__models__base_DeferredAttribute.asObject0() ) ) ) )
                {
                    frame_guard.setLineNumber( 538 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_f.asObject(), _python_str_plain_attname ) ).asObject() ), Py_None;
                }
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_12_save_base_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_raw, PyObject *_python_par_force_insert, PyObject *_python_par_force_update, PyObject *_python_par_using, PyObject *_python_par_update_fields )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_raw( _python_str_plain_raw, _python_par_raw );
    PyObjectLocalParameterVariableNoDel _python_var_force_insert( _python_str_plain_force_insert, _python_par_force_insert );
    PyObjectLocalParameterVariableNoDel _python_var_force_update( _python_str_plain_force_update, _python_par_force_update );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalParameterVariableNoDel _python_var_update_fields( _python_str_plain_update_fields, _python_par_update_fields );
    PyObjectLocalVariable _python_var_cls( _python_str_plain_cls );
    PyObjectLocalVariable _python_var_origin( _python_str_plain_origin );
    PyObjectLocalVariable _python_var_meta( _python_str_plain_meta );
    PyObjectLocalVariable _python_var_updated( _python_str_plain_updated );

    // Actual function code.
    static PyFrameObject *frame_function_12_save_base_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_12_save_base_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_12_save_base_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_save_base_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_12_save_base_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_12_save_base_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_ebabdadbf8365c23a83bafeff46d1e25, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_12_save_base_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_12_save_base_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 562 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper0 keeper_0;
            _python_var_using.assign1( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_using.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_router.asObject0(), _python_str_plain_db_for_write ) ), call2.assign( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject() ) ), CALL_FUNCTION( call1.asObject0(), call2.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_self.asObject(), _python_str_plain_instance ) ).asObject() ) ) ) );
        }
        frame_guard.setLineNumber( 563 );
        if ( (!( (!( ( CHECK_IF_TRUE( _python_var_force_insert.asObject() ) && ( CHECK_IF_TRUE( _python_var_force_update.asObject() ) || CHECK_IF_TRUE( _python_var_update_fields.asObject() ) ) ) )) )) )
        {
            frame_guard.setLineNumber( 563 );
            RAISE_EXCEPTION_WITH_TYPE( PyExc_AssertionError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
        }
        frame_guard.setLineNumber( 564 );
        if ( (!( ( ( _python_var_update_fields.asObject() == Py_None ) || RICH_COMPARE_BOOL_GT( PyObjectTemporary( BUILTIN_LEN( _python_var_update_fields.asObject() ) ).asObject(), _python_int_0 ) ) )) )
        {
            frame_guard.setLineNumber( 564 );
            RAISE_EXCEPTION_WITH_TYPE( PyExc_AssertionError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
        }
        {
            frame_guard.setLineNumber( 565 );
            PyObjectTemporary _python_tmp_assign_source( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) );
            _python_var_cls.assign0( _python_tmp_assign_source.asObject() );
            _python_var_origin.assign0( _python_tmp_assign_source.asObject() );
        }
        frame_guard.setLineNumber( 567 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_proxy ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 568 );
            _python_var_cls.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_concrete_model ) );
        }
        frame_guard.setLineNumber( 569 );
        _python_var_meta.assign1( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__meta ) );
        frame_guard.setLineNumber( 570 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_meta.asObject(), _python_str_plain_auto_created ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 571 );
            {
                PyObjectTempKeeper1 call14;
                PyObjectTempKeeper0 make_dict10;
                PyObjectTempKeeper0 make_dict4;
                PyObjectTempKeeper0 make_dict6;
                PyObjectTempKeeper0 make_dict8;
                DECREASE_REFCOUNT( ( call14.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_signals.asObject0(), _python_str_plain_pre_save ) ).asObject(), _python_str_plain_send ) ), CALL_FUNCTION( call14.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict4.assign( _python_var_origin.asObject() ), make_dict6.assign( _python_var_self.asObject() ), make_dict8.assign( _python_var_raw.asObject() ), make_dict10.assign( _python_var_using.asObject() ), MAKE_DICT5( make_dict4.asObject0(), _python_str_plain_sender, make_dict6.asObject0(), _python_str_plain_instance, make_dict8.asObject0(), _python_str_plain_raw, make_dict10.asObject0(), _python_str_plain_using, _python_var_update_fields.asObject(), _python_str_plain_update_fields ) ) ).asObject() ) ) );
            }
        }
        {
            frame_guard.setLineNumber( 573 );
            PyObject *_tmp_python_tmp_with_source;
            {
                PyObjectTempKeeper1 call17;
                _tmp_python_tmp_with_source = ( call17.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_transaction.asObject0(), _python_str_plain_commit_on_success_unless_managed ) ), CALL_FUNCTION( call17.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT2( _python_var_using.asObject(), _python_str_plain_using, Py_False, _python_str_plain_savepoint ) ).asObject() ) );
            }
            PyObjectTemporary _python_tmp_with_source( _tmp_python_tmp_with_source );
            PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___exit__ ) );
            PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___enter__ ) ).asObject() ) );
            PyObject *_python_tmp_indicator = Py_True;
            PythonExceptionKeeper _caught_1;


            try
            {
                try
                {
                    frame_guard.setLineNumber( 574 );
                    if ( (!( CHECK_IF_TRUE( _python_var_raw.asObject() ) )) )
                    {
                        frame_guard.setLineNumber( 575 );
                        {
                            PyObjectTempKeeper1 call20;
                            PyObjectTempKeeper0 call21;
                            PyObjectTempKeeper0 call22;
                            DECREASE_REFCOUNT( ( call20.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__save_parents ) ), call21.assign( _python_var_cls.asObject() ), call22.assign( _python_var_using.asObject() ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), call21.asObject0(), call22.asObject0(), _python_var_update_fields.asObject() ) ) );
                        }
                    }
                    frame_guard.setLineNumber( 576 );
                    {
                        PyObjectTempKeeper1 call30;
                        PyObjectTempKeeper0 make_tuple24;
                        PyObjectTempKeeper0 make_tuple25;
                        PyObjectTempKeeper0 make_tuple26;
                        PyObjectTempKeeper0 make_tuple27;
                        PyObjectTempKeeper0 make_tuple28;
                        _python_var_updated.assign1( ( call30.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__save_table ) ), CALL_FUNCTION_WITH_POSARGS( call30.asObject0(), PyObjectTemporary( ( make_tuple24.assign( _python_var_raw.asObject() ), make_tuple25.assign( _python_var_cls.asObject() ), make_tuple26.assign( _python_var_force_insert.asObject() ), make_tuple27.assign( _python_var_force_update.asObject() ), make_tuple28.assign( _python_var_using.asObject() ), MAKE_TUPLE6( make_tuple24.asObject0(), make_tuple25.asObject0(), make_tuple26.asObject0(), make_tuple27.asObject0(), make_tuple28.asObject0(), _python_var_update_fields.asObject() ) ) ).asObject() ) ) );
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

                    if ( _exception.matches( PyExc_BaseException ) )
                    {
                        frame_guard.detachFrame();
                        _python_tmp_indicator = Py_False;
                        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), _exception.getType(), _exception.getValue(), (PyObject *)_exception.getTraceback() ) ).asObject() ) )) )
                        {
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

                _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final code:
            if ( ( _python_tmp_indicator == Py_True ) )
            {
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), Py_None, Py_None, Py_None ) );
            }
            _caught_1.rethrow();
        }
        frame_guard.setLineNumber( 578 );
        {
                PyObject *tmp_identifier = _python_var_using.asObject();
                SET_ATTRIBUTE( tmp_identifier, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__state ) ).asObject(), _python_str_plain_db );
        }
        frame_guard.setLineNumber( 580 );
        SET_ATTRIBUTE( Py_False, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__state ) ).asObject(), _python_str_plain_adding );
        frame_guard.setLineNumber( 583 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_meta.asObject(), _python_str_plain_auto_created ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 584 );
            {
                PyObjectTempKeeper1 call44;
                PyObjectTempKeeper0 make_dict32;
                PyObjectTempKeeper0 make_dict34;
                PyObjectTempKeeper0 make_dict36;
                PyObjectTempKeeper0 make_dict38;
                PyObjectTempKeeper0 make_dict40;
                DECREASE_REFCOUNT( ( call44.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_signals.asObject0(), _python_str_plain_post_save ) ).asObject(), _python_str_plain_send ) ), CALL_FUNCTION( call44.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict32.assign( _python_var_origin.asObject() ), make_dict34.assign( _python_var_self.asObject() ), make_dict36.assign( UNARY_OPERATION( UNARY_NOT, _python_var_updated.asObject() ) ), make_dict38.assign( _python_var_update_fields.asObject() ), make_dict40.assign( _python_var_raw.asObject() ), MAKE_DICT6( make_dict32.asObject0(), _python_str_plain_sender, make_dict34.asObject0(), _python_str_plain_instance, make_dict36.asObject0(), _python_str_plain_created, make_dict38.asObject0(), _python_str_plain_update_fields, make_dict40.asObject0(), _python_str_plain_raw, _python_var_using.asObject(), _python_str_plain_using ) ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_update_fields.updateLocalsDict( _python_var_using.updateLocalsDict( _python_var_force_update.updateLocalsDict( _python_var_force_insert.updateLocalsDict( _python_var_raw.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_updated.updateLocalsDict( _python_var_meta.updateLocalsDict( _python_var_origin.updateLocalsDict( _python_var_cls.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_12_save_base_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_12_save_base_of_class_4_Model_of_module_django__db__models__base );
           frame_function_12_save_base_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_12_save_base_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_raw = NULL;
    PyObject *_python_par_force_insert = NULL;
    PyObject *_python_par_force_update = NULL;
    PyObject *_python_par_using = NULL;
    PyObject *_python_par_update_fields = NULL;
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
                PyErr_Format( PyExc_TypeError, "save_base() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_raw == key )
            {
                if (unlikely( _python_par_raw ))
                {
                    PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'raw'" );
                    goto error_exit;
                }

                _python_par_raw = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_force_insert == key )
            {
                if (unlikely( _python_par_force_insert ))
                {
                    PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'force_insert'" );
                    goto error_exit;
                }

                _python_par_force_insert = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_force_update == key )
            {
                if (unlikely( _python_par_force_update ))
                {
                    PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'force_update'" );
                    goto error_exit;
                }

                _python_par_force_update = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_update_fields == key )
            {
                if (unlikely( _python_par_update_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'update_fields'" );
                    goto error_exit;
                }

                _python_par_update_fields = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_raw, key ) )
            {
                if (unlikely( _python_par_raw ))
                {
                    PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'raw'" );
                    goto error_exit;
                }

                _python_par_raw = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_force_insert, key ) )
            {
                if (unlikely( _python_par_force_insert ))
                {
                    PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'force_insert'" );
                    goto error_exit;
                }

                _python_par_force_insert = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_force_update, key ) )
            {
                if (unlikely( _python_par_force_update ))
                {
                    PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'force_update'" );
                    goto error_exit;
                }

                _python_par_force_update = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_update_fields, key ) )
            {
                if (unlikely( _python_par_update_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'update_fields'" );
                    goto error_exit;
                }

                _python_par_update_fields = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "save_base() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "save_base() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "save_base() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "save_base() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "save_base() takes exactly %d arguments (%zd given)", 6, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 6 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "save_base() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "save_base() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "save_base() takes %d positional arguments but %zd were given", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "save_base() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 6 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "save_base() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "save_base() takes exactly %d non-keyword arguments (%zd given)", 6, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 6 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "save_base() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "save_base() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_raw != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'raw'" );
             goto error_exit;
         }

        _python_par_raw = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_force_insert != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'force_insert'" );
             goto error_exit;
         }

        _python_par_force_insert = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_force_update != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'force_update'" );
             goto error_exit;
         }

        _python_par_force_update = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_update_fields != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "save_base() got multiple values for keyword argument 'update_fields'" );
             goto error_exit;
         }

        _python_par_update_fields = INCREASE_REFCOUNT( args[ 5 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_raw == NULL )
    {
        _python_par_raw = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_raw );
    }
    if ( _python_par_force_insert == NULL )
    {
        _python_par_force_insert = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_force_insert );
    }
    if ( _python_par_force_update == NULL )
    {
        _python_par_force_update = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_force_update );
    }
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_using );
    }
    if ( _python_par_update_fields == NULL )
    {
        _python_par_update_fields = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 4 ) );
        assertObject( _python_par_update_fields );
    }


    return impl_function_12_save_base_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_raw, _python_par_force_insert, _python_par_force_update, _python_par_using, _python_par_update_fields );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_raw );
    Py_XDECREF( _python_par_force_insert );
    Py_XDECREF( _python_par_force_update );
    Py_XDECREF( _python_par_using );
    Py_XDECREF( _python_par_update_fields );

    return NULL;
}

static PyObject *dparse_function_12_save_base_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_12_save_base_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_save_base_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_cls, PyObject *_python_par_using, PyObject *_python_par_update_fields )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalParameterVariableNoDel _python_var_update_fields( _python_str_plain_update_fields, _python_par_update_fields );
    PyObjectLocalVariable _python_var_meta( _python_str_plain_meta );
    PyObjectLocalVariable _python_var_parent( _python_str_plain_parent );
    PyObjectLocalVariable _python_var_field( _python_str_plain_field );
    PyObjectLocalVariable _python_var_cache_name( _python_str_plain_cache_name );

    // Actual function code.
    static PyFrameObject *frame_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13__save_parents_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_a9ebc4915150ecd21712c0223e7b6d1c, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 593 );
        _python_var_meta.assign1( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__meta ) );
        {
            frame_guard.setLineNumber( 594 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_meta.asObject(), _python_str_plain_parents ) ).asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 594 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 594 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_parent.assign0( _python_tmp_element_1.asObject() );
                        _python_var_field.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 596 );
                {
                    PyObjectTempKeeper0 getattr10;
                    PyObjectTempKeeper0 getattr7;
                    if ( ( CHECK_IF_TRUE( _python_var_field.asObject() ) && ( ( PyObjectTemporary( ( getattr7.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr7.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_parent.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_pk ) ).asObject(), _python_str_plain_attname ) ).asObject(), NULL ) ) ).asObject() == Py_None ) && ( PyObjectTemporary( ( getattr10.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr10.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject(), NULL ) ) ).asObject() != Py_None ) ) ) )
                {
                    frame_guard.setLineNumber( 598 );
                    {
                        PyObjectTempKeeper0 getattr1;
                        PyObjectTempKeeper0 setattr4;
                        PyObjectTempKeeper1 setattr5;
                        ( ( setattr4.assign( _python_var_self.asObject() ), setattr5.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_parent.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_pk ) ).asObject(), _python_str_plain_attname ) ), BUILTIN_SETATTR( setattr4.asObject0(), setattr5.asObject0(), PyObjectTemporary( ( getattr1.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject(), NULL ) ) ).asObject() ) ), Py_None );
                    }
                }
                }
                frame_guard.setLineNumber( 599 );
                {
                    PyObjectTempKeeper1 call19;
                    PyObjectTempKeeper0 make_dict13;
                    PyObjectTempKeeper0 make_dict15;
                    DECREASE_REFCOUNT( ( call19.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__save_parents ) ), CALL_FUNCTION( call19.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict13.assign( _python_var_parent.asObject() ), make_dict15.assign( _python_var_using.asObject() ), MAKE_DICT3( make_dict13.asObject0(), _python_str_plain_cls, make_dict15.asObject0(), _python_str_plain_using, _python_var_update_fields.asObject(), _python_str_plain_update_fields ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 600 );
                {
                    PyObjectTempKeeper1 call28;
                    PyObjectTempKeeper0 make_dict22;
                    PyObjectTempKeeper0 make_dict24;
                    DECREASE_REFCOUNT( ( call28.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__save_table ) ), CALL_FUNCTION( call28.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict22.assign( _python_var_parent.asObject() ), make_dict24.assign( _python_var_using.asObject() ), MAKE_DICT3( make_dict22.asObject0(), _python_str_plain_cls, make_dict24.asObject0(), _python_str_plain_using, _python_var_update_fields.asObject(), _python_str_plain_update_fields ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 602 );
                if ( CHECK_IF_TRUE( _python_var_field.asObject() ) )
                {
                    frame_guard.setLineNumber( 603 );
                    {
                        PyObjectTempKeeper1 call31;
                        PyObjectTempKeeper0 setattr33;
                        PyObjectTempKeeper1 setattr34;
                        ( ( setattr33.assign( _python_var_self.asObject() ), setattr34.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ), BUILTIN_SETATTR( setattr33.asObject0(), setattr34.asObject0(), PyObjectTemporary( ( call31.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get_pk_val ) ), CALL_FUNCTION_WITH_ARGS( call31.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_parent.asObject(), _python_str_plain__meta ) ).asObject() ) ) ).asObject() ) ), Py_None );
                    }
                    frame_guard.setLineNumber( 609 );
                    _python_var_cache_name.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_get_cache_name ) ).asObject() ) );
                    frame_guard.setLineNumber( 610 );
                    {
                        PyObjectTempKeeper0 hasattr39;
                        if ( ( hasattr39.assign( _python_var_self.asObject() ), HAS_ATTRIBUTE( hasattr39.asObject0(), _python_var_cache_name.asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 611 );
                        {
                            PyObjectTempKeeper0 call37;
                            DECREASE_REFCOUNT( ( call37.assign( _python_var_self.asObject() ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_delattr ), call37.asObject0(), _python_var_cache_name.asObject() ) ) );
                        }
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
        frame_guard.getFrame0()->f_locals = _python_var_update_fields.updateLocalsDict( _python_var_using.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_cache_name.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_parent.updateLocalsDict( _python_var_meta.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base );
           frame_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_using = NULL;
    PyObject *_python_par_update_fields = NULL;
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
                PyErr_Format( PyExc_TypeError, "_save_parents() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_save_parents() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_cls == key )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_parents() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_parents() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_update_fields == key )
            {
                if (unlikely( _python_par_update_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_parents() got multiple values for keyword argument 'update_fields'" );
                    goto error_exit;
                }

                _python_par_update_fields = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_parents() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cls, key ) )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_parents() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_parents() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_update_fields, key ) )
            {
                if (unlikely( _python_par_update_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_parents() got multiple values for keyword argument 'update_fields'" );
                    goto error_exit;
                }

                _python_par_update_fields = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_save_parents() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 4 ))
    {
        if ( 4 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_save_parents() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_save_parents() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_save_parents() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_save_parents() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "_save_parents() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_save_parents() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "_save_parents() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_save_parents() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 4 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "_save_parents() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_save_parents() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "_save_parents() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_save_parents() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_save_parents() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_cls != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_save_parents() got multiple values for keyword argument 'cls'" );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_save_parents() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_update_fields != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_save_parents() got multiple values for keyword argument 'update_fields'" );
             goto error_exit;
         }

        _python_par_update_fields = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_cls, _python_par_using, _python_par_update_fields );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_using );
    Py_XDECREF( _python_par_update_fields );

    return NULL;
}

static PyObject *dparse_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_raw, PyObject *_python_par_cls, PyObject *_python_par_force_insert, PyObject *_python_par_force_update, PyObject *_python_par_using, PyObject *_python_par_update_fields )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_raw( _python_str_plain_raw, _python_par_raw );
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );
    PyObjectLocalParameterVariableNoDel _python_var_force_insert( _python_str_plain_force_insert, _python_par_force_insert );
    PyObjectLocalParameterVariableNoDel _python_var_force_update( _python_str_plain_force_update, _python_par_force_update );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalParameterVariableNoDel _python_var_update_fields( _python_str_plain_update_fields, _python_par_update_fields );
    PyObjectLocalVariable _python_var_meta( _python_str_plain_meta );
    PyObjectLocalVariable _python_var_non_pks( _python_str_plain_non_pks );
    PyObjectLocalVariable _python_var_pk_val( _python_str_plain_pk_val );
    PyObjectLocalVariable _python_var_pk_set( _python_str_plain_pk_set );
    PyObjectLocalVariable _python_var_updated( _python_str_plain_updated );
    PyObjectLocalVariable _python_var_base_qs( _python_str_plain_base_qs );
    PyObjectLocalVariable _python_var_values( _python_str_plain_values );
    PyObjectLocalVariable _python_var_field( _python_str_plain_field );
    PyObjectLocalVariable _python_var_order_value( _python_str_plain_order_value );
    PyObjectLocalVariable _python_var_fields( _python_str_plain_fields );
    PyObjectLocalVariable _python_var_update_pk( _python_str_plain_update_pk );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );

    // Actual function code.
    static PyFrameObject *frame_function_14__save_table_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_14__save_table_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_14__save_table_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14__save_table_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_14__save_table_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_14__save_table_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_064a4c8a0edcd280810232392e5ca15f, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_14__save_table_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_14__save_table_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 619 );
        _python_var_meta.assign1( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__meta ) );
        frame_guard.setLineNumber( 620 );
        _python_var_non_pks.assign1( impl_listcontr_1_of_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_meta.asObject(), _python_str_plain_local_concrete_fields ) ).asObject() ), _python_var_f ) );
        frame_guard.setLineNumber( 622 );
        if ( CHECK_IF_TRUE( _python_var_update_fields.asObject() ) )
        {
            frame_guard.setLineNumber( 623 );
            _python_var_non_pks.assign1( impl_listcontr_2_of_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( MAKE_ITERATOR( _python_var_non_pks.asObject() ), _python_var_f, _python_var_update_fields ) );
        }
        frame_guard.setLineNumber( 626 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_pk_val.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get_pk_val ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_meta.asObject() ) ) );
        }
        frame_guard.setLineNumber( 627 );
        _python_var_pk_set.assign0( BOOL_FROM( ( _python_var_pk_val.asObject() != Py_None ) ) );
        frame_guard.setLineNumber( 628 );
        if ( ( (!( CHECK_IF_TRUE( _python_var_pk_set.asObject() ) )) && ( CHECK_IF_TRUE( _python_var_force_update.asObject() ) || CHECK_IF_TRUE( _python_var_update_fields.asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 629 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_f6b03ed5ed3c7895877274b19702cba0 ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        _python_var_updated.assign0( Py_False );
        frame_guard.setLineNumber( 632 );
        if ( ( CHECK_IF_TRUE( _python_var_pk_set.asObject() ) && (!( CHECK_IF_TRUE( _python_var_force_insert.asObject() ) )) ) )
        {
            frame_guard.setLineNumber( 633 );
            {
                PyObjectTempKeeper1 call3;
                _python_var_base_qs.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__base_manager ) ).asObject(), _python_str_plain_using ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_using.asObject() ) ) );
            }
            frame_guard.setLineNumber( 634 );
            _python_var_values.assign1( impl_listcontr_3_of_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( MAKE_ITERATOR( _python_var_non_pks.asObject() ), _python_var_f, _python_var_raw, _python_var_self ) );
            frame_guard.setLineNumber( 636 );
            {
                PyObjectTempKeeper1 call5;
                PyObjectTempKeeper0 call6;
                PyObjectTempKeeper0 call7;
                PyObjectTempKeeper0 call8;
                PyObjectTempKeeper0 call9;
                _python_var_updated.assign1( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__do_update ) ), call6.assign( _python_var_base_qs.asObject() ), call7.assign( _python_var_using.asObject() ), call8.assign( _python_var_pk_val.asObject() ), call9.assign( _python_var_values.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), call7.asObject0(), call8.asObject0(), call9.asObject0(), _python_var_update_fields.asObject() ) ) );
            }
            frame_guard.setLineNumber( 637 );
            if ( ( CHECK_IF_TRUE( _python_var_force_update.asObject() ) && (!( CHECK_IF_TRUE( _python_var_updated.asObject() ) )) ) )
            {
                frame_guard.setLineNumber( 638 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__db__models__base_DatabaseError.asObject0(), _python_unicode_digest_ae745ca653677b63c2537572b5a6cae9 ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
            frame_guard.setLineNumber( 639 );
            if ( ( CHECK_IF_TRUE( _python_var_update_fields.asObject() ) && (!( CHECK_IF_TRUE( _python_var_updated.asObject() ) )) ) )
            {
                frame_guard.setLineNumber( 640 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__db__models__base_DatabaseError.asObject0(), _python_unicode_digest_17658d9d3ef682b5adb86e2f9335f154 ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
        }
        frame_guard.setLineNumber( 641 );
        if ( (!( CHECK_IF_TRUE( _python_var_updated.asObject() ) )) )
        {
            frame_guard.setLineNumber( 642 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_meta.asObject(), _python_str_plain_order_with_respect_to ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 645 );
                _python_var_field.assign1( LOOKUP_ATTRIBUTE( _python_var_meta.asObject(), _python_str_plain_order_with_respect_to ) );
                frame_guard.setLineNumber( 646 );
                {
                    PyObjectTempKeeper1 call11;
                    PyObjectTempKeeper1 call_tmp18;
                    PyObjectTempKeeper0 getattr13;
                    PyObjectTempKeeper1 make_dict16;
                    _python_var_order_value.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call_tmp18.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call11.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__base_manager ) ).asObject(), _python_str_plain_using ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_filter ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp18.asObject(), ( make_dict16.assign( ( getattr13.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr13.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject(), NULL ) ) ), MAKE_DICT1( make_dict16.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ).asObject() ) ) ) ) ).asObject(), _python_str_plain_count ) ).asObject() ) );
                }
                frame_guard.setLineNumber( 648 );
                {
                        PyObject *tmp_identifier = _python_var_order_value.asObject();
                        SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__order );
                }
            }
            frame_guard.setLineNumber( 650 );
            _python_var_fields.assign1( LOOKUP_ATTRIBUTE( _python_var_meta.asObject(), _python_str_plain_local_concrete_fields ) );
            frame_guard.setLineNumber( 651 );
            if ( (!( CHECK_IF_TRUE( _python_var_pk_set.asObject() ) )) )
            {
                frame_guard.setLineNumber( 652 );
                _python_var_fields.assign1( impl_listcontr_4_of_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( MAKE_ITERATOR( _python_var_fields.asObject() ), _python_var_f ) );
            }
            frame_guard.setLineNumber( 654 );
            {
                PyObjectTempKeeper1 keeper_5;
                _python_var_update_pk.assign0( TO_BOOL( ( CHECK_IF_TRUE( keeper_5.assign( LOOKUP_ATTRIBUTE( _python_var_meta.asObject(), _python_str_plain_has_auto_field ) ) ) ? UNARY_OPERATION( UNARY_NOT, _python_var_pk_set.asObject() ) : PyObjectTemporary( keeper_5.asObject() ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 655 );
            {
                PyObjectTempKeeper1 call20;
                PyObjectTempKeeper1 call21;
                PyObjectTempKeeper0 call22;
                PyObjectTempKeeper0 call23;
                PyObjectTempKeeper0 call24;
                _python_var_result.assign1( ( call20.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__do_insert ) ), call21.assign( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__base_manager ) ), call22.assign( _python_var_using.asObject() ), call23.assign( _python_var_fields.asObject() ), call24.assign( _python_var_update_pk.asObject() ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), call21.asObject0(), call22.asObject0(), call23.asObject0(), call24.asObject0(), _python_var_raw.asObject() ) ) );
            }
            frame_guard.setLineNumber( 656 );
            if ( CHECK_IF_TRUE( _python_var_update_pk.asObject() ) )
            {
                frame_guard.setLineNumber( 657 );
                {
                    PyObjectTempKeeper0 setattr26;
                    PyObjectTempKeeper1 setattr27;
                    ( ( setattr26.assign( _python_var_self.asObject() ), setattr27.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_meta.asObject(), _python_str_plain_pk ) ).asObject(), _python_str_plain_attname ) ), BUILTIN_SETATTR( setattr26.asObject0(), setattr27.asObject0(), _python_var_result.asObject() ) ), Py_None );
                }
            }
        }
        frame_guard.setLineNumber( 658 );
        return _python_var_updated.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_update_fields.updateLocalsDict( _python_var_using.updateLocalsDict( _python_var_force_update.updateLocalsDict( _python_var_force_insert.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_raw.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_result.updateLocalsDict( _python_var_update_pk.updateLocalsDict( _python_var_fields.updateLocalsDict( _python_var_order_value.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_values.updateLocalsDict( _python_var_base_qs.updateLocalsDict( _python_var_updated.updateLocalsDict( _python_var_pk_set.updateLocalsDict( _python_var_pk_val.updateLocalsDict( _python_var_non_pks.updateLocalsDict( _python_var_meta.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_14__save_table_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_14__save_table_of_class_4_Model_of_module_django__db__models__base );
           frame_function_14__save_table_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_raw = NULL;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_force_insert = NULL;
    PyObject *_python_par_force_update = NULL;
    PyObject *_python_par_using = NULL;
    PyObject *_python_par_update_fields = NULL;
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
                PyErr_Format( PyExc_TypeError, "_save_table() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_raw == key )
            {
                if (unlikely( _python_par_raw ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'raw'" );
                    goto error_exit;
                }

                _python_par_raw = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_cls == key )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_force_insert == key )
            {
                if (unlikely( _python_par_force_insert ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'force_insert'" );
                    goto error_exit;
                }

                _python_par_force_insert = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_force_update == key )
            {
                if (unlikely( _python_par_force_update ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'force_update'" );
                    goto error_exit;
                }

                _python_par_force_update = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_update_fields == key )
            {
                if (unlikely( _python_par_update_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'update_fields'" );
                    goto error_exit;
                }

                _python_par_update_fields = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_raw, key ) )
            {
                if (unlikely( _python_par_raw ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'raw'" );
                    goto error_exit;
                }

                _python_par_raw = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cls, key ) )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_force_insert, key ) )
            {
                if (unlikely( _python_par_force_insert ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'force_insert'" );
                    goto error_exit;
                }

                _python_par_force_insert = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_force_update, key ) )
            {
                if (unlikely( _python_par_force_update ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'force_update'" );
                    goto error_exit;
                }

                _python_par_force_update = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_update_fields, key ) )
            {
                if (unlikely( _python_par_update_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'update_fields'" );
                    goto error_exit;
                }

                _python_par_update_fields = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_save_table() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 7 ))
    {
        if ( 7 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_save_table() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_save_table() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_save_table() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_save_table() takes exactly %d arguments (%zd given)", 7, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 7 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_save_table() takes exactly %d positional arguments (%zd given)", 7, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_save_table() takes at most %d positional arguments (%zd given)", 7, args_given + kw_only_found );
            }
#else
            if ( 7 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_save_table() takes %d positional arguments but %zd were given", 7, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_save_table() takes at most %d positional arguments (%zd given)", 7, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 7 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "_save_table() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_save_table() takes exactly %d non-keyword arguments (%zd given)", 7, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 7 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_save_table() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 7 ? args_given : 7;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_raw != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'raw'" );
             goto error_exit;
         }

        _python_par_raw = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_cls != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'cls'" );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_force_insert != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'force_insert'" );
             goto error_exit;
         }

        _python_par_force_insert = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_force_update != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'force_update'" );
             goto error_exit;
         }

        _python_par_force_update = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 5 ] );
    }
    if (likely( 6 < args_usable_count ))
    {
         if (unlikely( _python_par_update_fields != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_save_table() got multiple values for keyword argument 'update_fields'" );
             goto error_exit;
         }

        _python_par_update_fields = INCREASE_REFCOUNT( args[ 6 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_raw == NULL )
    {
        _python_par_raw = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_raw );
    }
    if ( _python_par_cls == NULL )
    {
        _python_par_cls = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_cls );
    }
    if ( _python_par_force_insert == NULL )
    {
        _python_par_force_insert = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_force_insert );
    }
    if ( _python_par_force_update == NULL )
    {
        _python_par_force_update = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_force_update );
    }
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 4 ) );
        assertObject( _python_par_using );
    }
    if ( _python_par_update_fields == NULL )
    {
        _python_par_update_fields = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 5 ) );
        assertObject( _python_par_update_fields );
    }


    return impl_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_raw, _python_par_cls, _python_par_force_insert, _python_par_force_update, _python_par_using, _python_par_update_fields );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_raw );
    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_force_insert );
    Py_XDECREF( _python_par_force_update );
    Py_XDECREF( _python_par_using );
    Py_XDECREF( _python_par_update_fields );

    return NULL;
}

static PyObject *dparse_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 7)
    {
        return impl_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_f )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 620 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 620 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_f.assign0( _python_tmp_iter_value.asObject() );
                if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_f.asObject(), _python_str_plain_primary_key ) ).asObject() ) )) )
                {
                    frame_guard.setLineNumber( 620 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_f.asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_f,PyObjectLocalParameterVariableNoDel &python_closure_update_fields )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 623 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 623 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_f.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 cmp1;
                    PyObjectTempKeeper1 cmp3;
                    if ( ( ( cmp1.assign( LOOKUP_ATTRIBUTE( python_closure_f.asObject(), _python_str_plain_name ) ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), python_closure_update_fields.asObject() ) ) || ( cmp3.assign( LOOKUP_ATTRIBUTE( python_closure_f.asObject(), _python_str_plain_attname ) ), SEQUENCE_CONTAINS_BOOL( cmp3.asObject0(), python_closure_update_fields.asObject() ) ) ) )
                {
                    frame_guard.setLineNumber( 623 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_f.asObject() ), Py_None;
                }
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_3_of_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_f,PyObjectLocalParameterVariableNoDel &python_closure_raw,PyObjectLocalParameterVariableNoDel &python_closure_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 634 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 634 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_f.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 call4;
                    PyObjectTempKeeper0 getattr1;
                    PyObjectTempKeeper0 make_tuple7;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( make_tuple7.assign( python_closure_f.asObject() ), MAKE_TUPLE3( make_tuple7.asObject0(), Py_None, PyObjectTemporary( ( CHECK_IF_TRUE( python_closure_raw.asObject() ) ? ( getattr1.assign( python_closure_self.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_f.asObject(), _python_str_plain_attname ) ).asObject(), NULL ) ) : ( call4.assign( LOOKUP_ATTRIBUTE( python_closure_f.asObject(), _python_str_plain_pre_save ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), python_closure_self.asObject(), Py_False ) ) ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_4_of_function_14__save_table_of_class_4_Model_of_module_django__db__models__base( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_f )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 652 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 652 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_f.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 isinstance1;
                    if ( (!( ( isinstance1.assign( python_closure_f.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), _mvar_django__db__models__base_AutoField.asObject0() ) ) )) )
                {
                    frame_guard.setLineNumber( 652 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_f.asObject() ), Py_None;
                }
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_15__do_update_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_base_qs, PyObject *_python_par_using, PyObject *_python_par_pk_val, PyObject *_python_par_values, PyObject *_python_par_update_fields )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_base_qs( _python_str_plain_base_qs, _python_par_base_qs );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalParameterVariableNoDel _python_var_pk_val( _python_str_plain_pk_val, _python_par_pk_val );
    PyObjectLocalParameterVariableNoDel _python_var_values( _python_str_plain_values, _python_par_values );
    PyObjectLocalParameterVariableNoDel _python_var_update_fields( _python_str_plain_update_fields, _python_par_update_fields );

    // Actual function code.
    static PyFrameObject *frame_function_15__do_update_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_15__do_update_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_15__do_update_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15__do_update_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_15__do_update_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_15__do_update_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_edac24f63703f95520e109d0157cff00, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_15__do_update_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_15__do_update_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 666 );
        if ( (!( CHECK_IF_TRUE( _python_var_values.asObject() ) )) )
        {
            frame_guard.setLineNumber( 672 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 keeper_0;
                return ( CHECK_IF_TRUE( keeper_0.assign( BOOL_FROM( ( _python_var_update_fields.asObject() != Py_None ) ) ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_base_qs.asObject(), _python_str_plain_filter ) ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_pk_val.asObject(), _python_str_plain_pk ) ).asObject() ) ) ).asObject(), _python_str_plain_exists ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 674 );
            {
                PyObjectTempKeeper1 call4;
                PyObjectTempKeeper1 call7;
                return RICH_COMPARE_GT( PyObjectTemporary( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_base_qs.asObject(), _python_str_plain_filter ) ), CALL_FUNCTION( call4.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_pk_val.asObject(), _python_str_plain_pk ) ).asObject() ) ) ).asObject(), _python_str_plain__update ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_values.asObject() ) ) ).asObject(), _python_int_0 );
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
        frame_guard.getFrame0()->f_locals = _python_var_update_fields.updateLocalsDict( _python_var_values.updateLocalsDict( _python_var_pk_val.updateLocalsDict( _python_var_using.updateLocalsDict( _python_var_base_qs.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_15__do_update_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_15__do_update_of_class_4_Model_of_module_django__db__models__base );
           frame_function_15__do_update_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_15__do_update_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_base_qs = NULL;
    PyObject *_python_par_using = NULL;
    PyObject *_python_par_pk_val = NULL;
    PyObject *_python_par_values = NULL;
    PyObject *_python_par_update_fields = NULL;
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
                PyErr_Format( PyExc_TypeError, "_do_update() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_base_qs == key )
            {
                if (unlikely( _python_par_base_qs ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'base_qs'" );
                    goto error_exit;
                }

                _python_par_base_qs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_pk_val == key )
            {
                if (unlikely( _python_par_pk_val ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'pk_val'" );
                    goto error_exit;
                }

                _python_par_pk_val = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_values == key )
            {
                if (unlikely( _python_par_values ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'values'" );
                    goto error_exit;
                }

                _python_par_values = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_update_fields == key )
            {
                if (unlikely( _python_par_update_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'update_fields'" );
                    goto error_exit;
                }

                _python_par_update_fields = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_base_qs, key ) )
            {
                if (unlikely( _python_par_base_qs ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'base_qs'" );
                    goto error_exit;
                }

                _python_par_base_qs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_pk_val, key ) )
            {
                if (unlikely( _python_par_pk_val ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'pk_val'" );
                    goto error_exit;
                }

                _python_par_pk_val = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_values, key ) )
            {
                if (unlikely( _python_par_values ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'values'" );
                    goto error_exit;
                }

                _python_par_values = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_update_fields, key ) )
            {
                if (unlikely( _python_par_update_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'update_fields'" );
                    goto error_exit;
                }

                _python_par_update_fields = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_do_update() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_do_update() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_do_update() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_do_update() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_do_update() takes exactly %d arguments (%zd given)", 6, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 6 == 6 )
            {
                PyErr_Format( PyExc_TypeError, "_do_update() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_do_update() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 6 )
            {
                PyErr_Format( PyExc_TypeError, "_do_update() takes %d positional arguments but %zd were given", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_do_update() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_do_update() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_do_update() takes exactly %d non-keyword arguments (%zd given)", 6, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 6 == 6 )
                {
                    PyErr_Format( PyExc_TypeError, "_do_update() takes exactly %d arguments (%zd given)", 6, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_do_update() takes at least %d arguments (%zd given)", 6, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_base_qs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'base_qs'" );
             goto error_exit;
         }

        _python_par_base_qs = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_pk_val != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'pk_val'" );
             goto error_exit;
         }

        _python_par_pk_val = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_values != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'values'" );
             goto error_exit;
         }

        _python_par_values = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_update_fields != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_do_update() got multiple values for keyword argument 'update_fields'" );
             goto error_exit;
         }

        _python_par_update_fields = INCREASE_REFCOUNT( args[ 5 ] );
    }


    return impl_function_15__do_update_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_base_qs, _python_par_using, _python_par_pk_val, _python_par_values, _python_par_update_fields );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_base_qs );
    Py_XDECREF( _python_par_using );
    Py_XDECREF( _python_par_pk_val );
    Py_XDECREF( _python_par_values );
    Py_XDECREF( _python_par_update_fields );

    return NULL;
}

static PyObject *dparse_function_15__do_update_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_15__do_update_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15__do_update_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_manager, PyObject *_python_par_using, PyObject *_python_par_fields, PyObject *_python_par_update_pk, PyObject *_python_par_raw )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_manager( _python_str_plain_manager, _python_par_manager );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalParameterVariableNoDel _python_var_fields( _python_str_plain_fields, _python_par_fields );
    PyObjectLocalParameterVariableNoDel _python_var_update_pk( _python_str_plain_update_pk, _python_par_update_pk );
    PyObjectLocalParameterVariableNoDel _python_var_raw( _python_str_plain_raw, _python_par_raw );

    // Actual function code.
    static PyFrameObject *frame_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16__do_insert_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_6a27cc28beb3957bd7b6b70bbef9047a, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 681 );
        {
            PyObjectTempKeeper1 call10;
            PyObjectTempKeeper1 call9;
            PyObjectTempKeeper0 make_dict1;
            PyObjectTempKeeper0 make_dict3;
            PyObjectTempKeeper0 make_dict5;
            return ( call9.assign( LOOKUP_ATTRIBUTE( _python_var_manager.asObject(), _python_str_plain__insert ) ), call10.assign( MAKE_TUPLE1( PyObjectTemporary( MAKE_LIST1( _python_var_self.asObject1() ) ).asObject() ) ), CALL_FUNCTION( call9.asObject0(), call10.asObject0(), PyObjectTemporary( ( make_dict1.assign( _python_var_fields.asObject() ), make_dict3.assign( _python_var_update_pk.asObject() ), make_dict5.assign( _python_var_using.asObject() ), MAKE_DICT4( make_dict1.asObject0(), _python_str_plain_fields, make_dict3.asObject0(), _python_str_plain_return_id, make_dict5.asObject0(), _python_str_plain_using, _python_var_raw.asObject(), _python_str_plain_raw ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_raw.updateLocalsDict( _python_var_update_pk.updateLocalsDict( _python_var_fields.updateLocalsDict( _python_var_using.updateLocalsDict( _python_var_manager.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base );
           frame_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_manager = NULL;
    PyObject *_python_par_using = NULL;
    PyObject *_python_par_fields = NULL;
    PyObject *_python_par_update_pk = NULL;
    PyObject *_python_par_raw = NULL;
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
                PyErr_Format( PyExc_TypeError, "_do_insert() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'manager'" );
                    goto error_exit;
                }

                _python_par_manager = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_fields == key )
            {
                if (unlikely( _python_par_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'fields'" );
                    goto error_exit;
                }

                _python_par_fields = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_update_pk == key )
            {
                if (unlikely( _python_par_update_pk ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'update_pk'" );
                    goto error_exit;
                }

                _python_par_update_pk = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_raw == key )
            {
                if (unlikely( _python_par_raw ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'raw'" );
                    goto error_exit;
                }

                _python_par_raw = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'manager'" );
                    goto error_exit;
                }

                _python_par_manager = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_fields, key ) )
            {
                if (unlikely( _python_par_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'fields'" );
                    goto error_exit;
                }

                _python_par_fields = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_update_pk, key ) )
            {
                if (unlikely( _python_par_update_pk ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'update_pk'" );
                    goto error_exit;
                }

                _python_par_update_pk = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_raw, key ) )
            {
                if (unlikely( _python_par_raw ))
                {
                    PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'raw'" );
                    goto error_exit;
                }

                _python_par_raw = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_do_insert() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_do_insert() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_do_insert() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_do_insert() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_do_insert() takes exactly %d arguments (%zd given)", 6, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 6 == 6 )
            {
                PyErr_Format( PyExc_TypeError, "_do_insert() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_do_insert() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 6 )
            {
                PyErr_Format( PyExc_TypeError, "_do_insert() takes %d positional arguments but %zd were given", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_do_insert() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_do_insert() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_do_insert() takes exactly %d non-keyword arguments (%zd given)", 6, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 6 == 6 )
                {
                    PyErr_Format( PyExc_TypeError, "_do_insert() takes exactly %d arguments (%zd given)", 6, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_do_insert() takes at least %d arguments (%zd given)", 6, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_manager != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'manager'" );
             goto error_exit;
         }

        _python_par_manager = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_fields != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'fields'" );
             goto error_exit;
         }

        _python_par_fields = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_update_pk != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'update_pk'" );
             goto error_exit;
         }

        _python_par_update_pk = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_raw != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_do_insert() got multiple values for keyword argument 'raw'" );
             goto error_exit;
         }

        _python_par_raw = INCREASE_REFCOUNT( args[ 5 ] );
    }


    return impl_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_manager, _python_par_using, _python_par_fields, _python_par_update_pk, _python_par_raw );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_manager );
    Py_XDECREF( _python_par_using );
    Py_XDECREF( _python_par_fields );
    Py_XDECREF( _python_par_update_pk );
    Py_XDECREF( _python_par_raw );

    return NULL;
}

static PyObject *dparse_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_delete_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalVariable _python_var_collector( _python_str_plain_collector );

    // Actual function code.
    static PyFrameObject *frame_function_17_delete_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_17_delete_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_17_delete_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_17_delete_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_17_delete_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_17_delete_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_4be0f6e04b658818a7f42f9c6e771783, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_17_delete_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_17_delete_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 685 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper0 keeper_0;
            _python_var_using.assign1( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_using.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_router.asObject0(), _python_str_plain_db_for_write ) ), call2.assign( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject() ) ), CALL_FUNCTION( call1.asObject0(), call2.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_self.asObject(), _python_str_plain_instance ) ).asObject() ) ) ) );
        }
        frame_guard.setLineNumber( 686 );
        if ( ( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get_pk_val ) ).asObject() ) ).asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 686 );
            {
                PyObjectTempKeeper1 make_tuple4;
                {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_b8991ce012c4bc0f3a1ad5e31e49cd30, PyObjectTemporary( ( make_tuple4.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ), MAKE_TUPLE2( make_tuple4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_pk ) ).asObject(), _python_str_plain_attname ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        frame_guard.setLineNumber( 688 );
        {
            PyObjectTempKeeper0 call6;
            _python_var_collector.assign1( ( call6.assign( _mvar_django__db__models__base_Collector.asObject0() ), CALL_FUNCTION( call6.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 689 );
        {
            PyObjectTempKeeper1 call9;
            DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( _python_var_collector.asObject(), _python_str_plain_collect ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( MAKE_LIST1( _python_var_self.asObject1() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 690 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_collector.asObject(), _python_str_plain_delete ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_collector.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_17_delete_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_17_delete_of_class_4_Model_of_module_django__db__models__base );
           frame_function_17_delete_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_17_delete_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "delete() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'using'" );
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
                    PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'using'" );
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
                   "delete() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "delete() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "delete() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "delete() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "delete() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "delete() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "delete() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "delete() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "delete() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "delete() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "delete() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "delete() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "delete() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_17_delete_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_17_delete_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_17_delete_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17_delete_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_field )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_field( _python_str_plain_field, _python_par_field );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_e5696930ffb63975670982d818d2330f, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 695 );
        {
            PyObjectTempKeeper0 getattr1;
            _python_var_value.assign1( ( getattr1.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject(), NULL ) ) );
        }
        frame_guard.setLineNumber( 696 );
        {
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper0 call7;
            return ( call7.assign( _mvar_django__db__models__base_force_text.asObject0() ), CALL_FUNCTION( call7.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( TO_DICT( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_flatchoices ) ).asObject(), NULL ) ).asObject(), _python_str_plain_get ) ), call5.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), _python_var_value.asObject() ) ) ).asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_e3f0fef39fbf6dbec750d2896d62ce03 ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_field.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base );
           frame_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_field = NULL;
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
                PyErr_Format( PyExc_TypeError, "_get_FIELD_display() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_get_FIELD_display() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_field == key )
            {
                if (unlikely( _python_par_field ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_FIELD_display() got multiple values for keyword argument 'field'" );
                    goto error_exit;
                }

                _python_par_field = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_FIELD_display() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_field, key ) )
            {
                if (unlikely( _python_par_field ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_FIELD_display() got multiple values for keyword argument 'field'" );
                    goto error_exit;
                }

                _python_par_field = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_get_FIELD_display() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_get_FIELD_display() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_get_FIELD_display() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_get_FIELD_display() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_FIELD_display() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_get_FIELD_display() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_FIELD_display() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_get_FIELD_display() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_FIELD_display() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_get_FIELD_display() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_get_FIELD_display() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_get_FIELD_display() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_get_FIELD_display() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_get_FIELD_display() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_field != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_get_FIELD_display() got multiple values for keyword argument 'field'" );
             goto error_exit;
         }

        _python_par_field = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_field );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_field );

    return NULL;
}

static PyObject *dparse_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_field, PyObject *_python_par_is_next, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_field( _python_str_plain_field, _python_par_field );
    PyObjectLocalParameterVariableNoDel _python_var_is_next( _python_str_plain_is_next, _python_par_is_next );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_op( _python_str_plain_op );
    PyObjectLocalVariable _python_var_order( _python_str_plain_order );
    PyObjectLocalVariable _python_var_param( _python_str_plain_param );
    PyObjectLocalVariable _python_var_q( _python_str_plain_q );
    PyObjectLocalVariable _python_var_qs( _python_str_plain_qs );

    // Actual function code.
    static PyFrameObject *frame_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_d61f7db3659350f4523d45f324e6056a, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 699 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_pk ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 700 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_a135782eee414e720a368da9224862ee ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 701 );
        _python_var_op.assign0( ( CHECK_IF_TRUE( _python_var_is_next.asObject() ) ? _python_unicode_plain_gt : _python_unicode_plain_lt ) );
        frame_guard.setLineNumber( 702 );
        _python_var_order.assign0( ( CHECK_IF_TRUE( _python_var_is_next.asObject() ) ? _python_unicode_empty : _python_unicode_chr_45 ) );
        frame_guard.setLineNumber( 703 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 getattr1;
            _python_var_param.assign1( ( call4.assign( _mvar_django__db__models__base_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( ( getattr1.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_attname ) ).asObject(), NULL ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 704 );
        {
            PyObjectTempKeeper0 call_tmp10;
            PyObjectTempKeeper0 make_dict8;
            PyObjectTempKeeper1 make_tuple6;
            _python_var_q.assign1( ( call_tmp10.assign( _mvar_django__db__models__base_Q.asObject0() ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp10.asObject(), ( make_dict8.assign( _python_var_param.asObject() ), MAKE_DICT1( make_dict8.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_aa582e0265b239962ed465f876e27b22, PyObjectTemporary( ( make_tuple6.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ), MAKE_TUPLE2( make_tuple6.asObject0(), _python_var_op.asObject() ) ) ).asObject() ) ).asObject() ) ) ) ) );
        }
        frame_guard.setLineNumber( 705 );
        {
            PyObjectTempKeeper0 call_tmp16;
            PyObjectTempKeeper0 make_dict12;
            PyObjectTempKeeper1 make_dict13;
            PyObjectTempKeeper1 make_dict14;
            PyObjectTempKeeper0 op18;
            _python_var_q.assign1( ( op18.assign( _python_var_q.asObject() ), BINARY_OPERATION( PyNumber_Or, op18.asObject0(), PyObjectTemporary( ( call_tmp16.assign( _mvar_django__db__models__base_Q.asObject0() ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp16.asObject(), ( make_dict12.assign( _python_var_param.asObject() ), make_dict13.assign( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ), make_dict14.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_pk ) ), MAKE_DICT2( make_dict12.asObject0(), make_dict13.asObject0(), make_dict14.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_bb423b3aeda9593522f3fc166571f1ff, _python_var_op.asObject() ) ).asObject() ) ) ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 706 );
        {
            PyObjectTempKeeper1 call20;
            PyObjectTempKeeper1 call24;
            PyObjectTempKeeper1 call28;
            PyObjectTempKeeper1 call29;
            PyObjectTempKeeper1 call_tmp22;
            PyObjectTempKeeper0 make_tuple26;
            _python_var_qs.assign1( ( call28.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call24.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call_tmp22.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call20.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain__default_manager ) ).asObject(), _python_str_plain_using ) ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__state ) ).asObject(), _python_str_plain_db ) ).asObject() ) ) ).asObject(), _python_str_plain_filter ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp22.asObject(), _python_var_kwargs.asObject1() ) ) ).asObject(), _python_str_plain_filter ) ), CALL_FUNCTION_WITH_ARGS( call24.asObject0(), _python_var_q.asObject() ) ) ).asObject(), _python_str_plain_order_by ) ), call29.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_f0275d2ae1aaf69b3b06259723647d35, PyObjectTemporary( ( make_tuple26.assign( _python_var_order.asObject() ), MAKE_TUPLE2( make_tuple26.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call28.asObject0(), call29.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_1013c94979a329e125c31c94421b5014, _python_var_order.asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 707 );
        try
        {
            frame_guard.setLineNumber( 708 );
            return LOOKUP_SUBSCRIPT_CONST( _python_var_qs.asObject(), _python_int_0, 0 );
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

            if ( _exception.matches( PyExc_IndexError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 710 );
                {
                    PyObjectTempKeeper1 call31;
                    {
                        PyObjectTemporary tmp_exception_type( ( call31.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_DoesNotExist ) ), CALL_FUNCTION_WITH_ARGS( call31.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_fa2be6545aa17f3c526f6a9159862400, PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ).asObject() ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_is_next.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_qs.updateLocalsDict( _python_var_q.updateLocalsDict( _python_var_param.updateLocalsDict( _python_var_order.updateLocalsDict( _python_var_op.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base );
           frame_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_field = NULL;
    PyObject *_python_par_is_next = NULL;
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
                        PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() keywords must be strings" );
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

    // Check if argument field was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_field );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_field == NULL );

            _python_par_field = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_field );

            kw_found += 1;
        }
    }

    // Check if argument is_next was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_is_next );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_is_next == NULL );

            _python_par_is_next = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_is_next );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_field != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() got multiple values for keyword argument 'field'" );
             goto error_exit;
         }

        _python_par_field = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_is_next != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_get_next_or_previous_by_FIELD() got multiple values for keyword argument 'is_next'" );
             goto error_exit;
         }

        _python_par_is_next = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_field, _python_par_is_next, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_field );
    Py_XDECREF( _python_par_is_next );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_is_next )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_is_next( _python_str_plain_is_next, _python_par_is_next );
    PyObjectLocalVariable _python_var_cachename( _python_str_plain_cachename );
    PyObjectLocalVariable _python_var_op( _python_str_plain_op );
    PyObjectLocalVariable _python_var_order( _python_str_plain_order );
    PyObjectLocalVariable _python_var_order_field( _python_str_plain_order_field );
    PyObjectLocalVariable _python_var_obj( _python_str_plain_obj );

    // Actual function code.
    static PyFrameObject *frame_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_16df00c795467f3f83ee7b0f2d1dc6fc, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 713 );
        _python_var_cachename.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_e4d7317b4a4ecd9618c122407fb49cb9, _python_var_is_next.asObject() ) );
        frame_guard.setLineNumber( 714 );
        {
            PyObjectTempKeeper0 hasattr21;
            if ( (!( ( hasattr21.assign( _python_var_self.asObject() ), HAS_ATTRIBUTE( hasattr21.asObject0(), _python_var_cachename.asObject() ) ) )) )
        {
            frame_guard.setLineNumber( 715 );
            _python_var_op.assign0( ( CHECK_IF_TRUE( _python_var_is_next.asObject() ) ? _python_unicode_plain_gt : _python_unicode_plain_lt ) );
            frame_guard.setLineNumber( 716 );
            _python_var_order.assign0( ( CHECK_IF_TRUE( _python_var_is_next.asObject() ) ? _python_unicode_plain__order : _python_unicode_digest_e53de4f1b00c5995393441f83ef57d8c ) );
            frame_guard.setLineNumber( 717 );
            _python_var_order_field.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_order_with_respect_to ) );
            frame_guard.setLineNumber( 718 );
            {
                PyObjectTempKeeper1 call16;
                PyObjectTempKeeper1 call_tmp10;
                PyObjectTempKeeper1 call_tmp14;
                PyObjectTempKeeper1 call_tmp6;
                PyObjectTempKeeper0 getattr1;
                PyObjectTempKeeper1 make_dict12;
                PyObjectTempKeeper1 make_dict4;
                PyObjectTempKeeper1 make_dict8;
                _python_var_obj.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_INDEX_SLICE( PyObjectTemporary( ( call16.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call_tmp14.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call_tmp6.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__default_manager ) ).asObject(), _python_str_plain_filter ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp6.asObject(), ( make_dict4.assign( ( getattr1.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_order_field.asObject(), _python_str_plain_attname ) ).asObject(), NULL ) ) ), MAKE_DICT1( make_dict4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_order_field.asObject(), _python_str_plain_name ) ).asObject() ) ) ) ) ).asObject(), _python_str_plain_filter ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp14.asObject(), ( make_dict12.assign( ( call_tmp10.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__default_manager ) ).asObject(), _python_str_plain_values ) ).asObject(), _python_unicode_plain__order ) ).asObject(), _python_str_plain_filter ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp10.asObject(), ( make_dict8.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_pk ) ), MAKE_DICT1( make_dict8.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_pk ) ).asObject(), _python_str_plain_name ) ).asObject() ) ) ) ) ), MAKE_DICT1( make_dict12.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_87c232aac5f4aaa6d94ac3ffc6e94a60, _python_var_op.asObject() ) ).asObject() ) ) ) ) ).asObject(), _python_str_plain_order_by ) ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), _python_var_order.asObject() ) ) ).asObject(), 0, 1 ) ).asObject(), _python_str_plain_get ) ).asObject() ) );
            }
            frame_guard.setLineNumber( 725 );
            {
                PyObjectTempKeeper0 setattr18;
                PyObjectTempKeeper0 setattr19;
                ( ( setattr18.assign( _python_var_self.asObject() ), setattr19.assign( _python_var_cachename.asObject() ), BUILTIN_SETATTR( setattr18.asObject0(), setattr19.asObject0(), _python_var_obj.asObject() ) ), Py_None );
            }
        }
        }
        frame_guard.setLineNumber( 726 );
        {
            PyObjectTempKeeper0 getattr23;
            return ( getattr23.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr23.asObject0(), _python_var_cachename.asObject(), NULL ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_is_next.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_obj.updateLocalsDict( _python_var_order_field.updateLocalsDict( _python_var_order.updateLocalsDict( _python_var_op.updateLocalsDict( _python_var_cachename.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base );
           frame_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_is_next = NULL;
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
                PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_is_next == key )
            {
                if (unlikely( _python_par_is_next ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() got multiple values for keyword argument 'is_next'" );
                    goto error_exit;
                }

                _python_par_is_next = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_is_next, key ) )
            {
                if (unlikely( _python_par_is_next ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() got multiple values for keyword argument 'is_next'" );
                    goto error_exit;
                }

                _python_par_is_next = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_get_next_or_previous_in_order() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_is_next != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_get_next_or_previous_in_order() got multiple values for keyword argument 'is_next'" );
             goto error_exit;
         }

        _python_par_is_next = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_is_next );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_is_next );

    return NULL;
}

static PyObject *dparse_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_unused )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_unused( _python_str_plain_unused, _python_par_unused );

    // Actual function code.
    static PyFrameObject *frame_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_916f3d4eae8cb6e47868d2fe65f58373, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 729 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_pk );
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
        frame_guard.getFrame0()->f_locals = _python_var_unused.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base );
           frame_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_unused = NULL;
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
                PyErr_Format( PyExc_TypeError, "prepare_database_save() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "prepare_database_save() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_unused == key )
            {
                if (unlikely( _python_par_unused ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_database_save() got multiple values for keyword argument 'unused'" );
                    goto error_exit;
                }

                _python_par_unused = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_database_save() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_unused, key ) )
            {
                if (unlikely( _python_par_unused ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_database_save() got multiple values for keyword argument 'unused'" );
                    goto error_exit;
                }

                _python_par_unused = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "prepare_database_save() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "prepare_database_save() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "prepare_database_save() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "prepare_database_save() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "prepare_database_save() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "prepare_database_save() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "prepare_database_save() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "prepare_database_save() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "prepare_database_save() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "prepare_database_save() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "prepare_database_save() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "prepare_database_save() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "prepare_database_save() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "prepare_database_save() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_unused != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "prepare_database_save() got multiple values for keyword argument 'unused'" );
             goto error_exit;
         }

        _python_par_unused = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_unused );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_unused );

    return NULL;
}

static PyObject *dparse_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_22_clean_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_22_clean_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "clean() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "clean() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "clean() got multiple values for keyword argument 'self'" );
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
                   "clean() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "clean() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "clean() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "clean() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "clean() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "clean() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clean() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "clean() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clean() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "clean() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "clean() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "clean() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "clean() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "clean() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_22_clean_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_22_clean_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_22_clean_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_22_clean_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_exclude )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_exclude( _python_str_plain_exclude, _python_par_exclude );
    PyObjectLocalVariable _python_var_unique_checks( _python_str_plain_unique_checks );
    PyObjectLocalVariable _python_var_date_checks( _python_str_plain_date_checks );
    PyObjectLocalVariable _python_var_errors( _python_str_plain_errors );
    PyObjectLocalVariable _python_var_date_errors( _python_str_plain_date_errors );
    PyObjectLocalVariable _python_var_k( _python_str_plain_k );
    PyObjectLocalVariable _python_var_v( _python_str_plain_v );

    // Actual function code.
    static PyFrameObject *frame_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_7d38582a7df1f295472e7cc49facf89a, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 745 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 call1;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get_unique_checks ) ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_exclude.asObject(), _python_str_plain_exclude ) ).asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_unique_checks.assign0( _python_tmp_element_1.asObject() );
            _python_var_date_checks.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 747 );
        {
            PyObjectTempKeeper1 call4;
            _python_var_errors.assign1( ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__perform_unique_checks ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_unique_checks.asObject() ) ) );
        }
        frame_guard.setLineNumber( 748 );
        {
            PyObjectTempKeeper1 call6;
            _python_var_date_errors.assign1( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__perform_date_checks ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_date_checks.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 750 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_date_errors.asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 750 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 750 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_k.assign0( _python_tmp_element_1.asObject() );
                        _python_var_v.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 751 );
                {
                    PyObjectTempKeeper1 call11;
                    PyObjectTempKeeper1 call8;
                    DECREASE_REFCOUNT( ( call11.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_errors.asObject(), _python_str_plain_setdefault ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_k.asObject(), PyObjectTemporary( PyList_New( 0 ) ).asObject() ) ) ).asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_v.asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 753 );
        if ( CHECK_IF_TRUE( _python_var_errors.asObject() ) )
        {
            frame_guard.setLineNumber( 754 );
            {
                PyObjectTempKeeper0 call13;
                {
                    PyObjectTemporary tmp_exception_type( ( call13.assign( _mvar_django__db__models__base_ValidationError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_var_errors.asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_exclude.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_date_errors.updateLocalsDict( _python_var_errors.updateLocalsDict( _python_var_date_checks.updateLocalsDict( _python_var_unique_checks.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base );
           frame_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_exclude = NULL;
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
                PyErr_Format( PyExc_TypeError, "validate_unique() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "validate_unique() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exclude == key )
            {
                if (unlikely( _python_par_exclude ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_unique() got multiple values for keyword argument 'exclude'" );
                    goto error_exit;
                }

                _python_par_exclude = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_unique() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exclude, key ) )
            {
                if (unlikely( _python_par_exclude ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_unique() got multiple values for keyword argument 'exclude'" );
                    goto error_exit;
                }

                _python_par_exclude = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "validate_unique() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "validate_unique() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "validate_unique() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "validate_unique() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "validate_unique() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "validate_unique() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "validate_unique() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "validate_unique() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "validate_unique() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "validate_unique() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "validate_unique() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "validate_unique() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "validate_unique() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "validate_unique() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_exclude != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "validate_unique() got multiple values for keyword argument 'exclude'" );
             goto error_exit;
         }

        _python_par_exclude = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_exclude == NULL )
    {
        _python_par_exclude = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_exclude );
    }


    return impl_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_exclude );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_exclude );

    return NULL;
}

static PyObject *dparse_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_exclude )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_exclude( _python_str_plain_exclude, _python_par_exclude );
    PyObjectLocalVariable _python_var_unique_checks( _python_str_plain_unique_checks );
    PyObjectLocalVariable _python_var_unique_togethers( _python_str_plain_unique_togethers );
    PyObjectLocalVariable _python_var_parent_class( _python_str_plain_parent_class );
    PyObjectLocalVariable _python_var_model_class( _python_str_plain_model_class );
    PyObjectLocalVariable _python_var_unique_together( _python_str_plain_unique_together );
    PyObjectLocalVariable _python_var_check( _python_str_plain_check );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );
    PyObjectLocalVariable _python_var_date_checks( _python_str_plain_date_checks );
    PyObjectLocalVariable _python_var_fields_with_class( _python_str_plain_fields_with_class );
    PyObjectLocalVariable _python_var_fields( _python_str_plain_fields );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );

    // Actual function code.
    static PyFrameObject *frame_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_3d901ded629bab0d9658d3e20f854726, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 765 );
        if ( ( _python_var_exclude.asObject() == Py_None ) )
        {
            _python_var_exclude.assign1( PyList_New( 0 ) );
        }
        _python_var_unique_checks.assign1( PyList_New( 0 ) );
        frame_guard.setLineNumber( 769 );
        {
            PyObjectTempKeeper1 make_tuple1;
            _python_var_unique_togethers.assign1( MAKE_LIST1( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_unique_together ) ).asObject() ) ) ) );
        }
        {
            frame_guard.setLineNumber( 770 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_parents ) ).asObject(), _python_str_plain_keys ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 770 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_parent_class.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 771 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_parent_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_unique_together ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 772 );
                    {
                        PyObjectTempKeeper1 call5;
                        PyObjectTempKeeper0 make_tuple3;
                        DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_unique_togethers.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( make_tuple3.assign( _python_var_parent_class.asObject() ), MAKE_TUPLE2( make_tuple3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_parent_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_unique_together ) ).asObject() ) ) ).asObject() ) ) );
                    }
                }

               CONSIDER_THREADING();
            }
        }
        {
            frame_guard.setLineNumber( 774 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_unique_togethers.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 774 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    {
                        frame_guard.setLineNumber( 774 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_model_class.assign0( _python_tmp_element_1.asObject() );
                        _python_var_unique_together.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                {
                    frame_guard.setLineNumber( 775 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_unique_together.asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 775 );
                            PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_3 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                            _python_var_check.assign0( _python_tmp_iter_value.asObject() );
                        }
                        {
                            PyObject *_python_tmp_break_indicator = Py_False;
                            frame_guard.setLineNumber( 776 );
                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_check.asObject() ) );
                            while( true )
                            {
                                {
                                    frame_guard.setLineNumber( 776 );
                                    PyObject *_tmp_unpack_4 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                    if ( _tmp_unpack_4 == NULL )
                                    {
                                        _python_tmp_break_indicator = Py_True;
                                        break;
                                    }
                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_4 );
                                    _python_var_name.assign0( _python_tmp_iter_value.asObject() );
                                }
                                frame_guard.setLineNumber( 778 );
                                {
                                    PyObjectTempKeeper0 cmp7;
                                    if ( ( cmp7.assign( _python_var_name.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp7.asObject0(), _python_var_exclude.asObject() ) ) )
                                {
                                    frame_guard.setLineNumber( 779 );
                                    break;
                                }
                                }

                               CONSIDER_THREADING();
                            }
                            if ( ( _python_tmp_break_indicator == Py_True ) )
                            {
                                frame_guard.setLineNumber( 781 );
                                {
                                    PyObjectTempKeeper1 call11;
                                    PyObjectTempKeeper0 make_tuple9;
                                    DECREASE_REFCOUNT( ( call11.assign( LOOKUP_ATTRIBUTE( _python_var_unique_checks.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( ( make_tuple9.assign( _python_var_model_class.asObject() ), MAKE_TUPLE2( make_tuple9.asObject0(), PyObjectTemporary( TO_TUPLE( _python_var_check.asObject() ) ).asObject() ) ) ).asObject() ) ) );
                                }
                            }
                        }

                       CONSIDER_THREADING();
                    }
                }

               CONSIDER_THREADING();
            }
        }
        _python_var_date_checks.assign1( PyList_New( 0 ) );
        frame_guard.setLineNumber( 789 );
        {
            PyObjectTempKeeper1 make_tuple13;
            _python_var_fields_with_class.assign1( MAKE_LIST1( ( make_tuple13.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), MAKE_TUPLE2( make_tuple13.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_local_fields ) ).asObject() ) ) ) );
        }
        {
            frame_guard.setLineNumber( 790 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_parents ) ).asObject(), _python_str_plain_keys ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 790 );
                    PyObject *_tmp_unpack_5 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_5 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_5 );
                    _python_var_parent_class.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 791 );
                {
                    PyObjectTempKeeper1 call17;
                    PyObjectTempKeeper0 make_tuple15;
                    DECREASE_REFCOUNT( ( call17.assign( LOOKUP_ATTRIBUTE( _python_var_fields_with_class.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), PyObjectTemporary( ( make_tuple15.assign( _python_var_parent_class.asObject() ), MAKE_TUPLE2( make_tuple15.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_parent_class.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_local_fields ) ).asObject() ) ) ).asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        {
            frame_guard.setLineNumber( 793 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_fields_with_class.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 793 );
                    PyObject *_tmp_unpack_6 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_6 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_6 );
                    {
                        frame_guard.setLineNumber( 793 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_model_class.assign0( _python_tmp_element_1.asObject() );
                        _python_var_fields.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                {
                    frame_guard.setLineNumber( 794 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_fields.asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 794 );
                            PyObject *_tmp_unpack_7 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_7 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_7 );
                            _python_var_f.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 795 );
                        _python_var_name.assign1( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) );
                        frame_guard.setLineNumber( 796 );
                        {
                            PyObjectTempKeeper0 cmp19;
                            if ( ( cmp19.assign( _python_var_name.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp19.asObject0(), _python_var_exclude.asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 797 );
                            CONSIDER_THREADING(); continue;
                        }
                        }
                        frame_guard.setLineNumber( 798 );
                        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_unique ) ).asObject() ) )
                        {
                            frame_guard.setLineNumber( 799 );
                            {
                                PyObjectTempKeeper1 call23;
                                PyObjectTempKeeper0 make_tuple21;
                                DECREASE_REFCOUNT( ( call23.assign( LOOKUP_ATTRIBUTE( _python_var_unique_checks.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), PyObjectTemporary( ( make_tuple21.assign( _python_var_model_class.asObject() ), MAKE_TUPLE2( make_tuple21.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_name.asObject() ) ).asObject() ) ) ).asObject() ) ) );
                            }
                        }
                        frame_guard.setLineNumber( 800 );
                        {
                            PyObjectTempKeeper1 cmp31;
                            if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_unique_for_date ) ).asObject() ) && ( cmp31.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_unique_for_date ) ), SEQUENCE_CONTAINS_NOT_BOOL( cmp31.asObject0(), _python_var_exclude.asObject() ) ) ) )
                        {
                            frame_guard.setLineNumber( 801 );
                            {
                                PyObjectTempKeeper1 call29;
                                PyObjectTempKeeper0 make_tuple25;
                                PyObjectTempKeeper0 make_tuple27;
                                DECREASE_REFCOUNT( ( call29.assign( LOOKUP_ATTRIBUTE( _python_var_date_checks.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), PyObjectTemporary( ( make_tuple25.assign( _python_var_model_class.asObject() ), make_tuple27.assign( _python_var_name.asObject() ), MAKE_TUPLE4( make_tuple25.asObject0(), _python_unicode_plain_date, make_tuple27.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_unique_for_date ) ).asObject() ) ) ).asObject() ) ) );
                            }
                        }
                        }
                        frame_guard.setLineNumber( 802 );
                        {
                            PyObjectTempKeeper1 cmp39;
                            if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_unique_for_year ) ).asObject() ) && ( cmp39.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_unique_for_year ) ), SEQUENCE_CONTAINS_NOT_BOOL( cmp39.asObject0(), _python_var_exclude.asObject() ) ) ) )
                        {
                            frame_guard.setLineNumber( 803 );
                            {
                                PyObjectTempKeeper1 call37;
                                PyObjectTempKeeper0 make_tuple33;
                                PyObjectTempKeeper0 make_tuple35;
                                DECREASE_REFCOUNT( ( call37.assign( LOOKUP_ATTRIBUTE( _python_var_date_checks.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call37.asObject0(), PyObjectTemporary( ( make_tuple33.assign( _python_var_model_class.asObject() ), make_tuple35.assign( _python_var_name.asObject() ), MAKE_TUPLE4( make_tuple33.asObject0(), _python_unicode_plain_year, make_tuple35.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_unique_for_year ) ).asObject() ) ) ).asObject() ) ) );
                            }
                        }
                        }
                        frame_guard.setLineNumber( 804 );
                        {
                            PyObjectTempKeeper1 cmp47;
                            if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_unique_for_month ) ).asObject() ) && ( cmp47.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_unique_for_month ) ), SEQUENCE_CONTAINS_NOT_BOOL( cmp47.asObject0(), _python_var_exclude.asObject() ) ) ) )
                        {
                            frame_guard.setLineNumber( 805 );
                            {
                                PyObjectTempKeeper1 call45;
                                PyObjectTempKeeper0 make_tuple41;
                                PyObjectTempKeeper0 make_tuple43;
                                DECREASE_REFCOUNT( ( call45.assign( LOOKUP_ATTRIBUTE( _python_var_date_checks.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call45.asObject0(), PyObjectTemporary( ( make_tuple41.assign( _python_var_model_class.asObject() ), make_tuple43.assign( _python_var_name.asObject() ), MAKE_TUPLE4( make_tuple41.asObject0(), _python_unicode_plain_month, make_tuple43.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_unique_for_month ) ).asObject() ) ) ).asObject() ) ) );
                            }
                        }
                        }

                       CONSIDER_THREADING();
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 806 );
        {
            PyObjectTempKeeper0 make_tuple49;
            return ( make_tuple49.assign( _python_var_unique_checks.asObject() ), MAKE_TUPLE2( make_tuple49.asObject0(), _python_var_date_checks.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_exclude.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_fields.updateLocalsDict( _python_var_fields_with_class.updateLocalsDict( _python_var_date_checks.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_check.updateLocalsDict( _python_var_unique_together.updateLocalsDict( _python_var_model_class.updateLocalsDict( _python_var_parent_class.updateLocalsDict( _python_var_unique_togethers.updateLocalsDict( _python_var_unique_checks.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base );
           frame_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_exclude = NULL;
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
                PyErr_Format( PyExc_TypeError, "_get_unique_checks() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_get_unique_checks() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exclude == key )
            {
                if (unlikely( _python_par_exclude ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_unique_checks() got multiple values for keyword argument 'exclude'" );
                    goto error_exit;
                }

                _python_par_exclude = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_unique_checks() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exclude, key ) )
            {
                if (unlikely( _python_par_exclude ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_unique_checks() got multiple values for keyword argument 'exclude'" );
                    goto error_exit;
                }

                _python_par_exclude = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_get_unique_checks() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_get_unique_checks() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_get_unique_checks() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_get_unique_checks() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_unique_checks() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_unique_checks() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_unique_checks() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_unique_checks() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_unique_checks() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "_get_unique_checks() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_get_unique_checks() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_get_unique_checks() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_get_unique_checks() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_get_unique_checks() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_exclude != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_get_unique_checks() got multiple values for keyword argument 'exclude'" );
             goto error_exit;
         }

        _python_par_exclude = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_exclude == NULL )
    {
        _python_par_exclude = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_exclude );
    }


    return impl_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_exclude );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_exclude );

    return NULL;
}

static PyObject *dparse_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_unique_checks )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_unique_checks( _python_str_plain_unique_checks, _python_par_unique_checks );
    PyObjectLocalVariable _python_var_errors( _python_str_plain_errors );
    PyObjectLocalVariable _python_var_model_class( _python_str_plain_model_class );
    PyObjectLocalVariable _python_var_unique_check( _python_str_plain_unique_check );
    PyObjectLocalVariable _python_var_lookup_kwargs( _python_str_plain_lookup_kwargs );
    PyObjectLocalVariable _python_var_field_name( _python_str_plain_field_name );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );
    PyObjectLocalVariable _python_var_lookup_value( _python_str_plain_lookup_value );
    PyObjectLocalVariable _python_var_qs( _python_str_plain_qs );
    PyObjectLocalVariable _python_var_model_class_pk( _python_str_plain_model_class_pk );
    PyObjectLocalVariable _python_var_key( _python_str_plain_key );

    // Actual function code.
    _python_var_errors.assign1( PyDict_New() );
    static PyFrameObject *frame_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_cd0764dfe963575e5626536b3d80c828, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 811 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_unique_checks.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 811 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 811 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_model_class.assign0( _python_tmp_element_1.asObject() );
                        _python_var_unique_check.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                _python_var_lookup_kwargs.assign1( PyDict_New() );
                {
                    frame_guard.setLineNumber( 816 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_unique_check.asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 816 );
                            PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_2 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                            _python_var_field_name.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 817 );
                        {
                            PyObjectTempKeeper1 call1;
                            _python_var_f.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_get_field ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_field_name.asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 818 );
                        {
                            PyObjectTempKeeper0 getattr3;
                            _python_var_lookup_value.assign1( ( getattr3.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_attname ) ).asObject(), NULL ) ) );
                        }
                        frame_guard.setLineNumber( 819 );
                        if ( ( _python_var_lookup_value.asObject() == Py_None ) )
                        {
                            frame_guard.setLineNumber( 821 );
                            CONSIDER_THREADING(); continue;
                        }
                        frame_guard.setLineNumber( 822 );
                        if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_primary_key ) ).asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__state ) ).asObject(), _python_str_plain_adding ) ).asObject() ) )) ) )
                        {
                            frame_guard.setLineNumber( 824 );
                            CONSIDER_THREADING(); continue;
                        }
                        frame_guard.setLineNumber( 825 );
                        {
                                PyObject *tmp_identifier = _python_var_lookup_value.asObject();
                                PyObject *tmp_subscribed = _python_var_lookup_kwargs.asObject();
                                SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, PyObjectTemporary( TO_STR( _python_var_field_name.asObject() ) ).asObject() );
                        }

                       CONSIDER_THREADING();
                    }
                }
                frame_guard.setLineNumber( 828 );
                {
                    PyObjectTempKeeper1 cmp6;
                    if ( ( cmp6.assign( BUILTIN_LEN( _python_var_unique_check.asObject() ) ), RICH_COMPARE_BOOL_NE( cmp6.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_lookup_kwargs.asObject() ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 829 );
                    CONSIDER_THREADING(); continue;
                }
                }
                frame_guard.setLineNumber( 831 );
                {
                    PyObjectTempKeeper1 call_tmp8;
                    _python_var_qs.assign1( ( call_tmp8.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_model_class.asObject(), _python_str_plain__default_manager ) ).asObject(), _python_str_plain_filter ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp8.asObject(), _python_var_lookup_kwargs.asObject1() ) ) );
                }
                frame_guard.setLineNumber( 839 );
                {
                    PyObjectTempKeeper1 call10;
                    _python_var_model_class_pk.assign1( ( call10.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get_pk_val ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_model_class.asObject(), _python_str_plain__meta ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 840 );
                if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__state ) ).asObject(), _python_str_plain_adding ) ).asObject() ) )) && ( _python_var_model_class_pk.asObject() != Py_None ) ) )
                {
                    frame_guard.setLineNumber( 841 );
                    {
                        PyObjectTempKeeper1 call12;
                        _python_var_qs.assign1( ( call12.assign( LOOKUP_ATTRIBUTE( _python_var_qs.asObject(), _python_str_plain_exclude ) ), CALL_FUNCTION( call12.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_model_class_pk.asObject(), _python_str_plain_pk ) ).asObject() ) ) );
                    }
                }
                frame_guard.setLineNumber( 842 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_qs.asObject(), _python_str_plain_exists ) ).asObject() ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 843 );
                    if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( _python_var_unique_check.asObject() ) ).asObject(), _python_int_pos_1 ) )
                    {
                        frame_guard.setLineNumber( 844 );
                        _python_var_key.assign1( LOOKUP_SUBSCRIPT_CONST( _python_var_unique_check.asObject(), _python_int_0, 0 ) );
                    }
                    else
                    {
                        frame_guard.setLineNumber( 846 );
                        _python_var_key.assign0( _mvar_django__db__models__base_NON_FIELD_ERRORS.asObject0() );
                    }
                    frame_guard.setLineNumber( 847 );
                    {
                        PyObjectTempKeeper1 call15;
                        PyObjectTempKeeper1 call18;
                        PyObjectTempKeeper0 call19;
                        PyObjectTempKeeper1 call21;
                        DECREASE_REFCOUNT( ( call21.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call15.assign( LOOKUP_ATTRIBUTE( _python_var_errors.asObject(), _python_str_plain_setdefault ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_var_key.asObject(), PyObjectTemporary( PyList_New( 0 ) ).asObject() ) ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), PyObjectTemporary( ( call18.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_unique_error_message ) ), call19.assign( _python_var_model_class.asObject() ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), call19.asObject0(), _python_var_unique_check.asObject() ) ) ).asObject() ) ) );
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 849 );
        return _python_var_errors.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_unique_checks.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_model_class_pk.updateLocalsDict( _python_var_qs.updateLocalsDict( _python_var_lookup_value.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_lookup_kwargs.updateLocalsDict( _python_var_unique_check.updateLocalsDict( _python_var_model_class.updateLocalsDict( _python_var_errors.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base );
           frame_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_unique_checks = NULL;
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
                PyErr_Format( PyExc_TypeError, "_perform_unique_checks() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_perform_unique_checks() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_unique_checks == key )
            {
                if (unlikely( _python_par_unique_checks ))
                {
                    PyErr_Format( PyExc_TypeError, "_perform_unique_checks() got multiple values for keyword argument 'unique_checks'" );
                    goto error_exit;
                }

                _python_par_unique_checks = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_perform_unique_checks() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_unique_checks, key ) )
            {
                if (unlikely( _python_par_unique_checks ))
                {
                    PyErr_Format( PyExc_TypeError, "_perform_unique_checks() got multiple values for keyword argument 'unique_checks'" );
                    goto error_exit;
                }

                _python_par_unique_checks = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_perform_unique_checks() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_perform_unique_checks() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_perform_unique_checks() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_perform_unique_checks() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_perform_unique_checks() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_perform_unique_checks() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_perform_unique_checks() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_perform_unique_checks() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_perform_unique_checks() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_perform_unique_checks() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_perform_unique_checks() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_perform_unique_checks() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_perform_unique_checks() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_perform_unique_checks() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_unique_checks != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_perform_unique_checks() got multiple values for keyword argument 'unique_checks'" );
             goto error_exit;
         }

        _python_par_unique_checks = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_unique_checks );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_unique_checks );

    return NULL;
}

static PyObject *dparse_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_date_checks )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_date_checks( _python_str_plain_date_checks, _python_par_date_checks );
    PyObjectLocalVariable _python_var_errors( _python_str_plain_errors );
    PyObjectLocalVariable _python_var_model_class( _python_str_plain_model_class );
    PyObjectLocalVariable _python_var_lookup_type( _python_str_plain_lookup_type );
    PyObjectLocalVariable _python_var_field( _python_str_plain_field );
    PyObjectLocalVariable _python_var_unique_for( _python_str_plain_unique_for );
    PyObjectLocalVariable _python_var_lookup_kwargs( _python_str_plain_lookup_kwargs );
    PyObjectLocalVariable _python_var_date( _python_str_plain_date );
    PyObjectLocalVariable _python_var_qs( _python_str_plain_qs );

    // Actual function code.
    _python_var_errors.assign1( PyDict_New() );
    static PyFrameObject *frame_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_72fd0524bc2098876a5038dc45139137, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 853 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_date_checks.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 853 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 853 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                        PyObjectTemporary _python_tmp_element_4( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 3 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 4 );
                        _python_var_model_class.assign0( _python_tmp_element_1.asObject() );
                        _python_var_lookup_type.assign0( _python_tmp_element_2.asObject() );
                        _python_var_field.assign0( _python_tmp_element_3.asObject() );
                        _python_var_unique_for.assign0( _python_tmp_element_4.asObject() );
                    }
                }
                _python_var_lookup_kwargs.assign1( PyDict_New() );
                frame_guard.setLineNumber( 857 );
                {
                    PyObjectTempKeeper0 getattr1;
                    _python_var_date.assign1( ( getattr1.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), _python_var_unique_for.asObject(), NULL ) ) );
                }
                frame_guard.setLineNumber( 858 );
                if ( ( _python_var_date.asObject() == Py_None ) )
                {
                    frame_guard.setLineNumber( 859 );
                    CONSIDER_THREADING(); continue;
                }
                frame_guard.setLineNumber( 860 );
                if ( RICH_COMPARE_BOOL_EQ( _python_var_lookup_type.asObject(), _python_unicode_plain_date ) )
                {
                    frame_guard.setLineNumber( 861 );
                    {
                            PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_date.asObject(), _python_str_plain_day ) );
                            PyObject *tmp_subscribed = _python_var_lookup_kwargs.asObject();
                            SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_27f05d9114231258a59d9ac430c9ccd3, _python_var_unique_for.asObject() ) ).asObject() );
                    }
                    frame_guard.setLineNumber( 862 );
                    {
                            PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_date.asObject(), _python_str_plain_month ) );
                            PyObject *tmp_subscribed = _python_var_lookup_kwargs.asObject();
                            SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_1c6b445a90fd66d48b20f3bed6dfaebe, _python_var_unique_for.asObject() ) ).asObject() );
                    }
                    frame_guard.setLineNumber( 863 );
                    {
                            PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_date.asObject(), _python_str_plain_year ) );
                            PyObject *tmp_subscribed = _python_var_lookup_kwargs.asObject();
                            SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_f955863f2700efc14767400d342729e0, _python_var_unique_for.asObject() ) ).asObject() );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 865 );
                    {
                        PyObjectTempKeeper0 getattr6;
                        PyObjectTempKeeper0 make_tuple4;
                        {
                            PyObjectTemporary tmp_identifier( ( getattr6.assign( _python_var_date.asObject() ), BUILTIN_GETATTR( getattr6.asObject0(), _python_var_lookup_type.asObject(), NULL ) ) );
                            PyObject *tmp_subscribed = _python_var_lookup_kwargs.asObject();
                            SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_aa582e0265b239962ed465f876e27b22, PyObjectTemporary( ( make_tuple4.assign( _python_var_unique_for.asObject() ), MAKE_TUPLE2( make_tuple4.asObject0(), _python_var_lookup_type.asObject() ) ) ).asObject() ) ).asObject() );
                    }
                    }
                }
                frame_guard.setLineNumber( 866 );
                {
                    PyObjectTempKeeper0 getattr9;
                    {
                        PyObjectTemporary tmp_identifier( ( getattr9.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr9.asObject0(), _python_var_field.asObject(), NULL ) ) );
                        PyObject *tmp_subscribed = _python_var_lookup_kwargs.asObject();
                        SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_var_field.asObject() );
                }
                }
                frame_guard.setLineNumber( 868 );
                {
                    PyObjectTempKeeper1 call_tmp12;
                    _python_var_qs.assign1( ( call_tmp12.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_model_class.asObject(), _python_str_plain__default_manager ) ).asObject(), _python_str_plain_filter ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp12.asObject(), _python_var_lookup_kwargs.asObject1() ) ) );
                }
                frame_guard.setLineNumber( 871 );
                if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__state ) ).asObject(), _python_str_plain_adding ) ).asObject() ) )) && ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_pk ) ).asObject() != Py_None ) ) )
                {
                    frame_guard.setLineNumber( 872 );
                    {
                        PyObjectTempKeeper1 call14;
                        _python_var_qs.assign1( ( call14.assign( LOOKUP_ATTRIBUTE( _python_var_qs.asObject(), _python_str_plain_exclude ) ), CALL_FUNCTION( call14.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_pk ) ).asObject(), _python_str_plain_pk ) ).asObject() ) ) );
                    }
                }
                frame_guard.setLineNumber( 874 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_qs.asObject(), _python_str_plain_exists ) ).asObject() ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 875 );
                    {
                        PyObjectTempKeeper1 call17;
                        PyObjectTempKeeper1 call20;
                        PyObjectTempKeeper0 call21;
                        PyObjectTempKeeper0 call22;
                        PyObjectTempKeeper1 call24;
                        DECREASE_REFCOUNT( ( call24.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call17.assign( LOOKUP_ATTRIBUTE( _python_var_errors.asObject(), _python_str_plain_setdefault ) ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_var_field.asObject(), PyObjectTemporary( PyList_New( 0 ) ).asObject() ) ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call24.asObject0(), PyObjectTemporary( ( call20.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_date_error_message ) ), call21.assign( _python_var_lookup_type.asObject() ), call22.assign( _python_var_field.asObject() ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), call21.asObject0(), call22.asObject0(), _python_var_unique_for.asObject() ) ) ).asObject() ) ) );
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 878 );
        return _python_var_errors.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_date_checks.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_qs.updateLocalsDict( _python_var_date.updateLocalsDict( _python_var_lookup_kwargs.updateLocalsDict( _python_var_unique_for.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_lookup_type.updateLocalsDict( _python_var_model_class.updateLocalsDict( _python_var_errors.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base );
           frame_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_date_checks = NULL;
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
                PyErr_Format( PyExc_TypeError, "_perform_date_checks() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_perform_date_checks() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_date_checks == key )
            {
                if (unlikely( _python_par_date_checks ))
                {
                    PyErr_Format( PyExc_TypeError, "_perform_date_checks() got multiple values for keyword argument 'date_checks'" );
                    goto error_exit;
                }

                _python_par_date_checks = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_perform_date_checks() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_date_checks, key ) )
            {
                if (unlikely( _python_par_date_checks ))
                {
                    PyErr_Format( PyExc_TypeError, "_perform_date_checks() got multiple values for keyword argument 'date_checks'" );
                    goto error_exit;
                }

                _python_par_date_checks = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_perform_date_checks() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_perform_date_checks() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_perform_date_checks() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_perform_date_checks() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_perform_date_checks() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_perform_date_checks() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_perform_date_checks() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_perform_date_checks() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_perform_date_checks() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_perform_date_checks() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_perform_date_checks() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_perform_date_checks() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_perform_date_checks() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_perform_date_checks() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_date_checks != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_perform_date_checks() got multiple values for keyword argument 'date_checks'" );
             goto error_exit;
         }

        _python_par_date_checks = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_date_checks );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_date_checks );

    return NULL;
}

static PyObject *dparse_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_lookup_type, PyObject *_python_par_field, PyObject *_python_par_unique_for )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_lookup_type( _python_str_plain_lookup_type, _python_par_lookup_type );
    PyObjectLocalParameterVariableNoDel _python_var_field( _python_str_plain_field, _python_par_field );
    PyObjectLocalParameterVariableNoDel _python_var_unique_for( _python_str_plain_unique_for, _python_par_unique_for );
    PyObjectLocalVariable _python_var_opts( _python_str_plain_opts );

    // Actual function code.
    static PyFrameObject *frame_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_df87f973293cfdbfff26475e275780d8, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 881 );
        _python_var_opts.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) );
        frame_guard.setLineNumber( 882 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call11;
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper1 call7;
            PyObjectTempKeeper0 call9;
            PyObjectTempKeeper1 make_dict13;
            PyObjectTempKeeper1 make_dict15;
            PyObjectTempKeeper1 op19;
            return ( op19.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__db__models__base__.asObject0(), _python_unicode_digest_2f9796584a3c667ba707c8a8781d6c16 ) ), BINARY_OPERATION_REMAINDER( op19.asObject0(), PyObjectTemporary( ( make_dict13.assign( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( _mvar_django__db__models__base_capfirst.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_get_field ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_field.asObject() ) ) ).asObject(), _python_str_plain_verbose_name ) ).asObject() ) ) ).asObject() ) ) ), make_dict15.assign( ( call11.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( ( call9.assign( _mvar_django__db__models__base_capfirst.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_get_field ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_unique_for.asObject() ) ) ).asObject(), _python_str_plain_verbose_name ) ).asObject() ) ) ).asObject() ) ) ), MAKE_DICT3( make_dict13.asObject0(), _python_unicode_plain_field_name, make_dict15.asObject0(), _python_unicode_plain_date_field, _python_var_lookup_type.asObject(), _python_unicode_plain_lookup ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_unique_for.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_lookup_type.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_opts.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base );
           frame_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_lookup_type = NULL;
    PyObject *_python_par_field = NULL;
    PyObject *_python_par_unique_for = NULL;
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
                PyErr_Format( PyExc_TypeError, "date_error_message() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "date_error_message() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_lookup_type == key )
            {
                if (unlikely( _python_par_lookup_type ))
                {
                    PyErr_Format( PyExc_TypeError, "date_error_message() got multiple values for keyword argument 'lookup_type'" );
                    goto error_exit;
                }

                _python_par_lookup_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_field == key )
            {
                if (unlikely( _python_par_field ))
                {
                    PyErr_Format( PyExc_TypeError, "date_error_message() got multiple values for keyword argument 'field'" );
                    goto error_exit;
                }

                _python_par_field = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_unique_for == key )
            {
                if (unlikely( _python_par_unique_for ))
                {
                    PyErr_Format( PyExc_TypeError, "date_error_message() got multiple values for keyword argument 'unique_for'" );
                    goto error_exit;
                }

                _python_par_unique_for = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "date_error_message() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_lookup_type, key ) )
            {
                if (unlikely( _python_par_lookup_type ))
                {
                    PyErr_Format( PyExc_TypeError, "date_error_message() got multiple values for keyword argument 'lookup_type'" );
                    goto error_exit;
                }

                _python_par_lookup_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_field, key ) )
            {
                if (unlikely( _python_par_field ))
                {
                    PyErr_Format( PyExc_TypeError, "date_error_message() got multiple values for keyword argument 'field'" );
                    goto error_exit;
                }

                _python_par_field = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_unique_for, key ) )
            {
                if (unlikely( _python_par_unique_for ))
                {
                    PyErr_Format( PyExc_TypeError, "date_error_message() got multiple values for keyword argument 'unique_for'" );
                    goto error_exit;
                }

                _python_par_unique_for = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "date_error_message() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 4 ))
    {
        if ( 4 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "date_error_message() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "date_error_message() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "date_error_message() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "date_error_message() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "date_error_message() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "date_error_message() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "date_error_message() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "date_error_message() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 4 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "date_error_message() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "date_error_message() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "date_error_message() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "date_error_message() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "date_error_message() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_lookup_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "date_error_message() got multiple values for keyword argument 'lookup_type'" );
             goto error_exit;
         }

        _python_par_lookup_type = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_field != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "date_error_message() got multiple values for keyword argument 'field'" );
             goto error_exit;
         }

        _python_par_field = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_unique_for != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "date_error_message() got multiple values for keyword argument 'unique_for'" );
             goto error_exit;
         }

        _python_par_unique_for = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_lookup_type, _python_par_field, _python_par_unique_for );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_lookup_type );
    Py_XDECREF( _python_par_field );
    Py_XDECREF( _python_par_unique_for );

    return NULL;
}

static PyObject *dparse_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_model_class, PyObject *_python_par_unique_check )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_model_class( _python_str_plain_model_class, _python_par_model_class );
    PyObjectLocalParameterVariableNoDel _python_var_unique_check( _python_str_plain_unique_check, _python_par_unique_check );
    PyObjectLocalVariable _python_var_opts( _python_str_plain_opts );
    PyObjectLocalVariable _python_var_model_name( _python_str_plain_model_name );
    PyObjectLocalVariable _python_var_field_name( _python_str_plain_field_name );
    PyObjectLocalVariable _python_var_field( _python_str_plain_field );
    PyObjectLocalVariable _python_var_field_label( _python_str_plain_field_label );
    PyObjectLocalVariable _python_var_field_labels( _python_str_plain_field_labels );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );

    // Actual function code.
    static PyFrameObject *frame_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_871b7af549366b7041e26feb93b4932e, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 889 );
        _python_var_opts.assign1( LOOKUP_ATTRIBUTE( _python_var_model_class.asObject(), _python_str_plain__meta ) );
        frame_guard.setLineNumber( 890 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_model_name.assign1( ( call1.assign( _mvar_django__db__models__base_capfirst.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_verbose_name ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 893 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( _python_var_unique_check.asObject() ) ).asObject(), _python_int_pos_1 ) )
        {
            frame_guard.setLineNumber( 894 );
            _python_var_field_name.assign1( LOOKUP_SUBSCRIPT_CONST( _python_var_unique_check.asObject(), _python_int_0, 0 ) );
            frame_guard.setLineNumber( 895 );
            {
                PyObjectTempKeeper1 call3;
                _python_var_field.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_get_field ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_field_name.asObject() ) ) );
            }
            frame_guard.setLineNumber( 896 );
            {
                PyObjectTempKeeper0 call5;
                _python_var_field_label.assign1( ( call5.assign( _mvar_django__db__models__base_capfirst.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_verbose_name ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 898 );
            {
                PyObjectTempKeeper1 call7;
                PyObjectTempKeeper1 call9;
                PyObjectTempKeeper1 make_dict11;
                PyObjectTempKeeper1 op15;
                return ( op15.assign( LOOKUP_SUBSCRIPT( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_error_messages ) ).asObject(), _python_unicode_plain_unique ) ), BINARY_OPERATION_REMAINDER( op15.asObject0(), PyObjectTemporary( ( make_dict11.assign( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_model_name.asObject() ) ) ), MAKE_DICT2( make_dict11.asObject0(), _python_unicode_plain_model_name, PyObjectTemporary( ( call9.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_field_label.asObject() ) ) ).asObject(), _python_unicode_plain_field_label ) ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 904 );
            _python_var_field_labels.assign1( impl_listcontr_1_of_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base( MAKE_ITERATOR( _python_var_unique_check.asObject() ), _python_var_f, _python_var_opts ) );
            frame_guard.setLineNumber( 905 );
            {
                PyObjectTempKeeper0 call17;
                PyObjectTempKeeper0 call18;
                _python_var_field_labels.assign1( ( call17.assign( _mvar_django__db__models__base_get_text_list.asObject0() ), call18.assign( _python_var_field_labels.asObject() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), call18.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__db__models__base__.asObject0(), _python_unicode_plain_and ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 906 );
            {
                PyObjectTempKeeper1 call20;
                PyObjectTempKeeper1 call22;
                PyObjectTempKeeper1 make_dict24;
                PyObjectTempKeeper1 op28;
                return ( op28.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__db__models__base__.asObject0(), _python_unicode_digest_6e5d390bd0b4bd60443d8cff715a1066 ) ), BINARY_OPERATION_REMAINDER( op28.asObject0(), PyObjectTemporary( ( make_dict24.assign( ( call20.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), _python_var_model_name.asObject() ) ) ), MAKE_DICT2( make_dict24.asObject0(), _python_unicode_plain_model_name, PyObjectTemporary( ( call22.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call22.asObject0(), _python_var_field_labels.asObject() ) ) ).asObject(), _python_unicode_plain_field_label ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_unique_check.updateLocalsDict( _python_var_model_class.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_field_labels.updateLocalsDict( _python_var_field_label.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_model_name.updateLocalsDict( _python_var_opts.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base );
           frame_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_model_class = NULL;
    PyObject *_python_par_unique_check = NULL;
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
                PyErr_Format( PyExc_TypeError, "unique_error_message() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "unique_error_message() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_model_class == key )
            {
                if (unlikely( _python_par_model_class ))
                {
                    PyErr_Format( PyExc_TypeError, "unique_error_message() got multiple values for keyword argument 'model_class'" );
                    goto error_exit;
                }

                _python_par_model_class = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_unique_check == key )
            {
                if (unlikely( _python_par_unique_check ))
                {
                    PyErr_Format( PyExc_TypeError, "unique_error_message() got multiple values for keyword argument 'unique_check'" );
                    goto error_exit;
                }

                _python_par_unique_check = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "unique_error_message() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_model_class, key ) )
            {
                if (unlikely( _python_par_model_class ))
                {
                    PyErr_Format( PyExc_TypeError, "unique_error_message() got multiple values for keyword argument 'model_class'" );
                    goto error_exit;
                }

                _python_par_model_class = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_unique_check, key ) )
            {
                if (unlikely( _python_par_unique_check ))
                {
                    PyErr_Format( PyExc_TypeError, "unique_error_message() got multiple values for keyword argument 'unique_check'" );
                    goto error_exit;
                }

                _python_par_unique_check = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "unique_error_message() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "unique_error_message() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "unique_error_message() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "unique_error_message() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "unique_error_message() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "unique_error_message() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unique_error_message() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "unique_error_message() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unique_error_message() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "unique_error_message() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "unique_error_message() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "unique_error_message() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "unique_error_message() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "unique_error_message() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_model_class != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unique_error_message() got multiple values for keyword argument 'model_class'" );
             goto error_exit;
         }

        _python_par_model_class = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_unique_check != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unique_error_message() got multiple values for keyword argument 'unique_check'" );
             goto error_exit;
         }

        _python_par_unique_check = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_model_class, _python_par_unique_check );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_model_class );
    Py_XDECREF( _python_par_unique_check );

    return NULL;
}

static PyObject *dparse_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_f,PyObjectLocalVariable &python_closure_opts )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 904 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 904 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_f.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 call3;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call3.assign( _mvar_django__db__models__base_capfirst.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( python_closure_opts.asObject(), _python_str_plain_get_field ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_f.asObject() ) ) ).asObject(), _python_str_plain_verbose_name ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_exclude )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_exclude( _python_str_plain_exclude, _python_par_exclude );
    PyObjectLocalVariable _python_var_errors( _python_str_plain_errors );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );

    // Actual function code.
    _python_var_errors.assign1( PyDict_New() );
    static PyFrameObject *frame_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_29_full_clean_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_992b883e2475ff4fe8071fc9561f2ab1, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 917 );
        if ( ( _python_var_exclude.asObject() == Py_None ) )
        {
            _python_var_exclude.assign1( PyList_New( 0 ) );
        }
        frame_guard.setLineNumber( 920 );
        try
        {
            frame_guard.setLineNumber( 921 );
            {
                PyObjectTempKeeper1 call3;
                DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_clean_fields ) ), CALL_FUNCTION( call3.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_exclude.asObject(), _python_str_plain_exclude ) ).asObject() ) ) );
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

            if ( _exception.matches( _mvar_django__db__models__base_ValidationError.asObject0() ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 923 );
                {
                    PyObjectTempKeeper1 call1;
                    _python_var_errors.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_update_error_dict ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_errors.asObject() ) ) );
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
        frame_guard.setLineNumber( 927 );
        try
        {
            frame_guard.setLineNumber( 928 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_clean ) ).asObject() ) );
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

            if ( _exception.matches( _mvar_django__db__models__base_ValidationError.asObject0() ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 930 );
                {
                    PyObjectTempKeeper1 call6;
                    _python_var_errors.assign1( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_update_error_dict ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_errors.asObject() ) ) );
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
        {
            frame_guard.setLineNumber( 933 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_errors.asObject(), _python_str_plain_keys ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 933 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_name.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 934 );
                {
                    PyObjectTempKeeper0 cmp10;
                    PyObjectTempKeeper0 cmp12;
                    if ( ( ( cmp10.assign( _python_var_name.asObject() ), RICH_COMPARE_BOOL_NE( cmp10.asObject0(), _mvar_django__db__models__base_NON_FIELD_ERRORS.asObject0() ) ) && ( cmp12.assign( _python_var_name.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp12.asObject0(), _python_var_exclude.asObject() ) ) ) )
                {
                    frame_guard.setLineNumber( 935 );
                    {
                        PyObjectTempKeeper1 call8;
                        DECREASE_REFCOUNT( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_exclude.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_name.asObject() ) ) );
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 936 );
        try
        {
            frame_guard.setLineNumber( 937 );
            {
                PyObjectTempKeeper1 call16;
                DECREASE_REFCOUNT( ( call16.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_validate_unique ) ), CALL_FUNCTION( call16.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_exclude.asObject(), _python_str_plain_exclude ) ).asObject() ) ) );
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

            if ( _exception.matches( _mvar_django__db__models__base_ValidationError.asObject0() ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 939 );
                {
                    PyObjectTempKeeper1 call14;
                    _python_var_errors.assign1( ( call14.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_update_error_dict ) ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), _python_var_errors.asObject() ) ) );
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
        frame_guard.setLineNumber( 941 );
        if ( CHECK_IF_TRUE( _python_var_errors.asObject() ) )
        {
            frame_guard.setLineNumber( 942 );
            {
                PyObjectTempKeeper0 call19;
                {
                    PyObjectTemporary tmp_exception_type( ( call19.assign( _mvar_django__db__models__base_ValidationError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), _python_var_errors.asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_exclude.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_errors.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base );
           frame_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_exclude = NULL;
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
                PyErr_Format( PyExc_TypeError, "full_clean() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "full_clean() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exclude == key )
            {
                if (unlikely( _python_par_exclude ))
                {
                    PyErr_Format( PyExc_TypeError, "full_clean() got multiple values for keyword argument 'exclude'" );
                    goto error_exit;
                }

                _python_par_exclude = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "full_clean() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exclude, key ) )
            {
                if (unlikely( _python_par_exclude ))
                {
                    PyErr_Format( PyExc_TypeError, "full_clean() got multiple values for keyword argument 'exclude'" );
                    goto error_exit;
                }

                _python_par_exclude = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "full_clean() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "full_clean() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "full_clean() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "full_clean() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "full_clean() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "full_clean() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "full_clean() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "full_clean() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "full_clean() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "full_clean() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "full_clean() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "full_clean() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "full_clean() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "full_clean() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_exclude != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "full_clean() got multiple values for keyword argument 'exclude'" );
             goto error_exit;
         }

        _python_par_exclude = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_exclude == NULL )
    {
        _python_par_exclude = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_exclude );
    }


    return impl_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_exclude );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_exclude );

    return NULL;
}

static PyObject *dparse_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_exclude )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_exclude( _python_str_plain_exclude, _python_par_exclude );
    PyObjectLocalVariable _python_var_errors( _python_str_plain_errors );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );
    PyObjectLocalVariable _python_var_raw_value( _python_str_plain_raw_value );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );

    // Actual function code.
    static PyFrameObject *frame_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base ) )
    {
        if ( frame_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base );
        }

        frame_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base = MAKE_FRAME( _codeobj_664c6fe60619f8f156ef631c252fb948, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 949 );
        if ( ( _python_var_exclude.asObject() == Py_None ) )
        {
            _python_var_exclude.assign1( PyList_New( 0 ) );
        }
        _python_var_errors.assign1( PyDict_New() );
        {
            frame_guard.setLineNumber( 953 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_fields ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 953 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_f.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 954 );
                {
                    PyObjectTempKeeper1 cmp1;
                    if ( ( cmp1.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), _python_var_exclude.asObject() ) ) )
                {
                    frame_guard.setLineNumber( 955 );
                    CONSIDER_THREADING(); continue;
                }
                }
                frame_guard.setLineNumber( 958 );
                {
                    PyObjectTempKeeper0 getattr3;
                    _python_var_raw_value.assign1( ( getattr3.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_attname ) ).asObject(), NULL ) ) );
                }
                frame_guard.setLineNumber( 959 );
                {
                    PyObjectTempKeeper0 cmp6;
                    if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_blank ) ).asObject() ) && ( cmp6.assign( _python_var_raw_value.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_empty_values ) ).asObject() ) ) ) )
                {
                    frame_guard.setLineNumber( 960 );
                    CONSIDER_THREADING(); continue;
                }
                }
                frame_guard.setLineNumber( 961 );
                try
                {
                    frame_guard.setLineNumber( 962 );
                    {
                        PyObjectTempKeeper1 call8;
                        PyObjectTempKeeper0 call9;
                        PyObjectTempKeeper0 setattr11;
                        PyObjectTempKeeper1 setattr12;
                        ( ( setattr11.assign( _python_var_self.asObject() ), setattr12.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_attname ) ), BUILTIN_SETATTR( setattr11.asObject0(), setattr12.asObject0(), PyObjectTemporary( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_clean ) ), call9.assign( _python_var_raw_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), call9.asObject0(), _python_var_self.asObject() ) ) ).asObject() ) ), Py_None );
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

                    if ( _exception.matches( _mvar_django__db__models__base_ValidationError.asObject0() ) )
                    {
                        frame_guard.detachFrame();
                        _python_var_e.assign0( _exception.getValue() );
                        frame_guard.setLineNumber( 964 );
                        {
                                PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_messages ) );
                                PyObject *tmp_subscribed = _python_var_errors.asObject();
                                SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() );
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

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 966 );
        if ( CHECK_IF_TRUE( _python_var_errors.asObject() ) )
        {
            frame_guard.setLineNumber( 967 );
            {
                PyObjectTempKeeper0 call14;
                {
                    PyObjectTemporary tmp_exception_type( ( call14.assign( _mvar_django__db__models__base_ValidationError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), _python_var_errors.asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_exclude.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_raw_value.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_errors.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base );
           frame_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_exclude = NULL;
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
                PyErr_Format( PyExc_TypeError, "clean_fields() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "clean_fields() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exclude == key )
            {
                if (unlikely( _python_par_exclude ))
                {
                    PyErr_Format( PyExc_TypeError, "clean_fields() got multiple values for keyword argument 'exclude'" );
                    goto error_exit;
                }

                _python_par_exclude = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "clean_fields() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exclude, key ) )
            {
                if (unlikely( _python_par_exclude ))
                {
                    PyErr_Format( PyExc_TypeError, "clean_fields() got multiple values for keyword argument 'exclude'" );
                    goto error_exit;
                }

                _python_par_exclude = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "clean_fields() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "clean_fields() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "clean_fields() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "clean_fields() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "clean_fields() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "clean_fields() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clean_fields() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "clean_fields() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clean_fields() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "clean_fields() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "clean_fields() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "clean_fields() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "clean_fields() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "clean_fields() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_exclude != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "clean_fields() got multiple values for keyword argument 'exclude'" );
             goto error_exit;
         }

        _python_par_exclude = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_exclude == NULL )
    {
        _python_par_exclude = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_exclude );
    }


    return impl_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base( self, _python_par_self, _python_par_exclude );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_exclude );

    return NULL;
}

static PyObject *dparse_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_method_set_order_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_ordered_obj, PyObject *_python_par_self, PyObject *_python_par_id_list, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_ordered_obj( _python_str_plain_ordered_obj, _python_par_ordered_obj );
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_id_list( _python_str_plain_id_list, _python_par_id_list );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalVariable _python_var_rel_val( _python_str_plain_rel_val );
    PyObjectLocalVariable _python_var_order_name( _python_str_plain_order_name );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_j( _python_str_plain_j );

    // Actual function code.
    static PyFrameObject *frame_function_5_method_set_order_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_5_method_set_order_of_module_django__db__models__base ) )
    {
        if ( frame_function_5_method_set_order_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_method_set_order_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_5_method_set_order_of_module_django__db__models__base );
        }

        frame_function_5_method_set_order_of_module_django__db__models__base = MAKE_FRAME( _codeobj_5501cd83260915e4f2366bf61e5149a8, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_5_method_set_order_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_5_method_set_order_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 977 );
        if ( ( _python_var_using.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 978 );
            _python_var_using.assign0( _mvar_django__db__models__base_DEFAULT_DB_ALIAS.asObject0() );
        }
        frame_guard.setLineNumber( 979 );
        {
            PyObjectTempKeeper0 getattr1;
            _python_var_rel_val.assign1( ( getattr1.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ordered_obj.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_order_with_respect_to ) ).asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_field_name ) ).asObject(), NULL ) ) );
        }
        frame_guard.setLineNumber( 980 );
        _python_var_order_name.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ordered_obj.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_order_with_respect_to ) ).asObject(), _python_str_plain_name ) );
        {
            frame_guard.setLineNumber( 983 );
            PyObject *_tmp_python_tmp_with_source;
            {
                PyObjectTempKeeper1 call4;
                _tmp_python_tmp_with_source = ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_transaction.asObject0(), _python_str_plain_commit_on_success_unless_managed ) ), CALL_FUNCTION( call4.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) );
            }
            PyObjectTemporary _python_tmp_with_source( _tmp_python_tmp_with_source );
            PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___exit__ ) );
            PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___enter__ ) ).asObject() ) );
            PyObject *_python_tmp_indicator = Py_True;
            PythonExceptionKeeper _caught_1;


            try
            {
                try
                {
                    {
                        frame_guard.setLineNumber( 984 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), _python_var_id_list.asObject() ) ).asObject() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 984 );
                                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_2 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                                {
                                    frame_guard.setLineNumber( 984 );
                                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                    _python_var_i.assign0( _python_tmp_element_1.asObject() );
                                    _python_var_j.assign0( _python_tmp_element_2.asObject() );
                                }
                            }
                            frame_guard.setLineNumber( 985 );
                            {
                                PyObjectTempKeeper1 call13;
                                PyObjectTempKeeper1 call_tmp11;
                                PyObjectTempKeeper0 make_dict7;
                                PyObjectTempKeeper0 make_dict9;
                                DECREASE_REFCOUNT( ( call13.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call_tmp11.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ordered_obj.asObject(), _python_str_plain_objects ) ).asObject(), _python_str_plain_filter ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp11.asObject(), ( make_dict7.assign( _python_var_j.asObject() ), make_dict9.assign( _python_var_rel_val.asObject() ), MAKE_DICT2( make_dict7.asObject0(), _python_unicode_plain_pk, make_dict9.asObject0(), _python_var_order_name.asObject() ) ) ) ) ).asObject(), _python_str_plain_update ) ), CALL_FUNCTION( call13.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_i.asObject(), _python_str_plain__order ) ).asObject() ) ) );
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

                    frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
                    ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
                    _exception.toExceptionHandler();

                    if ( _exception.matches( PyExc_BaseException ) )
                    {
                        frame_guard.detachFrame();
                        _python_tmp_indicator = Py_False;
                        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), _exception.getType(), _exception.getValue(), (PyObject *)_exception.getTraceback() ) ).asObject() ) )) )
                        {
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

                _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final code:
            if ( ( _python_tmp_indicator == Py_True ) )
            {
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), Py_None, Py_None, Py_None ) );
            }
            _caught_1.rethrow();
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_id_list.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_ordered_obj.updateLocalsDict( _python_var_j.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_order_name.updateLocalsDict( _python_var_rel_val.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_method_set_order_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_5_method_set_order_of_module_django__db__models__base );
           frame_function_5_method_set_order_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_5_method_set_order_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ordered_obj = NULL;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_id_list = NULL;
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
                PyErr_Format( PyExc_TypeError, "method_set_order() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_ordered_obj == key )
            {
                if (unlikely( _python_par_ordered_obj ))
                {
                    PyErr_Format( PyExc_TypeError, "method_set_order() got multiple values for keyword argument 'ordered_obj'" );
                    goto error_exit;
                }

                _python_par_ordered_obj = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "method_set_order() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_id_list == key )
            {
                if (unlikely( _python_par_id_list ))
                {
                    PyErr_Format( PyExc_TypeError, "method_set_order() got multiple values for keyword argument 'id_list'" );
                    goto error_exit;
                }

                _python_par_id_list = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "method_set_order() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ordered_obj, key ) )
            {
                if (unlikely( _python_par_ordered_obj ))
                {
                    PyErr_Format( PyExc_TypeError, "method_set_order() got multiple values for keyword argument 'ordered_obj'" );
                    goto error_exit;
                }

                _python_par_ordered_obj = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "method_set_order() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_id_list, key ) )
            {
                if (unlikely( _python_par_id_list ))
                {
                    PyErr_Format( PyExc_TypeError, "method_set_order() got multiple values for keyword argument 'id_list'" );
                    goto error_exit;
                }

                _python_par_id_list = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "method_set_order() got multiple values for keyword argument 'using'" );
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
                   "method_set_order() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 4 ))
    {
        if ( 4 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "method_set_order() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "method_set_order() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "method_set_order() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "method_set_order() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "method_set_order() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "method_set_order() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "method_set_order() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "method_set_order() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "method_set_order() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "method_set_order() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "method_set_order() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "method_set_order() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_ordered_obj != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "method_set_order() got multiple values for keyword argument 'ordered_obj'" );
             goto error_exit;
         }

        _python_par_ordered_obj = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "method_set_order() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_id_list != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "method_set_order() got multiple values for keyword argument 'id_list'" );
             goto error_exit;
         }

        _python_par_id_list = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "method_set_order() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_5_method_set_order_of_module_django__db__models__base( self, _python_par_ordered_obj, _python_par_self, _python_par_id_list, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_ordered_obj );
    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_id_list );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_5_method_set_order_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_5_method_set_order_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_method_set_order_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_method_get_order_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_ordered_obj, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_ordered_obj( _python_str_plain_ordered_obj, _python_par_ordered_obj );
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_rel_val( _python_str_plain_rel_val );
    PyObjectLocalVariable _python_var_order_name( _python_str_plain_order_name );
    PyObjectLocalVariable _python_var_pk_name( _python_str_plain_pk_name );
    PyObjectLocalVariable _python_var_r( _python_str_plain_r );

    // Actual function code.
    static PyFrameObject *frame_function_6_method_get_order_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_6_method_get_order_of_module_django__db__models__base ) )
    {
        if ( frame_function_6_method_get_order_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_method_get_order_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_6_method_get_order_of_module_django__db__models__base );
        }

        frame_function_6_method_get_order_of_module_django__db__models__base = MAKE_FRAME( _codeobj_e566628a509cbcd8b7da5949140e59b0, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_6_method_get_order_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_6_method_get_order_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 989 );
        {
            PyObjectTempKeeper0 getattr1;
            _python_var_rel_val.assign1( ( getattr1.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ordered_obj.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_order_with_respect_to ) ).asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_field_name ) ).asObject(), NULL ) ) );
        }
        frame_guard.setLineNumber( 990 );
        _python_var_order_name.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ordered_obj.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_order_with_respect_to ) ).asObject(), _python_str_plain_name ) );
        frame_guard.setLineNumber( 991 );
        _python_var_pk_name.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ordered_obj.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_pk ) ).asObject(), _python_str_plain_name ) );
        frame_guard.setLineNumber( 992 );
        {
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper1 call_tmp6;
            PyObjectTempKeeper0 make_dict4;
            return impl_listcontr_1_of_function_6_method_get_order_of_module_django__db__models__base( MAKE_ITERATOR( PyObjectTemporary( ( call8.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call_tmp6.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ordered_obj.asObject(), _python_str_plain_objects ) ).asObject(), _python_str_plain_filter ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp6.asObject(), ( make_dict4.assign( _python_var_rel_val.asObject() ), MAKE_DICT1( make_dict4.asObject0(), _python_var_order_name.asObject() ) ) ) ) ).asObject(), _python_str_plain_values ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_pk_name.asObject() ) ) ).asObject() ), _python_var_pk_name, _python_var_r );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_ordered_obj.updateLocalsDict( _python_var_r.updateLocalsDict( _python_var_pk_name.updateLocalsDict( _python_var_order_name.updateLocalsDict( _python_var_rel_val.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_method_get_order_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_6_method_get_order_of_module_django__db__models__base );
           frame_function_6_method_get_order_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_method_get_order_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ordered_obj = NULL;
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
                PyErr_Format( PyExc_TypeError, "method_get_order() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_ordered_obj == key )
            {
                if (unlikely( _python_par_ordered_obj ))
                {
                    PyErr_Format( PyExc_TypeError, "method_get_order() got multiple values for keyword argument 'ordered_obj'" );
                    goto error_exit;
                }

                _python_par_ordered_obj = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "method_get_order() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ordered_obj, key ) )
            {
                if (unlikely( _python_par_ordered_obj ))
                {
                    PyErr_Format( PyExc_TypeError, "method_get_order() got multiple values for keyword argument 'ordered_obj'" );
                    goto error_exit;
                }

                _python_par_ordered_obj = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "method_get_order() got multiple values for keyword argument 'self'" );
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
                   "method_get_order() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "method_get_order() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "method_get_order() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "method_get_order() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "method_get_order() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "method_get_order() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "method_get_order() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "method_get_order() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "method_get_order() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "method_get_order() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "method_get_order() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "method_get_order() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "method_get_order() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_ordered_obj != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "method_get_order() got multiple values for keyword argument 'ordered_obj'" );
             goto error_exit;
         }

        _python_par_ordered_obj = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "method_get_order() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_6_method_get_order_of_module_django__db__models__base( self, _python_par_ordered_obj, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_ordered_obj );
    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6_method_get_order_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6_method_get_order_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_method_get_order_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_6_method_get_order_of_module_django__db__models__base( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_pk_name,PyObjectLocalVariable &python_closure_r )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 992 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 992 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_r.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 subscr1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( subscr1.assign( python_closure_r.asObject() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), python_closure_pk_name.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_7_get_absolute_url_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_opts, PyObject *_python_par_func, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_opts( _python_str_plain_opts, _python_par_opts );
    PyObjectLocalParameterVariableNoDel _python_var_func( _python_str_plain_func, _python_par_func );
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_7_get_absolute_url_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_7_get_absolute_url_of_module_django__db__models__base ) )
    {
        if ( frame_function_7_get_absolute_url_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_get_absolute_url_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_7_get_absolute_url_of_module_django__db__models__base );
        }

        frame_function_7_get_absolute_url_of_module_django__db__models__base = MAKE_FRAME( _codeobj_29243a670e983a253e432c05ac219d7b, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_7_get_absolute_url_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_7_get_absolute_url_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1001 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper1 call_tmp6;
            PyObjectTempKeeper1 call_tmp7;
            PyObjectTempKeeper0 call_tmp8;
            PyObjectTempKeeper1 make_tuple1;
            return ( call_tmp6.assign( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_settings.asObject0(), _python_str_plain_ABSOLUTE_URL_OVERRIDES ) ).asObject(), _python_str_plain_get ) ), call4.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_fffb2b4b5e45eb8109d63f2497fbdbc1, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_app_label ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_model_name ) ).asObject() ) ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_func.asObject() ) ) ), call_tmp7.assign( MAKE_TUPLE1( _python_var_self.asObject() ) ), call_tmp8.assign( _python_var_args.asObject() ), impl_function_8_complex_call_helper_pos_star_list_star_dict_of_module___internal__( call_tmp6.asObject(), call_tmp7.asObject(), call_tmp8.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_func.updateLocalsDict( _python_var_opts.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_get_absolute_url_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_7_get_absolute_url_of_module_django__db__models__base );
           frame_function_7_get_absolute_url_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_get_absolute_url_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_opts = NULL;
    PyObject *_python_par_func = NULL;
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
                        PyErr_Format( PyExc_TypeError, "get_absolute_url() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_absolute_url() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "get_absolute_url() keywords must be strings" );
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

    // Check if argument func was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_func );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_func == NULL );

            _python_par_func = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_func );

            kw_found += 1;
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
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get_absolute_url() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_absolute_url() takes at least %d non-keyword arguments (%zd given)", 3, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "get_absolute_url() takes at least %d arguments (%zd given)", 3, args_given + kw_found );
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_opts != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_absolute_url() got multiple values for keyword argument 'opts'" );
             goto error_exit;
         }

        _python_par_opts = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_func != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_absolute_url() got multiple values for keyword argument 'func'" );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_absolute_url() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 2 ] );
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


    return impl_function_7_get_absolute_url_of_module_django__db__models__base( self, _python_par_opts, _python_par_func, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_opts );
    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_7_get_absolute_url_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_7_get_absolute_url_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), MAKE_TUPLE( &args[ 3 ], size > 3 ? size-3 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_7_get_absolute_url_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_8_Empty_of_module_django__db__models__base(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_base );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


static PyObject *impl_function_9_model_unpickle_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_model, PyObject *_python_par_attrs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_model( _python_str_plain_model, _python_par_model );
    PyObjectLocalParameterVariableNoDel _python_var_attrs( _python_str_plain_attrs, _python_par_attrs );
    PyObjectLocalVariable _python_var_cls( _python_str_plain_cls );

    // Actual function code.
    static PyFrameObject *frame_function_9_model_unpickle_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_9_model_unpickle_of_module_django__db__models__base ) )
    {
        if ( frame_function_9_model_unpickle_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_model_unpickle_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_9_model_unpickle_of_module_django__db__models__base );
        }

        frame_function_9_model_unpickle_of_module_django__db__models__base = MAKE_FRAME( _codeobj_06405f8ec194aa3b2d348b03e616259d, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_9_model_unpickle_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_9_model_unpickle_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1016 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            _python_var_cls.assign1( ( call1.assign( _mvar_django__db__models__base_deferred_class_factory.asObject0() ), call2.assign( _python_var_model.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_attrs.asObject() ) ) );
        }
        frame_guard.setLineNumber( 1017 );
        {
            PyObjectTempKeeper1 call4;
            return ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain___new__ ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_cls.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_attrs.updateLocalsDict( _python_var_model.updateLocalsDict( _python_var_cls.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_model_unpickle_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_9_model_unpickle_of_module_django__db__models__base );
           frame_function_9_model_unpickle_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_model_unpickle_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_model = NULL;
    PyObject *_python_par_attrs = NULL;
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
                PyErr_Format( PyExc_TypeError, "model_unpickle() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_model == key )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "model_unpickle() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_attrs == key )
            {
                if (unlikely( _python_par_attrs ))
                {
                    PyErr_Format( PyExc_TypeError, "model_unpickle() got multiple values for keyword argument 'attrs'" );
                    goto error_exit;
                }

                _python_par_attrs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_model, key ) )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "model_unpickle() got multiple values for keyword argument 'model'" );
                    goto error_exit;
                }

                _python_par_model = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_attrs, key ) )
            {
                if (unlikely( _python_par_attrs ))
                {
                    PyErr_Format( PyExc_TypeError, "model_unpickle() got multiple values for keyword argument 'attrs'" );
                    goto error_exit;
                }

                _python_par_attrs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "model_unpickle() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "model_unpickle() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "model_unpickle() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "model_unpickle() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "model_unpickle() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "model_unpickle() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "model_unpickle() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "model_unpickle() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "model_unpickle() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "model_unpickle() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "model_unpickle() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "model_unpickle() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "model_unpickle() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_model != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "model_unpickle() got multiple values for keyword argument 'model'" );
             goto error_exit;
         }

        _python_par_model = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_attrs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "model_unpickle() got multiple values for keyword argument 'attrs'" );
             goto error_exit;
         }

        _python_par_attrs = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_9_model_unpickle_of_module_django__db__models__base( self, _python_par_model, _python_par_attrs );

error_exit:;

    Py_XDECREF( _python_par_model );
    Py_XDECREF( _python_par_attrs );

    return NULL;
}

static PyObject *dparse_function_9_model_unpickle_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_9_model_unpickle_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_model_unpickle_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_unpickle_inner_exception_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject *_python_par_klass, PyObject *_python_par_exception_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_klass( _python_str_plain_klass, _python_par_klass );
    PyObjectLocalParameterVariableNoDel _python_var_exception_name( _python_str_plain_exception_name, _python_par_exception_name );
    PyObjectLocalVariable _python_var_exception( _python_str_plain_exception );

    // Actual function code.
    static PyFrameObject *frame_function_10_unpickle_inner_exception_of_module_django__db__models__base = NULL;

    if ( isFrameUnusable( frame_function_10_unpickle_inner_exception_of_module_django__db__models__base ) )
    {
        if ( frame_function_10_unpickle_inner_exception_of_module_django__db__models__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_unpickle_inner_exception_of_module_django__db__models__base" );
#endif
            Py_DECREF( frame_function_10_unpickle_inner_exception_of_module_django__db__models__base );
        }

        frame_function_10_unpickle_inner_exception_of_module_django__db__models__base = MAKE_FRAME( _codeobj_e9a7edd2822329dafbefbfeae32b9665, _module_django__db__models__base );
    }

    FrameGuard frame_guard( frame_function_10_unpickle_inner_exception_of_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_function_10_unpickle_inner_exception_of_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1023 );
        {
            PyObjectTempKeeper0 getattr1;
            _python_var_exception.assign1( ( getattr1.assign( _python_var_klass.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), _python_var_exception_name.asObject(), NULL ) ) );
        }
        frame_guard.setLineNumber( 1024 );
        {
            PyObjectTempKeeper1 call4;
            return ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_exception.asObject(), _python_str_plain___new__ ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_exception.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_exception_name.updateLocalsDict( _python_var_klass.updateLocalsDict( _python_var_exception.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_10_unpickle_inner_exception_of_module_django__db__models__base )
        {
           Py_DECREF( frame_function_10_unpickle_inner_exception_of_module_django__db__models__base );
           frame_function_10_unpickle_inner_exception_of_module_django__db__models__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_unpickle_inner_exception_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_klass = NULL;
    PyObject *_python_par_exception_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_klass == key )
            {
                if (unlikely( _python_par_klass ))
                {
                    PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() got multiple values for keyword argument 'klass'" );
                    goto error_exit;
                }

                _python_par_klass = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exception_name == key )
            {
                if (unlikely( _python_par_exception_name ))
                {
                    PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() got multiple values for keyword argument 'exception_name'" );
                    goto error_exit;
                }

                _python_par_exception_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_klass, key ) )
            {
                if (unlikely( _python_par_klass ))
                {
                    PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() got multiple values for keyword argument 'klass'" );
                    goto error_exit;
                }

                _python_par_klass = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exception_name, key ) )
            {
                if (unlikely( _python_par_exception_name ))
                {
                    PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() got multiple values for keyword argument 'exception_name'" );
                    goto error_exit;
                }

                _python_par_exception_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "unpickle_inner_exception() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_klass != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() got multiple values for keyword argument 'klass'" );
             goto error_exit;
         }

        _python_par_klass = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_exception_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unpickle_inner_exception() got multiple values for keyword argument 'exception_name'" );
             goto error_exit;
         }

        _python_par_exception_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_10_unpickle_inner_exception_of_module_django__db__models__base( self, _python_par_klass, _python_par_exception_name );

error_exit:;

    Py_XDECREF( _python_par_klass );
    Py_XDECREF( _python_par_exception_name );

    return NULL;
}

static PyObject *dparse_function_10_unpickle_inner_exception_of_module_django__db__models__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_10_unpickle_inner_exception_of_module_django__db__models__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_unpickle_inner_exception_of_module_django__db__models__base( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_10_serializable_value_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain_serializable_value,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_660bf5d7ade89a810dba3478e4b99656,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_808886c7d6aac2608d325dbfad9bd5a0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_10_unpickle_inner_exception_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_unpickle_inner_exception_of_module_django__db__models__base,
        dparse_function_10_unpickle_inner_exception_of_module_django__db__models__base,
        _python_str_plain_unpickle_inner_exception,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e9a7edd2822329dafbefbfeae32b9665,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_save_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_save_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_11_save_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain_save,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7174da9a756810c435461c7699000f0c,
        INCREASE_REFCOUNT( _python_tuple_false_false_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_ccea85b9987ff71fabc9452dc6dec1b9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_save_base_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_save_base_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_12_save_base_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain_save_base,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ebabdadbf8365c23a83bafeff46d1e25,
        INCREASE_REFCOUNT( _python_tuple_false_false_false_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_44c89902ec508cde52e7fe995b63bf2c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_13__save_parents_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain__save_parents,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a9ebc4915150ecd21712c0223e7b6d1c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_114c960bc6893a851fb23ef75124949a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14__save_table_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14__save_table_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_14__save_table_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain__save_table,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_064a4c8a0edcd280810232392e5ca15f,
        INCREASE_REFCOUNT( _python_tuple_false_none_false_false_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_a5bf663a1b9ad6fe85d6ee75e34949d4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15__do_update_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15__do_update_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_15__do_update_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain__do_update,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_edac24f63703f95520e109d0157cff00,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_d17a6cbba12de28c9b4a9128ed57200c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_16__do_insert_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain__do_insert,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6a27cc28beb3957bd7b6b70bbef9047a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_59fce2f4ec0b92efb29be1335aa64bce
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_delete_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_delete_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_17_delete_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain_delete,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4be0f6e04b658818a7f42f9c6e771783,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_18__get_FIELD_display_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain__get_FIELD_display,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e5696930ffb63975670982d818d2330f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_19__get_next_or_previous_by_FIELD_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain__get_next_or_previous_by_FIELD,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d61f7db3659350f4523d45f324e6056a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_ModelState_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_ModelState_of_module_django__db__models__base,
        dparse_function_1___init___of_class_3_ModelState_of_module_django__db__models__base,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0073086bea8f3ed68a6622aa9d202c14,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_4_Model_of_module_django__db__models__base,
        dparse_function_1___init___of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0e309877ed9790b0437a5828f921df85,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base,
        dparse_function_1___new___of_class_2_ModelBase_of_module_django__db__models__base,
        _python_str_plain___new__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0206af204c2a329bd8ad441d9ff5cf41,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base( PyObjectSharedLocalVariable &python_closure_attached_to, PyObjectSharedLocalVariable &python_closure_name )
{
    struct _context_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base_t *_python_context = new _context_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_attached_to.shareWith( python_closure_attached_to );
    _python_context->python_closure_name.shareWith( python_closure_name );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base,
        dparse_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base,
        _python_str_plain___reduce__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_19f913ef8e3cdebf82e68b0b0831c674,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None,
        _python_context,
        _context_function_1___reduce___of_function_1_subclass_exception_of_module_django__db__models__base_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base,
        dparse_function_1_make_foreign_order_accessors_of_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base,
        _python_str_plain_make_foreign_order_accessors,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8a296cc0a751f44dd917a7e9bc47b8b0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_subclass_exception_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_subclass_exception_of_module_django__db__models__base,
        dparse_function_1_subclass_exception_of_module_django__db__models__base,
        _python_str_plain_subclass_exception,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cc5c2e465ea5e5d93db1b4a7a77bb971,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_9fc3dd681327dd3265f693f67337dae3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_20__get_next_or_previous_in_order_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain__get_next_or_previous_in_order,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_16df00c795467f3f83ee7b0f2d1dc6fc,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_21_prepare_database_save_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain_prepare_database_save,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_916f3d4eae8cb6e47868d2fe65f58373,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_22_clean_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_22_clean_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_22_clean_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain_clean,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8c9b32aca85e2bc0cfe6a5021d55e04b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_92221996a7fa56ba78739fb8d9479b12
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_23_validate_unique_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain_validate_unique,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7d38582a7df1f295472e7cc49facf89a,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_9e44b9a2aca9bfeb6ac0191ab9a9fdfd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_24__get_unique_checks_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain__get_unique_checks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3d901ded629bab0d9658d3e20f854726,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_06267dc4380ba85e830769f2a66f4031
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_25__perform_unique_checks_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain__perform_unique_checks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cd0764dfe963575e5626536b3d80c828,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_26__perform_date_checks_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain__perform_date_checks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_72fd0524bc2098876a5038dc45139137,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_27_date_error_message_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain_date_error_message,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_df87f973293cfdbfff26475e275780d8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_28_unique_error_message_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain_unique_error_message,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_871b7af549366b7041e26feb93b4932e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_29_full_clean_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain_full_clean,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_992b883e2475ff4fe8071fc9561f2ab1,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_9dc270f063528c6360cbf75b3d14c8c0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___repr___of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___repr___of_class_4_Model_of_module_django__db__models__base,
        dparse_function_2___repr___of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_40908b5a3df7785cd52dd3a1c73d98b2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base,
        dparse_function_2___setstate___of_function_1_subclass_exception_of_module_django__db__models__base,
        _python_str_plain___setstate__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_568228fea9efd423368dc590e6ad31b3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base,
        dparse_function_2_copy_managers_of_class_2_ModelBase_of_module_django__db__models__base,
        _python_str_plain_copy_managers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_81c8fe3dba67977b2f9a4be34161cf95,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_30_clean_fields_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain_clean_fields,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_664c6fe60619f8f156ef631c252fb948,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_a95a5f53bdd8d15dbf2b70a4a09d23b3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___str___of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___str___of_class_4_Model_of_module_django__db__models__base,
        dparse_function_3___str___of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3c7774c103881e3e54ebe609910b53b2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base,
        dparse_function_3_add_to_class_of_class_2_ModelBase_of_module_django__db__models__base,
        _python_str_plain_add_to_class,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4d68ac6dc224855933a1e31f93f7b91e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___eq___of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___eq___of_class_4_Model_of_module_django__db__models__base,
        dparse_function_4___eq___of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain___eq__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fed7b0c1aec10135a88fbd99e34b3a87,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base,
        dparse_function_4__prepare_of_class_2_ModelBase_of_module_django__db__models__base,
        _python_str_plain__prepare,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a5a7d84d1c256299184cce4962d41949,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_66696e2174f5515244cdc4fb13033706
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5___ne___of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5___ne___of_class_4_Model_of_module_django__db__models__base,
        dparse_function_5___ne___of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain___ne__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_69a65bdfd6718aa64b1b6ae1f66f019d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_method_set_order_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_method_set_order_of_module_django__db__models__base,
        dparse_function_5_method_set_order_of_module_django__db__models__base,
        _python_str_plain_method_set_order,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5501cd83260915e4f2366bf61e5149a8,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6___hash___of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6___hash___of_class_4_Model_of_module_django__db__models__base,
        dparse_function_6___hash___of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain___hash__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b3a3f916001613c90481a5b2a08ff29a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_method_get_order_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_method_get_order_of_module_django__db__models__base,
        dparse_function_6_method_get_order_of_module_django__db__models__base,
        _python_str_plain_method_get_order,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e566628a509cbcd8b7da5949140e59b0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7___reduce___of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7___reduce___of_class_4_Model_of_module_django__db__models__base,
        dparse_function_7___reduce___of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain___reduce__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_dffb89490b4699e10e1869d9f9bf54fa,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_915f9f9489a20a63e0ac03be0761a042
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_get_absolute_url_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_get_absolute_url_of_module_django__db__models__base,
        dparse_function_7_get_absolute_url_of_module_django__db__models__base,
        _python_str_plain_get_absolute_url,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_29243a670e983a253e432c05ac219d7b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_8__get_pk_val_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain__get_pk_val,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_739cf5f0be3e513c00bcdcb6cea8b21e,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base,
        dparse_function_9__set_pk_val_of_class_4_Model_of_module_django__db__models__base,
        _python_str_plain__set_pk_val,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b7a61084651b1b4c34cfad7f682f4adf,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_model_unpickle_of_module_django__db__models__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_model_unpickle_of_module_django__db__models__base,
        dparse_function_9_model_unpickle_of_module_django__db__models__base,
        _python_str_plain_model_unpickle,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_06405f8ec194aa3b2d348b03e616259d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__base,
        _python_unicode_digest_d5716b23f07ce9f331a072cb183fb9de
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db.models.base",   /* m_name */
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

MOD_INIT_DECL( django__db__models__base )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db__models__base );
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

    // puts( "in initdjango__db__models__base" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db__models__base = Py_InitModule4(
        "django.db.models.base",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db__models__base = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db__models__base = (PyDictObject *)((PyModuleObject *)_module_django__db__models__base)->md_dict;

    assertObject( _module_django__db__models__base );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_b9e245945c635125fec435a5e0acf03b, _module_django__db__models__base );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db__models__base );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db__models__base != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_9b2087d47707a5832e2c4f99b8e0dbe3 );
    PyFrameObject *frame_module_django__db__models__base = MAKE_FRAME( _codeobj_6fc4adf7b5bcc5bcd96151001ce5d532, _module_django__db__models__base );

    FrameGuard frame_guard( frame_module_django__db__models__base );
    try
    {
        assert( Py_REFCNT( frame_module_django__db__models__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_copy, IMPORT_MODULE( _python_str_plain_copy, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_update_wrapper, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_functools, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_update_wrapper_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_update_wrapper ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_zip, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_91ddc8f1df73e2bf4268fd2741c1c593, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_zip_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_zip ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_django, IMPORT_MODULE( _python_str_digest_1c8eebaa8ea71ffa40946e237205aa8d, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_ObjectDoesNotExist, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_eb83ca50e31f769236d0994a37d0aa8d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ObjectDoesNotExist ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_MultipleObjectsReturned, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_eb83ca50e31f769236d0994a37d0aa8d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_MultipleObjectsReturned ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_FieldError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_eb83ca50e31f769236d0994a37d0aa8d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FieldError ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_ValidationError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_eb83ca50e31f769236d0994a37d0aa8d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ValidationError ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_NON_FIELD_ERRORS, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_eb83ca50e31f769236d0994a37d0aa8d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_NON_FIELD_ERRORS ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_AutoField, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_a15da66f68fa45171bbcd4f7a464bcd8, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_AutoField_str_plain_FieldDoesNotExist_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_AutoField ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_FieldDoesNotExist, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_a15da66f68fa45171bbcd4f7a464bcd8, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_AutoField_str_plain_FieldDoesNotExist_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FieldDoesNotExist ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_ForeignObjectRel, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_429a1979feac8a565a5c2aef69a2e26c, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_e5d09de08f2b4956d380cbd679777ed7_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ForeignObjectRel ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_ManyToOneRel, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_429a1979feac8a565a5c2aef69a2e26c, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_e5d09de08f2b4956d380cbd679777ed7_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ManyToOneRel ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_OneToOneField, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_429a1979feac8a565a5c2aef69a2e26c, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_e5d09de08f2b4956d380cbd679777ed7_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_OneToOneField ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_add_lazy_relation, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_429a1979feac8a565a5c2aef69a2e26c, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_e5d09de08f2b4956d380cbd679777ed7_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_add_lazy_relation ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_router, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_4b5bad336ea32e22da73e8c905f2d4e3_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_router ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_transaction, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_4b5bad336ea32e22da73e8c905f2d4e3_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_transaction ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_DatabaseError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_4b5bad336ea32e22da73e8c905f2d4e3_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DatabaseError ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_DEFAULT_DB_ALIAS, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_4b5bad336ea32e22da73e8c905f2d4e3_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DEFAULT_DB_ALIAS ) );
        frame_guard.setLineNumber( 17 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_Q, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7724c9571b8badb7e606430d6fe9b7eb, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_Q_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Q ) );
        frame_guard.setLineNumber( 18 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_DeferredAttribute, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_f82462a610d5c70ca3e4df549972e4d2, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_DeferredAttribute_str_plain_deferred_class_factory_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DeferredAttribute ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_deferred_class_factory, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_f82462a610d5c70ca3e4df549972e4d2, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_DeferredAttribute_str_plain_deferred_class_factory_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_deferred_class_factory ) );
        frame_guard.setLineNumber( 19 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_Collector, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_8638e65d7a0f1d4a4dd67c303bb33fe0, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_Collector_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Collector ) );
        frame_guard.setLineNumber( 20 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_Options, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7e7818dc6f41bbb279a796b99d13faf0, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_Options_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Options ) );
        frame_guard.setLineNumber( 21 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_signals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_cb8fece6bec5decd96c3feee6d1288d4, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_signals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_signals ) );
        frame_guard.setLineNumber( 22 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_register_models, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3499135d88f0bcb0b5db570911dd639, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_register_models_str_plain_get_model_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_register_models ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_get_model, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3499135d88f0bcb0b5db570911dd639, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_register_models_str_plain_get_model_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_model ) );
        frame_guard.setLineNumber( 23 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain__, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_ugettext_lazy_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ugettext_lazy ) );
        frame_guard.setLineNumber( 24 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_curry, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_curry_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_curry ) );
        frame_guard.setLineNumber( 25 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_force_str, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_force_str_str_plain_force_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_str ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_force_str_str_plain_force_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        frame_guard.setLineNumber( 26 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 27 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_get_text_list, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1863593e728059f3c0ba0d01334514dd, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_get_text_list_str_plain_capfirst_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_text_list ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_capfirst, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1863593e728059f3c0ba0d01334514dd, ((PyModuleObject *)_module_django__db__models__base)->md_dict, ((PyModuleObject *)_module_django__db__models__base)->md_dict, _python_list_str_plain_get_text_list_str_plain_capfirst_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_capfirst ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_subclass_exception, MAKE_FUNCTION_function_1_subclass_exception_of_module_django__db__models__base(  ) );
        {
            frame_guard.setLineNumber( 54 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_type ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_ModelBase_of_module_django__db__models__base(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__base___metaclass__.isInitialized( false ) ? _mvar_django__db__models__base___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_ModelBase, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_ModelBase, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 310 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_ModelState_of_module_django__db__models__base(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__base___metaclass__.isInitialized( false ) ? _mvar_django__db__models__base___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_ModelState, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_ModelState, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 322 );
            PyObject *_tmp_python_tmp_bases;
            {
                PyObjectTempKeeper1 call9;
                _tmp_python_tmp_bases = MAKE_TUPLE1( PyObjectTemporary( ( call9.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__base_six.asObject0(), _python_str_plain_with_metaclass ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _mvar_django__db__models__base_ModelBase.asObject0() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_bases( _tmp_python_tmp_bases );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_Model_of_module_django__db__models__base(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__base___metaclass__.isInitialized( false ) ? _mvar_django__db__models__base___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call13;
                _tmp_python_tmp_class = ( call11.assign( _python_tmp_metaclass.asObject() ), call13.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_str_plain_Model, call13.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_Model, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_method_set_order, MAKE_FUNCTION_function_5_method_set_order_of_module_django__db__models__base(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_method_get_order, MAKE_FUNCTION_function_6_method_get_order_of_module_django__db__models__base(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_get_absolute_url, MAKE_FUNCTION_function_7_get_absolute_url_of_module_django__db__models__base(  ) );
        {
            frame_guard.setLineNumber( 1008 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_8_Empty_of_module_django__db__models__base(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__base___metaclass__.isInitialized( false ) ? _mvar_django__db__models__base___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call15;
                PyObjectTempKeeper0 call17;
                _tmp_python_tmp_class = ( call15.assign( _python_tmp_metaclass.asObject() ), call17.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_str_plain_Empty, call17.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_Empty, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_model_unpickle, MAKE_FUNCTION_function_9_model_unpickle_of_module_django__db__models__base(  ) );
        frame_guard.setLineNumber( 1018 );
        SET_ATTRIBUTE( Py_True, _mvar_django__db__models__base_model_unpickle.asObject0(), _python_str_plain___safe_for_unpickle__ );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db__models__base)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__db__models__base, (Nuitka_StringObject *)_python_str_plain_unpickle_inner_exception, MAKE_FUNCTION_function_10_unpickle_inner_exception_of_module_django__db__models__base(  ) );

   return MOD_RETURN_VALUE( _module_django__db__models__base );
}
