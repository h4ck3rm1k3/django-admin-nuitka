// Generated code for Python source for module 'django.db.models.related'
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

// The _module_django__db__models__related is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db__models__related;
PyDictObject *_moduledict_django__db__models__related;

// The module level variables.
static PyObjectGlobalVariable_django__db__models__related _mvar_django__db__models__related_BLANK_CHOICE_DASH( &_module_django__db__models__related, &_python_str_plain_BLANK_CHOICE_DASH );
static PyObjectGlobalVariable_django__db__models__related _mvar_django__db__models__related___metaclass__( &_module_django__db__models__related, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__db__models__related _mvar_django__db__models__related_namedtuple( &_module_django__db__models__related, &_python_str_plain_namedtuple );
static PyObjectGlobalVariable_django__db__models__related _mvar_django__db__models__related_smart_text( &_module_django__db__models__related, &_python_str_plain_smart_text );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_RelatedObject_of_module_django__db__models__related(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_x );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_f, PyObjectLocalParameterVariableNoDel &python_closure_self );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related(  );


static PyObject *MAKE_FUNCTION_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related(  );


static PyObject *MAKE_FUNCTION_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related(  );


static PyObject *MAKE_FUNCTION_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related(  );


static PyObject *MAKE_FUNCTION_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related(  );


static PyObject *MAKE_FUNCTION_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related(  );


static PyObject *MAKE_FUNCTION_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_RelatedObject_of_module_django__db__models__related(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_get_choices( _python_str_plain_get_choices );
    PyObjectLocalVariable _python_var_get_db_prep_lookup( _python_str_plain_get_db_prep_lookup );
    PyObjectLocalVariable _python_var_editable_fields( _python_str_plain_editable_fields );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );
    PyObjectLocalVariable _python_var_get_accessor_name( _python_str_plain_get_accessor_name );
    PyObjectLocalVariable _python_var_get_cache_name( _python_str_plain_get_cache_name );
    PyObjectLocalVariable _python_var_get_path_info( _python_str_plain_get_path_info );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_related );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related(  ) );
    static PyFrameObject *frame_class_1_RelatedObject_of_module_django__db__models__related = NULL;

    if ( isFrameUnusable( frame_class_1_RelatedObject_of_module_django__db__models__related ) )
    {
        if ( frame_class_1_RelatedObject_of_module_django__db__models__related )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_1_RelatedObject_of_module_django__db__models__related" );
#endif
            Py_DECREF( frame_class_1_RelatedObject_of_module_django__db__models__related );
        }

        frame_class_1_RelatedObject_of_module_django__db__models__related = MAKE_FRAME( _codeobj_1f8ee63f9be8049c51eb22e13b9380cc, _module_django__db__models__related );
    }

    FrameGuard frame_guard( frame_class_1_RelatedObject_of_module_django__db__models__related );
    try
    {
        assert( Py_REFCNT( frame_class_1_RelatedObject_of_module_django__db__models__related ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 22 );
        _python_var_get_choices.assign1( MAKE_FUNCTION_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related( MAKE_TUPLE3( Py_True, _mvar_django__db__models__related_BLANK_CHOICE_DASH.asObject0(), Py_False ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_get_path_info.updateLocalsDict( _python_var_get_cache_name.updateLocalsDict( _python_var_get_accessor_name.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var_editable_fields.updateLocalsDict( _python_var_get_db_prep_lookup.updateLocalsDict( _python_var_get_choices.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_1_RelatedObject_of_module_django__db__models__related )
        {
           Py_DECREF( frame_class_1_RelatedObject_of_module_django__db__models__related );
           frame_class_1_RelatedObject_of_module_django__db__models__related = NULL;
        }

        throw;
    }
    _python_var_get_db_prep_lookup.assign1( MAKE_FUNCTION_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related(  ) );
    _python_var_editable_fields.assign1( MAKE_FUNCTION_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related(  ) );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related(  ) );
    _python_var_get_accessor_name.assign1( MAKE_FUNCTION_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related(  ) );
    _python_var_get_cache_name.assign1( MAKE_FUNCTION_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related(  ) );
    _python_var_get_path_info.assign1( MAKE_FUNCTION_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related(  ) );
    return _python_var_get_path_info.updateLocalsDict( _python_var_get_cache_name.updateLocalsDict( _python_var_get_accessor_name.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var_editable_fields.updateLocalsDict( _python_var_get_db_prep_lookup.updateLocalsDict( _python_var_get_choices.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_parent_model, PyObject *_python_par_model, PyObject *_python_par_field )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_parent_model( _python_str_plain_parent_model, _python_par_parent_model );
    PyObjectLocalParameterVariableNoDel _python_var_model( _python_str_plain_model, _python_par_model );
    PyObjectLocalParameterVariableNoDel _python_var_field( _python_str_plain_field, _python_par_field );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related ) )
    {
        if ( frame_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related );
        }

        frame_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related = MAKE_FRAME( _codeobj_887c9c01f3065d36e81d34bd8d0a2f85, _module_django__db__models__related );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 15 );
        {
                PyObject *tmp_identifier = _python_var_parent_model.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_parent_model );
        }
        frame_guard.setLineNumber( 16 );
        {
                PyObject *tmp_identifier = _python_var_model.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_model );
        }
        frame_guard.setLineNumber( 17 );
        {
                PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_model.asObject(), _python_str_plain__meta ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_opts );
        }
        frame_guard.setLineNumber( 18 );
        {
                PyObject *tmp_identifier = _python_var_field.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_field );
        }
        frame_guard.setLineNumber( 19 );
        {
            PyObjectTempKeeper1 make_tuple1;
            {
                PyObjectTemporary tmp_identifier( BINARY_OPERATION_REMAINDER( _python_str_digest_530ccab821bb1f0f9080f24abeeee028, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_opts ) ).asObject(), _python_str_plain_app_label ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_opts ) ).asObject(), _python_str_plain_model_name ) ).asObject() ) ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_name );
        }
        }
        frame_guard.setLineNumber( 20 );
        {
                PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_opts ) ).asObject(), _python_str_plain_model_name ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_var_name );
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
        frame_guard.getFrame0()->f_locals = _python_var_field.updateLocalsDict( _python_var_model.updateLocalsDict( _python_var_parent_model.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related )
        {
           Py_DECREF( frame_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related );
           frame_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_parent_model = NULL;
    PyObject *_python_par_model = NULL;
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
            if ( found == false && _python_str_plain_parent_model == key )
            {
                if (unlikely( _python_par_parent_model ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'parent_model'" );
                    goto error_exit;
                }

                _python_par_parent_model = value;

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
            if ( found == false && _python_str_plain_field == key )
            {
                if (unlikely( _python_par_field ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'field'" );
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
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_parent_model, key ) )
            {
                if (unlikely( _python_par_parent_model ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'parent_model'" );
                    goto error_exit;
                }

                _python_par_parent_model = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_field, key ) )
            {
                if (unlikely( _python_par_field ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'field'" );
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
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 4 ))
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
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
         if (unlikely( _python_par_parent_model != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'parent_model'" );
             goto error_exit;
         }

        _python_par_parent_model = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_model != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'model'" );
             goto error_exit;
         }

        _python_par_model = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_field != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'field'" );
             goto error_exit;
         }

        _python_par_field = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related( self, _python_par_self, _python_par_parent_model, _python_par_model, _python_par_field );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_parent_model );
    Py_XDECREF( _python_par_model );
    Py_XDECREF( _python_par_field );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_include_blank, PyObject *_python_par_blank_choice, PyObject *_python_par_limit_to_currently_related )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_include_blank( _python_str_plain_include_blank, _python_par_include_blank );
    PyObjectLocalParameterVariableNoDel _python_var_blank_choice( _python_str_plain_blank_choice, _python_par_blank_choice );
    PyObjectLocalParameterVariableNoDel _python_var_limit_to_currently_related( _python_str_plain_limit_to_currently_related, _python_par_limit_to_currently_related );
    PyObjectLocalVariable _python_var_first_choice( _python_str_plain_first_choice );
    PyObjectLocalVariable _python_var_queryset( _python_str_plain_queryset );
    PyObjectLocalVariable _python_var_lst( _python_str_plain_lst );
    PyObjectLocalVariable _python_var_x( _python_str_plain_x );

    // Actual function code.
    static PyFrameObject *frame_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related = NULL;

    if ( isFrameUnusable( frame_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related ) )
    {
        if ( frame_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related" );
#endif
            Py_DECREF( frame_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related );
        }

        frame_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related = MAKE_FRAME( _codeobj_d91e579b71e55ebd0385133d98987da8, _module_django__db__models__related );
    }

    FrameGuard frame_guard( frame_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related );
    try
    {
        assert( Py_REFCNT( frame_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 30 );
        _python_var_first_choice.assign1( ( CHECK_IF_TRUE( _python_var_include_blank.asObject() ) ? _python_var_blank_choice.asObject1() : PyList_New( 0 ) ) );
        frame_guard.setLineNumber( 31 );
        _python_var_queryset.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_model ) ).asObject(), _python_str_plain__default_manager ) ).asObject(), _python_str_plain_all ) ).asObject() ) );
        frame_guard.setLineNumber( 32 );
        if ( CHECK_IF_TRUE( _python_var_limit_to_currently_related.asObject() ) )
        {
            frame_guard.setLineNumber( 33 );
            {
                PyObjectTempKeeper1 call1;
                _python_var_queryset.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_queryset.asObject(), _python_str_plain_complex_filter ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( MAKE_DICT1( Py_False, PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_eb18df47b7af7e687604da24f2e50f7d, PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_parent_model ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_model_name ) ).asObject() ) ).asObject() ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 35 );
        _python_var_lst.assign1( impl_listcontr_1_of_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related( MAKE_ITERATOR( _python_var_queryset.asObject() ), _python_var_x ) );
        frame_guard.setLineNumber( 36 );
        {
            PyObjectTempKeeper0 op3;
            return ( op3.assign( _python_var_first_choice.asObject() ), BINARY_OPERATION_ADD( op3.asObject0(), _python_var_lst.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_limit_to_currently_related.updateLocalsDict( _python_var_blank_choice.updateLocalsDict( _python_var_include_blank.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_x.updateLocalsDict( _python_var_lst.updateLocalsDict( _python_var_queryset.updateLocalsDict( _python_var_first_choice.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related )
        {
           Py_DECREF( frame_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related );
           frame_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_include_blank = NULL;
    PyObject *_python_par_blank_choice = NULL;
    PyObject *_python_par_limit_to_currently_related = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_choices() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_choices() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_include_blank == key )
            {
                if (unlikely( _python_par_include_blank ))
                {
                    PyErr_Format( PyExc_TypeError, "get_choices() got multiple values for keyword argument 'include_blank'" );
                    goto error_exit;
                }

                _python_par_include_blank = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_blank_choice == key )
            {
                if (unlikely( _python_par_blank_choice ))
                {
                    PyErr_Format( PyExc_TypeError, "get_choices() got multiple values for keyword argument 'blank_choice'" );
                    goto error_exit;
                }

                _python_par_blank_choice = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_limit_to_currently_related == key )
            {
                if (unlikely( _python_par_limit_to_currently_related ))
                {
                    PyErr_Format( PyExc_TypeError, "get_choices() got multiple values for keyword argument 'limit_to_currently_related'" );
                    goto error_exit;
                }

                _python_par_limit_to_currently_related = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "get_choices() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_include_blank, key ) )
            {
                if (unlikely( _python_par_include_blank ))
                {
                    PyErr_Format( PyExc_TypeError, "get_choices() got multiple values for keyword argument 'include_blank'" );
                    goto error_exit;
                }

                _python_par_include_blank = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_blank_choice, key ) )
            {
                if (unlikely( _python_par_blank_choice ))
                {
                    PyErr_Format( PyExc_TypeError, "get_choices() got multiple values for keyword argument 'blank_choice'" );
                    goto error_exit;
                }

                _python_par_blank_choice = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_limit_to_currently_related, key ) )
            {
                if (unlikely( _python_par_limit_to_currently_related ))
                {
                    PyErr_Format( PyExc_TypeError, "get_choices() got multiple values for keyword argument 'limit_to_currently_related'" );
                    goto error_exit;
                }

                _python_par_limit_to_currently_related = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_choices() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_choices() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_choices() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_choices() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_choices() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_choices() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_choices() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_choices() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_choices() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get_choices() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_choices() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_choices() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_choices() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_choices() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_include_blank != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_choices() got multiple values for keyword argument 'include_blank'" );
             goto error_exit;
         }

        _python_par_include_blank = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_blank_choice != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_choices() got multiple values for keyword argument 'blank_choice'" );
             goto error_exit;
         }

        _python_par_blank_choice = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_limit_to_currently_related != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_choices() got multiple values for keyword argument 'limit_to_currently_related'" );
             goto error_exit;
         }

        _python_par_limit_to_currently_related = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_include_blank == NULL )
    {
        _python_par_include_blank = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_include_blank );
    }
    if ( _python_par_blank_choice == NULL )
    {
        _python_par_blank_choice = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_blank_choice );
    }
    if ( _python_par_limit_to_currently_related == NULL )
    {
        _python_par_limit_to_currently_related = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_limit_to_currently_related );
    }


    return impl_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related( self, _python_par_self, _python_par_include_blank, _python_par_blank_choice, _python_par_limit_to_currently_related );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_include_blank );
    Py_XDECREF( _python_par_blank_choice );
    Py_XDECREF( _python_par_limit_to_currently_related );

    return NULL;
}

static PyObject *dparse_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 35 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 35 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_x.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper1 make_tuple3;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( make_tuple3.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_x.asObject(), _python_str_plain__get_pk_val ) ).asObject() ) ), MAKE_TUPLE2( make_tuple3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__db__models__related_smart_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_x.asObject() ) ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_lookup_type, PyObject *_python_par_value, PyObject *_python_par_connection, PyObject *_python_par_prepared )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_lookup_type( _python_str_plain_lookup_type, _python_par_lookup_type );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_connection( _python_str_plain_connection, _python_par_connection );
    PyObjectLocalParameterVariableNoDel _python_var_prepared( _python_str_plain_prepared, _python_par_prepared );

    // Actual function code.
    static PyFrameObject *frame_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related = NULL;

    if ( isFrameUnusable( frame_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related ) )
    {
        if ( frame_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related" );
#endif
            Py_DECREF( frame_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related );
        }

        frame_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related = MAKE_FRAME( _codeobj_f07b9ddc9c9577163267453e33d77a24, _module_django__db__models__related );
    }

    FrameGuard frame_guard( frame_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related );
    try
    {
        assert( Py_REFCNT( frame_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 40 );
        {
            PyObjectTempKeeper1 call7;
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper0 make_dict1;
            PyObjectTempKeeper0 make_tuple5;
            return ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_field ) ).asObject(), _python_str_plain_get_db_prep_lookup ) ), call8.assign( ( make_tuple5.assign( _python_var_lookup_type.asObject() ), MAKE_TUPLE2( make_tuple5.asObject0(), _python_var_value.asObject() ) ) ), CALL_FUNCTION( call7.asObject0(), call8.asObject0(), PyObjectTemporary( ( make_dict1.assign( _python_var_connection.asObject() ), MAKE_DICT2( make_dict1.asObject0(), _python_str_plain_connection, _python_var_prepared.asObject(), _python_str_plain_prepared ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_prepared.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_lookup_type.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related )
        {
           Py_DECREF( frame_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related );
           frame_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_lookup_type = NULL;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_connection = NULL;
    PyObject *_python_par_prepared = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'lookup_type'" );
                    goto error_exit;
                }

                _python_par_lookup_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_connection == key )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_prepared == key )
            {
                if (unlikely( _python_par_prepared ))
                {
                    PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'prepared'" );
                    goto error_exit;
                }

                _python_par_prepared = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'lookup_type'" );
                    goto error_exit;
                }

                _python_par_lookup_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_connection, key ) )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_prepared, key ) )
            {
                if (unlikely( _python_par_prepared ))
                {
                    PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'prepared'" );
                    goto error_exit;
                }

                _python_par_prepared = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_db_prep_lookup() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 4 ))
    {
        if ( 5 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_lookup_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'lookup_type'" );
             goto error_exit;
         }

        _python_par_lookup_type = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_connection != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'connection'" );
             goto error_exit;
         }

        _python_par_connection = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_prepared != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_db_prep_lookup() got multiple values for keyword argument 'prepared'" );
             goto error_exit;
         }

        _python_par_prepared = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_prepared == NULL )
    {
        _python_par_prepared = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_prepared );
    }


    return impl_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related( self, _python_par_self, _python_par_lookup_type, _python_par_value, _python_par_connection, _python_par_prepared );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_lookup_type );
    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_connection );
    Py_XDECREF( _python_par_prepared );

    return NULL;
}

static PyObject *dparse_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );

    // Actual function code.
    static PyFrameObject *frame_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related = NULL;

    if ( isFrameUnusable( frame_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related ) )
    {
        if ( frame_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related" );
#endif
            Py_DECREF( frame_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related );
        }

        frame_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related = MAKE_FRAME( _codeobj_2b6166280639ba3947123f06eb4baa61, _module_django__db__models__related );
    }

    FrameGuard frame_guard( frame_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related );
    try
    {
        assert( Py_REFCNT( frame_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 45 );
        {
            PyObjectTempKeeper1 op1;
            return impl_listcontr_1_of_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related( MAKE_ITERATOR( PyObjectTemporary( ( op1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_opts ) ).asObject(), _python_str_plain_fields ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_opts ) ).asObject(), _python_str_plain_many_to_many ) ).asObject() ) ) ).asObject() ), _python_var_f, _python_var_self );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_f.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related )
        {
           Py_DECREF( frame_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related );
           frame_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "editable_fields() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "editable_fields() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "editable_fields() got multiple values for keyword argument 'self'" );
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
                   "editable_fields() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "editable_fields() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "editable_fields() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "editable_fields() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "editable_fields() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "editable_fields() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "editable_fields() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "editable_fields() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "editable_fields() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "editable_fields() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "editable_fields() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "editable_fields() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "editable_fields() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "editable_fields() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_f,PyObjectLocalParameterVariableNoDel &python_closure_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 45 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 45 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_f.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 cmp1;
                    if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_f.asObject(), _python_str_plain_editable ) ).asObject() ) && ( cmp1.assign( python_closure_f.asObject() ), RICH_COMPARE_BOOL_NE( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_self.asObject(), _python_str_plain_field ) ).asObject() ) ) ) )
                {
                    frame_guard.setLineNumber( 45 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_f.asObject() ), Py_None;
                }
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related = NULL;

    if ( isFrameUnusable( frame_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related ) )
    {
        if ( frame_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related" );
#endif
            Py_DECREF( frame_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related );
        }

        frame_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related = MAKE_FRAME( _codeobj_a08a051a8063fd0bef9303bb03d181f6, _module_django__db__models__related );
    }

    FrameGuard frame_guard( frame_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related );
    try
    {
        assert( Py_REFCNT( frame_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 48 );
        {
            PyObjectTempKeeper1 make_tuple1;
            return BINARY_OPERATION_REMAINDER( _python_str_digest_7526a2c67337f6dbeb08a09102ee33bf, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_field ) ).asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related )
        {
           Py_DECREF( frame_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related );
           frame_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related = NULL;

    if ( isFrameUnusable( frame_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related ) )
    {
        if ( frame_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related" );
#endif
            Py_DECREF( frame_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related );
        }

        frame_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related = MAKE_FRAME( _codeobj_abb3022d7b1f75ad7e4a3a90f4321e5d, _module_django__db__models__related );
    }

    FrameGuard frame_guard( frame_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related );
    try
    {
        assert( Py_REFCNT( frame_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 55 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_field ) ).asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_multiple ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 57 );
            {
                PyObjectTempKeeper1 cmp1;
                if ( ( CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_GETATTR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_field ) ).asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_symmetrical, Py_False ) ).asObject() ) && ( cmp1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_model ) ), RICH_COMPARE_BOOL_EQ( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_parent_model ) ).asObject() ) ) ) )
            {
                return INCREASE_REFCOUNT( Py_None );
            }
            }
            frame_guard.setLineNumber( 59 );
            {
                PyObjectTempKeeper1 keeper_1;
                return ( CHECK_IF_TRUE( keeper_1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_field ) ).asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_related_name ) ) ) ? keeper_1.asObject() : BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_opts ) ).asObject(), _python_str_plain_model_name ) ).asObject(), _python_str_plain__set ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 61 );
            {
                PyObjectTempKeeper1 keeper_2;
                return ( CHECK_IF_TRUE( keeper_2.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_field ) ).asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_related_name ) ) ) ? keeper_2.asObject() : LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_opts ) ).asObject(), _python_str_plain_model_name ) );
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

        if ( frame_guard.getFrame0() == frame_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related )
        {
           Py_DECREF( frame_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related );
           frame_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_accessor_name() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_accessor_name() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_accessor_name() got multiple values for keyword argument 'self'" );
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
                   "get_accessor_name() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_accessor_name() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_accessor_name() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_accessor_name() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_accessor_name() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_accessor_name() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_accessor_name() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_accessor_name() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_accessor_name() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_accessor_name() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_accessor_name() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_accessor_name() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_accessor_name() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_accessor_name() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related = NULL;

    if ( isFrameUnusable( frame_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related ) )
    {
        if ( frame_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related" );
#endif
            Py_DECREF( frame_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related );
        }

        frame_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related = MAKE_FRAME( _codeobj_81b9a784527240f8d4930f820cc52fb9, _module_django__db__models__related );
    }

    FrameGuard frame_guard( frame_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related );
    try
    {
        assert( Py_REFCNT( frame_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 64 );
        return BINARY_OPERATION_REMAINDER( _python_str_digest_a201d935d015c1b1ae515d11d2c39035, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related )
        {
           Py_DECREF( frame_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related );
           frame_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_cache_name() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_cache_name() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_cache_name() got multiple values for keyword argument 'self'" );
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
                   "get_cache_name() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_cache_name() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_cache_name() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_cache_name() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_cache_name() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_cache_name() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_cache_name() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_cache_name() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_cache_name() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_cache_name() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_cache_name() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_cache_name() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_cache_name() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_cache_name() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related = NULL;

    if ( isFrameUnusable( frame_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related ) )
    {
        if ( frame_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related" );
#endif
            Py_DECREF( frame_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related );
        }

        frame_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related = MAKE_FRAME( _codeobj_7c8702c40d8bb397e2ecda920b68c7a3, _module_django__db__models__related );
    }

    FrameGuard frame_guard( frame_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related );
    try
    {
        assert( Py_REFCNT( frame_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 67 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_field ) ).asObject(), _python_str_plain_get_reverse_path_info ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related )
        {
           Py_DECREF( frame_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related );
           frame_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_path_info() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_path_info() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_path_info() got multiple values for keyword argument 'self'" );
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
                   "get_path_info() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_path_info() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_path_info() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_path_info() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_path_info() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_path_info() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_path_info() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related,
        dparse_function_1___init___of_class_1_RelatedObject_of_module_django__db__models__related,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_887c9c01f3065d36e81d34bd8d0a2f85,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__related,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related,
        dparse_function_2_get_choices_of_class_1_RelatedObject_of_module_django__db__models__related,
        _python_str_plain_get_choices,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d91e579b71e55ebd0385133d98987da8,
        defaults,
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__related,
        _python_str_digest_fbf2ec3a0a023e56df97f3f782c9b575
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related,
        dparse_function_3_get_db_prep_lookup_of_class_1_RelatedObject_of_module_django__db__models__related,
        _python_str_plain_get_db_prep_lookup,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f07b9ddc9c9577163267453e33d77a24,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__related,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related,
        dparse_function_4_editable_fields_of_class_1_RelatedObject_of_module_django__db__models__related,
        _python_str_plain_editable_fields,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2b6166280639ba3947123f06eb4baa61,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__related,
        _python_str_digest_bc98ab7678e116cbe3719dab1b9dc23f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related,
        dparse_function_5___repr___of_class_1_RelatedObject_of_module_django__db__models__related,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a08a051a8063fd0bef9303bb03d181f6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__related,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related,
        dparse_function_6_get_accessor_name_of_class_1_RelatedObject_of_module_django__db__models__related,
        _python_str_plain_get_accessor_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_abb3022d7b1f75ad7e4a3a90f4321e5d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__related,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related,
        dparse_function_7_get_cache_name_of_class_1_RelatedObject_of_module_django__db__models__related,
        _python_str_plain_get_cache_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_81b9a784527240f8d4930f820cc52fb9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__related,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related,
        dparse_function_8_get_path_info_of_class_1_RelatedObject_of_module_django__db__models__related,
        _python_str_plain_get_path_info,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7c8702c40d8bb397e2ecda920b68c7a3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__related,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db.models.related",   /* m_name */
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

MOD_INIT_DECL( django__db__models__related )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db__models__related );
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

    // puts( "in initdjango__db__models__related" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db__models__related = Py_InitModule4(
        "django.db.models.related",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db__models__related = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db__models__related = (PyDictObject *)((PyModuleObject *)_module_django__db__models__related)->md_dict;

    assertObject( _module_django__db__models__related );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_df3af17e9a1169756a1e6ec2e5c5be9c, _module_django__db__models__related );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db__models__related );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db__models__related != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db__models__related, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__db__models__related, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_fadb82502b320c5b251bd48c37e083a2 );
    PyFrameObject *frame_module_django__db__models__related = MAKE_FRAME( _codeobj_91f96364457c6fe3c53064b65de322de, _module_django__db__models__related );

    FrameGuard frame_guard( frame_module_django__db__models__related );
    try
    {
        assert( Py_REFCNT( frame_module_django__db__models__related ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__related, (Nuitka_StringObject *)_python_str_plain_namedtuple, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_collections, ((PyModuleObject *)_module_django__db__models__related)->md_dict, ((PyModuleObject *)_module_django__db__models__related)->md_dict, _python_list_str_plain_namedtuple_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_namedtuple ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__related, (Nuitka_StringObject *)_python_str_plain_smart_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__db__models__related)->md_dict, ((PyModuleObject *)_module_django__db__models__related)->md_dict, _python_list_str_plain_smart_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_smart_text ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__related, (Nuitka_StringObject *)_python_str_plain_BLANK_CHOICE_DASH, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_a15da66f68fa45171bbcd4f7a464bcd8, ((PyModuleObject *)_module_django__db__models__related)->md_dict, ((PyModuleObject *)_module_django__db__models__related)->md_dict, _python_list_str_plain_BLANK_CHOICE_DASH_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_BLANK_CHOICE_DASH ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__related, (Nuitka_StringObject *)_python_str_plain_PathInfo, CALL_FUNCTION_WITH_ARGS( _mvar_django__db__models__related_namedtuple.asObject0(), _python_str_plain_PathInfo, _python_str_digest_0cdc057002b6bfe4e6cbae51a304a08c ) );
        {
            frame_guard.setLineNumber( 13 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_RelatedObject_of_module_django__db__models__related(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__related___metaclass__.isInitialized( false ) ? _mvar_django__db__models__related___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_RelatedObject, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__related, (Nuitka_StringObject *)_python_str_plain_RelatedObject, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db__models__related)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__db__models__related );
}
