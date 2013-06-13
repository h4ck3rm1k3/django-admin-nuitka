// Generated code for Python source for module 'django.db.models.sql.expressions'
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

// The _module_django__db__models__sql__expressions is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db__models__sql__expressions;
PyDictObject *_moduledict_django__db__models__sql__expressions;

// The module level variables.
static PyObjectGlobalVariable_django__db__models__sql__expressions _mvar_django__db__models__sql__expressions_FieldDoesNotExist( &_module_django__db__models__sql__expressions, &_python_str_plain_FieldDoesNotExist );
static PyObjectGlobalVariable_django__db__models__sql__expressions _mvar_django__db__models__sql__expressions_FieldError( &_module_django__db__models__sql__expressions, &_python_str_plain_FieldError );
static PyObjectGlobalVariable_django__db__models__sql__expressions _mvar_django__db__models__sql__expressions_LOOKUP_SEP( &_module_django__db__models__sql__expressions, &_python_str_plain_LOOKUP_SEP );
static PyObjectGlobalVariable_django__db__models__sql__expressions _mvar_django__db__models__sql__expressions___metaclass__( &_module_django__db__models__sql__expressions, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__db__models__sql__expressions _mvar_django__db__models__sql__expressions_copy( &_module_django__db__models__sql__expressions, &_python_str_plain_copy );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_f );


static PyObject *MAKE_FUNCTION_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  );


static PyObject *MAKE_FUNCTION_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  );


static PyObject *MAKE_FUNCTION_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  );


static PyObject *MAKE_FUNCTION_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  );


static PyObject *MAKE_FUNCTION_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  );


static PyObject *MAKE_FUNCTION_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  );


static PyObject *MAKE_FUNCTION_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  );


static PyObject *MAKE_FUNCTION_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  );


static PyObject *MAKE_FUNCTION_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_relabeled_clone( _python_str_plain_relabeled_clone );
    PyObjectLocalVariable _python_var_get_cols( _python_str_plain_get_cols );
    PyObjectLocalVariable _python_var_prepare( _python_str_plain_prepare );
    PyObjectLocalVariable _python_var_as_sql( _python_str_plain_as_sql );
    PyObjectLocalVariable _python_var_prepare_node( _python_str_plain_prepare_node );
    PyObjectLocalVariable _python_var_prepare_leaf( _python_str_plain_prepare_leaf );
    PyObjectLocalVariable _python_var_evaluate_node( _python_str_plain_evaluate_node );
    PyObjectLocalVariable _python_var_evaluate_leaf( _python_str_plain_evaluate_leaf );
    PyObjectLocalVariable _python_var_evaluate_date_modifier_node( _python_str_plain_evaluate_date_modifier_node );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_expressions );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  ) );
    _python_var_relabeled_clone.assign1( MAKE_FUNCTION_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  ) );
    _python_var_get_cols.assign1( MAKE_FUNCTION_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  ) );
    _python_var_prepare.assign1( MAKE_FUNCTION_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  ) );
    _python_var_as_sql.assign1( MAKE_FUNCTION_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  ) );
    _python_var_prepare_node.assign1( MAKE_FUNCTION_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  ) );
    _python_var_prepare_leaf.assign1( MAKE_FUNCTION_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  ) );
    _python_var_evaluate_node.assign1( MAKE_FUNCTION_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  ) );
    _python_var_evaluate_leaf.assign1( MAKE_FUNCTION_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  ) );
    _python_var_evaluate_date_modifier_node.assign1( MAKE_FUNCTION_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  ) );
    return _python_var_evaluate_date_modifier_node.updateLocalsDict( _python_var_evaluate_leaf.updateLocalsDict( _python_var_evaluate_node.updateLocalsDict( _python_var_prepare_leaf.updateLocalsDict( _python_var_prepare_node.updateLocalsDict( _python_var_as_sql.updateLocalsDict( _python_var_prepare.updateLocalsDict( _python_var_get_cols.updateLocalsDict( _python_var_relabeled_clone.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_expression, PyObject *_python_par_query, PyObject *_python_par_allow_joins, PyObject *_python_par_reuse )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_expression( _python_str_plain_expression, _python_par_expression );
    PyObjectLocalParameterVariableNoDel _python_var_query( _python_str_plain_query, _python_par_query );
    PyObjectLocalParameterVariableNoDel _python_var_allow_joins( _python_str_plain_allow_joins, _python_par_allow_joins );
    PyObjectLocalParameterVariableNoDel _python_var_reuse( _python_str_plain_reuse, _python_par_reuse );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) )
    {
        if ( frame_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
        }

        frame_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = MAKE_FRAME( _codeobj_005a1bdebc9fee58b552a49f7ce6749f, _module_django__db__models__sql__expressions );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 8 );
        {
                PyObject *tmp_identifier = _python_var_expression.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_expression );
        }
        frame_guard.setLineNumber( 9 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_query.asObject(), _python_str_plain_get_meta ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_opts );
        }
        frame_guard.setLineNumber( 10 );
        {
                PyObject *tmp_identifier = _python_var_reuse.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_reuse );
        }
        frame_guard.setLineNumber( 11 );
        SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain_cols );
        frame_guard.setLineNumber( 12 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper0 call3;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_expression ) ).asObject(), _python_str_plain_prepare ) ), call2.assign( _python_var_self.asObject() ), call3.assign( _python_var_query.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_allow_joins.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_reuse.updateLocalsDict( _python_var_allow_joins.updateLocalsDict( _python_var_query.updateLocalsDict( _python_var_expression.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
           Py_DECREF( frame_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
           frame_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_expression = NULL;
    PyObject *_python_par_query = NULL;
    PyObject *_python_par_allow_joins = NULL;
    PyObject *_python_par_reuse = NULL;
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
            if ( found == false && _python_str_plain_expression == key )
            {
                if (unlikely( _python_par_expression ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'expression'" );
                    goto error_exit;
                }

                _python_par_expression = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_query == key )
            {
                if (unlikely( _python_par_query ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'query'" );
                    goto error_exit;
                }

                _python_par_query = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_allow_joins == key )
            {
                if (unlikely( _python_par_allow_joins ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'allow_joins'" );
                    goto error_exit;
                }

                _python_par_allow_joins = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_reuse == key )
            {
                if (unlikely( _python_par_reuse ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'reuse'" );
                    goto error_exit;
                }

                _python_par_reuse = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_expression, key ) )
            {
                if (unlikely( _python_par_expression ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'expression'" );
                    goto error_exit;
                }

                _python_par_expression = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_query, key ) )
            {
                if (unlikely( _python_par_query ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'query'" );
                    goto error_exit;
                }

                _python_par_query = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_allow_joins, key ) )
            {
                if (unlikely( _python_par_allow_joins ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'allow_joins'" );
                    goto error_exit;
                }

                _python_par_allow_joins = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_reuse, key ) )
            {
                if (unlikely( _python_par_reuse ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'reuse'" );
                    goto error_exit;
                }

                _python_par_reuse = value;

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
    if (unlikely( args_given > 5 ))
    {
        if ( 5 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
    {
        if ( 5 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_expression != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'expression'" );
             goto error_exit;
         }

        _python_par_expression = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_query != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'query'" );
             goto error_exit;
         }

        _python_par_query = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_allow_joins != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'allow_joins'" );
             goto error_exit;
         }

        _python_par_allow_joins = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_reuse != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'reuse'" );
             goto error_exit;
         }

        _python_par_reuse = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_allow_joins == NULL )
    {
        _python_par_allow_joins = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_allow_joins );
    }
    if ( _python_par_reuse == NULL )
    {
        _python_par_reuse = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_reuse );
    }


    return impl_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, _python_par_self, _python_par_expression, _python_par_query, _python_par_allow_joins, _python_par_reuse );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_expression );
    Py_XDECREF( _python_par_query );
    Py_XDECREF( _python_par_allow_joins );
    Py_XDECREF( _python_par_reuse );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_change_map )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_change_map( _python_str_plain_change_map, _python_par_change_map );
    PyObjectLocalVariable _python_var_clone( _python_str_plain_clone );
    PyObjectLocalVariable _python_var_node( _python_str_plain_node );
    PyObjectLocalVariable _python_var_col( _python_str_plain_col );

    // Actual function code.
    static PyFrameObject *frame_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;

    if ( isFrameUnusable( frame_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) )
    {
        if ( frame_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions" );
#endif
            Py_DECREF( frame_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
        }

        frame_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = MAKE_FRAME( _codeobj_588022131954dfc4742036623fae8a40, _module_django__db__models__sql__expressions );
    }

    FrameGuard frame_guard( frame_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
    try
    {
        assert( Py_REFCNT( frame_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 15 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_clone.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__sql__expressions_copy.asObject0(), _python_str_plain_copy ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_self.asObject() ) ) );
        }
        frame_guard.setLineNumber( 16 );
        SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_clone.asObject(), _python_str_plain_cols );
        {
            frame_guard.setLineNumber( 17 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cols ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 17 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 17 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_node.assign0( _python_tmp_element_1.asObject() );
                        _python_var_col.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 18 );
                if ( HAS_ATTRIBUTE( _python_var_col.asObject(), _python_str_plain_relabeled_clone ) )
                {
                    frame_guard.setLineNumber( 19 );
                    {
                        PyObjectTempKeeper1 call3;
                        PyObjectTempKeeper1 call7;
                        PyObjectTempKeeper0 make_tuple5;
                        DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_clone.asObject(), _python_str_plain_cols ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( ( make_tuple5.assign( _python_var_node.asObject() ), MAKE_TUPLE2( make_tuple5.asObject0(), PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_col.asObject(), _python_str_plain_relabeled_clone ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_change_map.asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 21 );
                    {
                        PyObjectTempKeeper1 call10;
                        PyObjectTempKeeper1 call16;
                        PyObjectTempKeeper1 call9;
                        PyObjectTempKeeper1 make_tuple12;
                        PyObjectTempKeeper0 make_tuple14;
                        DECREASE_REFCOUNT( ( call16.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_clone.asObject(), _python_str_plain_cols ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), PyObjectTemporary( ( make_tuple14.assign( _python_var_node.asObject() ), MAKE_TUPLE2( make_tuple14.asObject0(), PyObjectTemporary( ( make_tuple12.assign( ( call9.assign( LOOKUP_ATTRIBUTE( _python_var_change_map.asObject(), _python_str_plain_get ) ), call10.assign( LOOKUP_SUBSCRIPT_CONST( _python_var_col.asObject(), _python_int_0, 0 ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), call10.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_col.asObject(), _python_int_0, 0 ) ).asObject() ) ) ), MAKE_TUPLE2( make_tuple12.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_col.asObject(), _python_int_pos_1, 1 ) ).asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 23 );
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
        frame_guard.getFrame0()->f_locals = _python_var_change_map.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_col.updateLocalsDict( _python_var_node.updateLocalsDict( _python_var_clone.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
           Py_DECREF( frame_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
           frame_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, _python_par_self, _python_par_change_map );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_change_map );

    return NULL;
}

static PyObject *dparse_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_cols( _python_str_plain_cols );
    PyObjectLocalVariable _python_var_node( _python_str_plain_node );
    PyObjectLocalVariable _python_var_col( _python_str_plain_col );

    // Actual function code.
    _python_var_cols.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;

    if ( isFrameUnusable( frame_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) )
    {
        if ( frame_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions" );
#endif
            Py_DECREF( frame_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
        }

        frame_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = MAKE_FRAME( _codeobj_e62ccc7b29db0869729a1bc0325f0899, _module_django__db__models__sql__expressions );
    }

    FrameGuard frame_guard( frame_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
    try
    {
        assert( Py_REFCNT( frame_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 27 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cols ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 27 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 27 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_node.assign0( _python_tmp_element_1.asObject() );
                        _python_var_col.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 28 );
                if ( HAS_ATTRIBUTE( _python_var_node.asObject(), _python_str_plain_get_cols ) )
                {
                    frame_guard.setLineNumber( 29 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_cols.asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_node.asObject(), _python_str_plain_get_cols ) ).asObject() ) ).asObject() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 30 );
                    if ( BUILTIN_ISINSTANCE_BOOL( _python_var_col.asObject(), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) )
                    {
                        frame_guard.setLineNumber( 31 );
                        {
                            PyObjectTempKeeper1 call3;
                            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_cols.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_col.asObject() ) ) );
                        }
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 32 );
        return _python_var_cols.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_col.updateLocalsDict( _python_var_node.updateLocalsDict( _python_var_cols.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
           Py_DECREF( frame_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
           frame_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_cols() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_cols() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_cols() got multiple values for keyword argument 'self'" );
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
                   "get_cols() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_cols() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_cols() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_cols() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_cols() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_cols() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_cols() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_cols() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_cols() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_cols() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_cols() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_cols() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_cols() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_cols() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;

    if ( isFrameUnusable( frame_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) )
    {
        if ( frame_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions" );
#endif
            Py_DECREF( frame_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
        }

        frame_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = MAKE_FRAME( _codeobj_3fb077499a5131e9cee7dda52f776d63, _module_django__db__models__sql__expressions );
    }

    FrameGuard frame_guard( frame_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
    try
    {
        assert( Py_REFCNT( frame_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 35 );
        return _python_var_self.asObject1();
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

        if ( frame_guard.getFrame0() == frame_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
           Py_DECREF( frame_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
           frame_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "prepare() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "prepare() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "prepare() got multiple values for keyword argument 'self'" );
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
                   "prepare() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "prepare() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "prepare() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "prepare() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "prepare() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "prepare() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "prepare() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "prepare() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "prepare() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "prepare() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "prepare() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "prepare() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "prepare() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "prepare() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_qn, PyObject *_python_par_connection )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_qn( _python_str_plain_qn, _python_par_qn );
    PyObjectLocalParameterVariableNoDel _python_var_connection( _python_str_plain_connection, _python_par_connection );

    // Actual function code.
    static PyFrameObject *frame_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;

    if ( isFrameUnusable( frame_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) )
    {
        if ( frame_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions" );
#endif
            Py_DECREF( frame_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
        }

        frame_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = MAKE_FRAME( _codeobj_1df111b3a6563aa7c16311e7fa84189c, _module_django__db__models__sql__expressions );
    }

    FrameGuard frame_guard( frame_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
    try
    {
        assert( Py_REFCNT( frame_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 38 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper0 call3;
            return ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_expression ) ).asObject(), _python_str_plain_evaluate ) ), call2.assign( _python_var_self.asObject() ), call3.assign( _python_var_qn.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_connection.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_connection.updateLocalsDict( _python_var_qn.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
           Py_DECREF( frame_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
           frame_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, _python_par_self, _python_par_qn, _python_par_connection );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_qn );
    Py_XDECREF( _python_par_connection );

    return NULL;
}

static PyObject *dparse_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_node, PyObject *_python_par_query, PyObject *_python_par_allow_joins )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_node( _python_str_plain_node, _python_par_node );
    PyObjectLocalParameterVariableNoDel _python_var_query( _python_str_plain_query, _python_par_query );
    PyObjectLocalParameterVariableNoDel _python_var_allow_joins( _python_str_plain_allow_joins, _python_par_allow_joins );
    PyObjectLocalVariable _python_var_child( _python_str_plain_child );

    // Actual function code.
    static PyFrameObject *frame_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;

    if ( isFrameUnusable( frame_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) )
    {
        if ( frame_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions" );
#endif
            Py_DECREF( frame_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
        }

        frame_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = MAKE_FRAME( _codeobj_76c2819d4157ac5dba0a0f3bde4bde38, _module_django__db__models__sql__expressions );
    }

    FrameGuard frame_guard( frame_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
    try
    {
        assert( Py_REFCNT( frame_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 45 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_node.asObject(), _python_str_plain_children ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 45 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_child.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 46 );
                if ( HAS_ATTRIBUTE( _python_var_child.asObject(), _python_str_plain_prepare ) )
                {
                    frame_guard.setLineNumber( 47 );
                    {
                        PyObjectTempKeeper1 call1;
                        PyObjectTempKeeper0 call2;
                        PyObjectTempKeeper0 call3;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_child.asObject(), _python_str_plain_prepare ) ), call2.assign( _python_var_self.asObject() ), call3.assign( _python_var_query.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_allow_joins.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_allow_joins.updateLocalsDict( _python_var_query.updateLocalsDict( _python_var_node.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_child.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
           Py_DECREF( frame_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
           frame_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_node = NULL;
    PyObject *_python_par_query = NULL;
    PyObject *_python_par_allow_joins = NULL;
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
                PyErr_Format( PyExc_TypeError, "prepare_node() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "prepare_node() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_node == key )
            {
                if (unlikely( _python_par_node ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_node() got multiple values for keyword argument 'node'" );
                    goto error_exit;
                }

                _python_par_node = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_query == key )
            {
                if (unlikely( _python_par_query ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_node() got multiple values for keyword argument 'query'" );
                    goto error_exit;
                }

                _python_par_query = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_allow_joins == key )
            {
                if (unlikely( _python_par_allow_joins ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_node() got multiple values for keyword argument 'allow_joins'" );
                    goto error_exit;
                }

                _python_par_allow_joins = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_node() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_node, key ) )
            {
                if (unlikely( _python_par_node ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_node() got multiple values for keyword argument 'node'" );
                    goto error_exit;
                }

                _python_par_node = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_query, key ) )
            {
                if (unlikely( _python_par_query ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_node() got multiple values for keyword argument 'query'" );
                    goto error_exit;
                }

                _python_par_query = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_allow_joins, key ) )
            {
                if (unlikely( _python_par_allow_joins ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_node() got multiple values for keyword argument 'allow_joins'" );
                    goto error_exit;
                }

                _python_par_allow_joins = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "prepare_node() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "prepare_node() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "prepare_node() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "prepare_node() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "prepare_node() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "prepare_node() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "prepare_node() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "prepare_node() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "prepare_node() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "prepare_node() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "prepare_node() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "prepare_node() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "prepare_node() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "prepare_node() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_node != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "prepare_node() got multiple values for keyword argument 'node'" );
             goto error_exit;
         }

        _python_par_node = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_query != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "prepare_node() got multiple values for keyword argument 'query'" );
             goto error_exit;
         }

        _python_par_query = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_allow_joins != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "prepare_node() got multiple values for keyword argument 'allow_joins'" );
             goto error_exit;
         }

        _python_par_allow_joins = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, _python_par_self, _python_par_node, _python_par_query, _python_par_allow_joins );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_node );
    Py_XDECREF( _python_par_query );
    Py_XDECREF( _python_par_allow_joins );

    return NULL;
}

static PyObject *dparse_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_node, PyObject *_python_par_query, PyObject *_python_par_allow_joins )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_node( _python_str_plain_node, _python_par_node );
    PyObjectLocalParameterVariableNoDel _python_var_query( _python_str_plain_query, _python_par_query );
    PyObjectLocalParameterVariableNoDel _python_var_allow_joins( _python_str_plain_allow_joins, _python_par_allow_joins );
    PyObjectLocalVariable _python_var_field_list( _python_str_plain_field_list );
    PyObjectLocalVariable _python_var_field( _python_str_plain_field );
    PyObjectLocalVariable _python_var_sources( _python_str_plain_sources );
    PyObjectLocalVariable _python_var_opts( _python_str_plain_opts );
    PyObjectLocalVariable _python_var_join_list( _python_str_plain_join_list );
    PyObjectLocalVariable _python_var_path( _python_str_plain_path );
    PyObjectLocalVariable _python_var_targets( _python_str_plain_targets );
    PyObjectLocalVariable _python_var__( _python_str_plain__ );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );

    // Actual function code.
    static PyFrameObject *frame_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;

    if ( isFrameUnusable( frame_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) )
    {
        if ( frame_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions" );
#endif
            Py_DECREF( frame_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
        }

        frame_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = MAKE_FRAME( _codeobj_014cb056767a69f1884241582a658a89, _module_django__db__models__sql__expressions );
    }

    FrameGuard frame_guard( frame_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
    try
    {
        assert( Py_REFCNT( frame_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 50 );
        {
            PyObjectTempKeeper0 cmp1;
            if ( ( (!( CHECK_IF_TRUE( _python_var_allow_joins.asObject() ) )) && ( cmp1.assign( _mvar_django__db__models__sql__expressions_LOOKUP_SEP.asObject0() ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_node.asObject(), _python_str_plain_name ) ).asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 51 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__db__models__sql__expressions_FieldError.asObject0(), _python_str_digest_0096c2bd757ea361ba3cea46be4deed1 ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        }
        frame_guard.setLineNumber( 53 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_field_list.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_node.asObject(), _python_str_plain_name ) ).asObject(), _python_str_plain_split ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _mvar_django__db__models__sql__expressions_LOOKUP_SEP.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 54 );
        {
            PyObjectTempKeeper1 cmp32;
            if ( ( cmp32.assign( LOOKUP_ATTRIBUTE( _python_var_node.asObject(), _python_str_plain_name ) ), SEQUENCE_CONTAINS_BOOL( cmp32.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_query.asObject(), _python_str_plain_aggregates ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 55 );
            {
                PyObjectTempKeeper1 call9;
                PyObjectTempKeeper0 make_tuple7;
                PyObjectTempKeeper1 subscr5;
                DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cols ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( ( make_tuple7.assign( _python_var_node.asObject() ), MAKE_TUPLE2( make_tuple7.asObject0(), PyObjectTemporary( ( subscr5.assign( LOOKUP_ATTRIBUTE( _python_var_query.asObject(), _python_str_plain_aggregate_select ) ), LOOKUP_SUBSCRIPT( subscr5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_node.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 57 );
            try
            {
                {
                    frame_guard.setLineNumber( 58 );
                    PyObject *_tmp_python_tmp_source_iter;
                    {
                        PyObjectTempKeeper1 call15;
                        PyObjectTempKeeper0 call16;
                        PyObjectTempKeeper1 call17;
                        PyObjectTempKeeper1 call18;
                        _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call15.assign( LOOKUP_ATTRIBUTE( _python_var_query.asObject(), _python_str_plain_setup_joins ) ), call16.assign( _python_var_field_list.asObject() ), call17.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_query.asObject(), _python_str_plain_get_meta ) ).asObject() ) ), call18.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_query.asObject(), _python_str_plain_get_initial_alias ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), call16.asObject0(), call17.asObject0(), call18.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_reuse ) ).asObject() ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                    PyObjectTemporary _python_tmp_element_4( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 3 ) );
                    PyObjectTemporary _python_tmp_element_5( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 4 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 5 );
                    _python_var_field.assign0( _python_tmp_element_1.asObject() );
                    _python_var_sources.assign0( _python_tmp_element_2.asObject() );
                    _python_var_opts.assign0( _python_tmp_element_3.asObject() );
                    _python_var_join_list.assign0( _python_tmp_element_4.asObject() );
                    _python_var_path.assign0( _python_tmp_element_5.asObject() );
                }
                {
                    frame_guard.setLineNumber( 61 );
                    PyObject *_tmp_python_tmp_source_iter;
                    {
                        PyObjectTempKeeper1 call20;
                        PyObjectTempKeeper0 call21;
                        PyObjectTempKeeper0 call22;
                        _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call20.assign( LOOKUP_ATTRIBUTE( _python_var_query.asObject(), _python_str_plain_trim_joins ) ), call21.assign( _python_var_sources.asObject() ), call22.assign( _python_var_join_list.asObject() ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), call21.asObject0(), call22.asObject0(), _python_var_path.asObject() ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                    _python_var_targets.assign0( _python_tmp_element_1.asObject() );
                    _python_var__.assign0( _python_tmp_element_2.asObject() );
                    _python_var_join_list.assign0( _python_tmp_element_3.asObject() );
                }
                frame_guard.setLineNumber( 62 );
                if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_reuse ) ).asObject() != Py_None ) )
                {
                    frame_guard.setLineNumber( 63 );
                    {
                        PyObjectTempKeeper1 call24;
                        DECREASE_REFCOUNT( ( call24.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_reuse ) ).asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call24.asObject0(), _python_var_join_list.asObject() ) ) );
                    }
                }
                {
                    frame_guard.setLineNumber( 64 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_targets.asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 64 );
                            PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_1 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                            _python_var_t.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 65 );
                        {
                            PyObjectTempKeeper1 call30;
                            PyObjectTempKeeper1 make_tuple26;
                            PyObjectTempKeeper0 make_tuple28;
                            DECREASE_REFCOUNT( ( call30.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cols ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call30.asObject0(), PyObjectTemporary( ( make_tuple28.assign( _python_var_node.asObject() ), MAKE_TUPLE2( make_tuple28.asObject0(), PyObjectTemporary( ( make_tuple26.assign( LOOKUP_SUBSCRIPT_CONST( _python_var_join_list.asObject(), _python_int_neg_1, -1 ) ), MAKE_TUPLE2( make_tuple26.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_column ) ).asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
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

                if ( _exception.matches( _mvar_django__db__models__sql__expressions_FieldDoesNotExist.asObject0() ) )
                {
                    frame_guard.detachFrame();
                    frame_guard.setLineNumber( 67 );
                    {
                        PyObjectTempKeeper0 call13;
                        PyObjectTempKeeper1 make_tuple11;
                        {
                            PyObjectTemporary tmp_exception_type( ( call13.assign( _mvar_django__db__models__sql__expressions_FieldError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_d3414b4f90d28ed46f48d17547438257, PyObjectTemporary( ( make_tuple11.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ), MAKE_TUPLE2( make_tuple11.asObject0(), PyObjectTemporary( impl_listcontr_1_of_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_opts ) ).asObject(), _python_str_plain_fields ) ).asObject() ), _python_var_f ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_allow_joins.updateLocalsDict( _python_var_query.updateLocalsDict( _python_var_node.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var__.updateLocalsDict( _python_var_targets.updateLocalsDict( _python_var_path.updateLocalsDict( _python_var_join_list.updateLocalsDict( _python_var_opts.updateLocalsDict( _python_var_sources.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_field_list.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
           Py_DECREF( frame_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
           frame_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_node = NULL;
    PyObject *_python_par_query = NULL;
    PyObject *_python_par_allow_joins = NULL;
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
                PyErr_Format( PyExc_TypeError, "prepare_leaf() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "prepare_leaf() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_node == key )
            {
                if (unlikely( _python_par_node ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_leaf() got multiple values for keyword argument 'node'" );
                    goto error_exit;
                }

                _python_par_node = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_query == key )
            {
                if (unlikely( _python_par_query ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_leaf() got multiple values for keyword argument 'query'" );
                    goto error_exit;
                }

                _python_par_query = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_allow_joins == key )
            {
                if (unlikely( _python_par_allow_joins ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_leaf() got multiple values for keyword argument 'allow_joins'" );
                    goto error_exit;
                }

                _python_par_allow_joins = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_leaf() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_node, key ) )
            {
                if (unlikely( _python_par_node ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_leaf() got multiple values for keyword argument 'node'" );
                    goto error_exit;
                }

                _python_par_node = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_query, key ) )
            {
                if (unlikely( _python_par_query ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_leaf() got multiple values for keyword argument 'query'" );
                    goto error_exit;
                }

                _python_par_query = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_allow_joins, key ) )
            {
                if (unlikely( _python_par_allow_joins ))
                {
                    PyErr_Format( PyExc_TypeError, "prepare_leaf() got multiple values for keyword argument 'allow_joins'" );
                    goto error_exit;
                }

                _python_par_allow_joins = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "prepare_leaf() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "prepare_leaf() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "prepare_leaf() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "prepare_leaf() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "prepare_leaf() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "prepare_leaf() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "prepare_leaf() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "prepare_leaf() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "prepare_leaf() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "prepare_leaf() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "prepare_leaf() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "prepare_leaf() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "prepare_leaf() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "prepare_leaf() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_node != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "prepare_leaf() got multiple values for keyword argument 'node'" );
             goto error_exit;
         }

        _python_par_node = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_query != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "prepare_leaf() got multiple values for keyword argument 'query'" );
             goto error_exit;
         }

        _python_par_query = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_allow_joins != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "prepare_leaf() got multiple values for keyword argument 'allow_joins'" );
             goto error_exit;
         }

        _python_par_allow_joins = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, _python_par_self, _python_par_node, _python_par_query, _python_par_allow_joins );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_node );
    Py_XDECREF( _python_par_query );
    Py_XDECREF( _python_par_allow_joins );

    return NULL;
}

static PyObject *dparse_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_f )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 69 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 69 );
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


static PyObject *impl_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_node, PyObject *_python_par_qn, PyObject *_python_par_connection )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_node( _python_str_plain_node, _python_par_node );
    PyObjectLocalParameterVariableNoDel _python_var_qn( _python_str_plain_qn, _python_par_qn );
    PyObjectLocalParameterVariableNoDel _python_var_connection( _python_str_plain_connection, _python_par_connection );
    PyObjectLocalVariable _python_var_expressions( _python_str_plain_expressions );
    PyObjectLocalVariable _python_var_expression_params( _python_str_plain_expression_params );
    PyObjectLocalVariable _python_var_child( _python_str_plain_child );
    PyObjectLocalVariable _python_var_sql( _python_str_plain_sql );
    PyObjectLocalVariable _python_var_params( _python_str_plain_params );
    PyObjectLocalVariable _python_var_format( _python_str_plain_format );

    // Actual function code.
    _python_var_expressions.assign1( PyList_New( 0 ) );
    _python_var_expression_params.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;

    if ( isFrameUnusable( frame_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) )
    {
        if ( frame_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions" );
#endif
            Py_DECREF( frame_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
        }

        frame_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = MAKE_FRAME( _codeobj_f20619205c944f2f669b3d1513581178, _module_django__db__models__sql__expressions );
    }

    FrameGuard frame_guard( frame_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
    try
    {
        assert( Py_REFCNT( frame_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 78 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_node.asObject(), _python_str_plain_children ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 78 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_child.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 79 );
                if ( HAS_ATTRIBUTE( _python_var_child.asObject(), _python_str_plain_evaluate ) )
                {
                    {
                        frame_guard.setLineNumber( 80 );
                        PyObject *_tmp_python_tmp_source_iter;
                        {
                            PyObjectTempKeeper1 call1;
                            PyObjectTempKeeper0 call2;
                            PyObjectTempKeeper0 call3;
                            _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_child.asObject(), _python_str_plain_evaluate ) ), call2.assign( _python_var_self.asObject() ), call3.assign( _python_var_qn.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_connection.asObject() ) ) ).asObject() );
                        }
                        PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_sql.assign0( _python_tmp_element_1.asObject() );
                        _python_var_params.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                else
                {
                    {
                        frame_guard.setLineNumber( 82 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( MAKE_TUPLE2( _python_str_digest_1c481aa99d081c32182011a758f73d33, PyObjectTemporary( MAKE_TUPLE1( _python_var_child.asObject() ) ).asObject() ) ).asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_sql.assign0( _python_tmp_element_1.asObject() );
                        _python_var_params.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 84 );
                if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( BUILTIN_GETATTR( _python_var_child.asObject(), _python_str_plain_children, PyObjectTemporary( PyList_New( 0 ) ).asObject() ) ).asObject() ) ).asObject(), _python_int_pos_1 ) )
                {
                    _python_var_format.assign0( _python_str_digest_614103b76fd0d9de068d69034fb6f987 );
                }
                else
                {
                    _python_var_format.assign0( _python_str_digest_1c481aa99d081c32182011a758f73d33 );
                }
                frame_guard.setLineNumber( 89 );
                if ( CHECK_IF_TRUE( _python_var_sql.asObject() ) )
                {
                    frame_guard.setLineNumber( 90 );
                    {
                        PyObjectTempKeeper1 call7;
                        PyObjectTempKeeper0 op5;
                        DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_expressions.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( ( op5.assign( _python_var_format.asObject() ), BINARY_OPERATION_REMAINDER( op5.asObject0(), _python_var_sql.asObject() ) ) ).asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 91 );
                    {
                        PyObjectTempKeeper1 call9;
                        DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( _python_var_expression_params.asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_params.asObject() ) ) );
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 93 );
        {
            PyObjectTempKeeper1 call11;
            PyObjectTempKeeper1 call12;
            PyObjectTempKeeper1 make_tuple14;
            return ( make_tuple14.assign( ( call11.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_ops ) ).asObject(), _python_str_plain_combine_expression ) ), call12.assign( LOOKUP_ATTRIBUTE( _python_var_node.asObject(), _python_str_plain_connector ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), call12.asObject0(), _python_var_expressions.asObject() ) ) ), MAKE_TUPLE2( make_tuple14.asObject0(), _python_var_expression_params.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_connection.updateLocalsDict( _python_var_qn.updateLocalsDict( _python_var_node.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_format.updateLocalsDict( _python_var_params.updateLocalsDict( _python_var_sql.updateLocalsDict( _python_var_child.updateLocalsDict( _python_var_expression_params.updateLocalsDict( _python_var_expressions.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
           Py_DECREF( frame_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
           frame_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_node = NULL;
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
                PyErr_Format( PyExc_TypeError, "evaluate_node() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "evaluate_node() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_node == key )
            {
                if (unlikely( _python_par_node ))
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_node() got multiple values for keyword argument 'node'" );
                    goto error_exit;
                }

                _python_par_node = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_qn == key )
            {
                if (unlikely( _python_par_qn ))
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_node() got multiple values for keyword argument 'qn'" );
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
                    PyErr_Format( PyExc_TypeError, "evaluate_node() got multiple values for keyword argument 'connection'" );
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
                    PyErr_Format( PyExc_TypeError, "evaluate_node() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_node, key ) )
            {
                if (unlikely( _python_par_node ))
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_node() got multiple values for keyword argument 'node'" );
                    goto error_exit;
                }

                _python_par_node = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_qn, key ) )
            {
                if (unlikely( _python_par_qn ))
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_node() got multiple values for keyword argument 'qn'" );
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
                    PyErr_Format( PyExc_TypeError, "evaluate_node() got multiple values for keyword argument 'connection'" );
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
                   "evaluate_node() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "evaluate_node() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "evaluate_node() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "evaluate_node() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "evaluate_node() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "evaluate_node() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "evaluate_node() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "evaluate_node() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "evaluate_node() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "evaluate_node() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "evaluate_node() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_node() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_node() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "evaluate_node() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_node != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "evaluate_node() got multiple values for keyword argument 'node'" );
             goto error_exit;
         }

        _python_par_node = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_qn != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "evaluate_node() got multiple values for keyword argument 'qn'" );
             goto error_exit;
         }

        _python_par_qn = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_connection != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "evaluate_node() got multiple values for keyword argument 'connection'" );
             goto error_exit;
         }

        _python_par_connection = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, _python_par_self, _python_par_node, _python_par_qn, _python_par_connection );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_node );
    Py_XDECREF( _python_par_qn );
    Py_XDECREF( _python_par_connection );

    return NULL;
}

static PyObject *dparse_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_node, PyObject *_python_par_qn, PyObject *_python_par_connection )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_node( _python_str_plain_node, _python_par_node );
    PyObjectLocalParameterVariableNoDel _python_var_qn( _python_str_plain_qn, _python_par_qn );
    PyObjectLocalParameterVariableNoDel _python_var_connection( _python_str_plain_connection, _python_par_connection );
    PyObjectLocalVariable _python_var_col( _python_str_plain_col );
    PyObjectLocalVariable _python_var_n( _python_str_plain_n );
    PyObjectLocalVariable _python_var_c( _python_str_plain_c );

    // Actual function code.
    _python_var_col.assign0( Py_None );
    static PyFrameObject *frame_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;

    if ( isFrameUnusable( frame_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) )
    {
        if ( frame_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions" );
#endif
            Py_DECREF( frame_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
        }

        frame_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = MAKE_FRAME( _codeobj_f3751bcebffae9ade48a5a5588c314e2, _module_django__db__models__sql__expressions );
    }

    FrameGuard frame_guard( frame_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
    try
    {
        assert( Py_REFCNT( frame_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 97 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cols ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 97 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 97 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_n.assign0( _python_tmp_element_1.asObject() );
                        _python_var_c.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 98 );
                if ( ( _python_var_n.asObject() == _python_var_node.asObject() ) )
                {
                    frame_guard.setLineNumber( 99 );
                    _python_var_col.assign0( _python_var_c.asObject() );
                    frame_guard.setLineNumber( 100 );
                    break;
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 101 );
        if ( ( _python_var_col.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 102 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_c7314aa40bba8f3148136590c54bbacb ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 103 );
        if ( HAS_ATTRIBUTE( _python_var_col.asObject(), _python_str_plain_as_sql ) )
        {
            frame_guard.setLineNumber( 104 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call2;
                return ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_col.asObject(), _python_str_plain_as_sql ) ), call2.assign( _python_var_qn.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_connection.asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 106 );
            {
                PyObjectTempKeeper0 call4;
                PyObjectTempKeeper0 call6;
                PyObjectTempKeeper1 make_tuple8;
                return MAKE_TUPLE2( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_fffb2b4b5e45eb8109d63f2497fbdbc1, PyObjectTemporary( ( make_tuple8.assign( ( call4.assign( _python_var_qn.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_col.asObject(), _python_int_0, 0 ) ).asObject() ) ) ), MAKE_TUPLE2( make_tuple8.asObject0(), PyObjectTemporary( ( call6.assign( _python_var_qn.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_col.asObject(), _python_int_pos_1, 1 ) ).asObject() ) ) ).asObject() ) ) ).asObject() ) ).asObject(), PyObjectTemporary( PyList_New( 0 ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_connection.updateLocalsDict( _python_var_qn.updateLocalsDict( _python_var_node.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_n.updateLocalsDict( _python_var_col.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
           Py_DECREF( frame_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
           frame_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_node = NULL;
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
                PyErr_Format( PyExc_TypeError, "evaluate_leaf() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "evaluate_leaf() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_node == key )
            {
                if (unlikely( _python_par_node ))
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_leaf() got multiple values for keyword argument 'node'" );
                    goto error_exit;
                }

                _python_par_node = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_qn == key )
            {
                if (unlikely( _python_par_qn ))
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_leaf() got multiple values for keyword argument 'qn'" );
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
                    PyErr_Format( PyExc_TypeError, "evaluate_leaf() got multiple values for keyword argument 'connection'" );
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
                    PyErr_Format( PyExc_TypeError, "evaluate_leaf() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_node, key ) )
            {
                if (unlikely( _python_par_node ))
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_leaf() got multiple values for keyword argument 'node'" );
                    goto error_exit;
                }

                _python_par_node = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_qn, key ) )
            {
                if (unlikely( _python_par_qn ))
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_leaf() got multiple values for keyword argument 'qn'" );
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
                    PyErr_Format( PyExc_TypeError, "evaluate_leaf() got multiple values for keyword argument 'connection'" );
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
                   "evaluate_leaf() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "evaluate_leaf() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "evaluate_leaf() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "evaluate_leaf() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "evaluate_leaf() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "evaluate_leaf() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "evaluate_leaf() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "evaluate_leaf() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "evaluate_leaf() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "evaluate_leaf() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "evaluate_leaf() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_leaf() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_leaf() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "evaluate_leaf() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_node != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "evaluate_leaf() got multiple values for keyword argument 'node'" );
             goto error_exit;
         }

        _python_par_node = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_qn != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "evaluate_leaf() got multiple values for keyword argument 'qn'" );
             goto error_exit;
         }

        _python_par_qn = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_connection != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "evaluate_leaf() got multiple values for keyword argument 'connection'" );
             goto error_exit;
         }

        _python_par_connection = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, _python_par_self, _python_par_node, _python_par_qn, _python_par_connection );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_node );
    Py_XDECREF( _python_par_qn );
    Py_XDECREF( _python_par_connection );

    return NULL;
}

static PyObject *dparse_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_node, PyObject *_python_par_qn, PyObject *_python_par_connection )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_node( _python_str_plain_node, _python_par_node );
    PyObjectLocalParameterVariableNoDel _python_var_qn( _python_str_plain_qn, _python_par_qn );
    PyObjectLocalParameterVariableNoDel _python_var_connection( _python_str_plain_connection, _python_par_connection );
    PyObjectLocalVariable _python_var_timedelta( _python_str_plain_timedelta );
    PyObjectLocalVariable _python_var_sql( _python_str_plain_sql );
    PyObjectLocalVariable _python_var_params( _python_str_plain_params );

    // Actual function code.
    static PyFrameObject *frame_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;

    if ( isFrameUnusable( frame_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) )
    {
        if ( frame_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions" );
#endif
            Py_DECREF( frame_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
        }

        frame_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = MAKE_FRAME( _codeobj_8e87f78b900202db0e4fe4a768e0c624, _module_django__db__models__sql__expressions );
    }

    FrameGuard frame_guard( frame_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
    try
    {
        assert( Py_REFCNT( frame_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 109 );
        _python_var_timedelta.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_node.asObject(), _python_str_plain_children ) ).asObject(), _python_str_plain_pop ) ).asObject() ) );
        {
            frame_guard.setLineNumber( 110 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call2;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_evaluate_node ) ), call2.assign( _python_var_node.asObject() ), call3.assign( _python_var_qn.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_connection.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_sql.assign0( _python_tmp_element_1.asObject() );
            _python_var_params.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 112 );
        if ( ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_timedelta.asObject(), _python_str_plain_days ) ).asObject(), _python_int_0 ) && ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_timedelta.asObject(), _python_str_plain_seconds ) ).asObject(), _python_int_0 ) && RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_timedelta.asObject(), _python_str_plain_microseconds ) ).asObject(), _python_int_0 ) ) ) )
        {
            frame_guard.setLineNumber( 114 );
            {
                PyObjectTempKeeper0 make_tuple5;
                return ( make_tuple5.assign( _python_var_sql.asObject() ), MAKE_TUPLE2( make_tuple5.asObject0(), _python_var_params.asObject() ) );
            }
        }
        frame_guard.setLineNumber( 116 );
        {
            PyObjectTempKeeper1 call7;
            PyObjectTempKeeper0 call8;
            PyObjectTempKeeper1 call9;
            PyObjectTempKeeper1 make_tuple11;
            return ( make_tuple11.assign( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_ops ) ).asObject(), _python_str_plain_date_interval_sql ) ), call8.assign( _python_var_sql.asObject() ), call9.assign( LOOKUP_ATTRIBUTE( _python_var_node.asObject(), _python_str_plain_connector ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), call8.asObject0(), call9.asObject0(), _python_var_timedelta.asObject() ) ) ), MAKE_TUPLE2( make_tuple11.asObject0(), _python_var_params.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_connection.updateLocalsDict( _python_var_qn.updateLocalsDict( _python_var_node.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_params.updateLocalsDict( _python_var_sql.updateLocalsDict( _python_var_timedelta.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions )
        {
           Py_DECREF( frame_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions );
           frame_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_node = NULL;
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
                PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_node == key )
            {
                if (unlikely( _python_par_node ))
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() got multiple values for keyword argument 'node'" );
                    goto error_exit;
                }

                _python_par_node = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_qn == key )
            {
                if (unlikely( _python_par_qn ))
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() got multiple values for keyword argument 'qn'" );
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
                    PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() got multiple values for keyword argument 'connection'" );
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
                    PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_node, key ) )
            {
                if (unlikely( _python_par_node ))
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() got multiple values for keyword argument 'node'" );
                    goto error_exit;
                }

                _python_par_node = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_qn, key ) )
            {
                if (unlikely( _python_par_qn ))
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() got multiple values for keyword argument 'qn'" );
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
                    PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() got multiple values for keyword argument 'connection'" );
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
                   "evaluate_date_modifier_node() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_node != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() got multiple values for keyword argument 'node'" );
             goto error_exit;
         }

        _python_par_node = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_qn != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() got multiple values for keyword argument 'qn'" );
             goto error_exit;
         }

        _python_par_qn = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_connection != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "evaluate_date_modifier_node() got multiple values for keyword argument 'connection'" );
             goto error_exit;
         }

        _python_par_connection = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, _python_par_self, _python_par_node, _python_par_qn, _python_par_connection );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_node );
    Py_XDECREF( _python_par_qn );
    Py_XDECREF( _python_par_connection );

    return NULL;
}

static PyObject *dparse_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        dparse_function_10_evaluate_date_modifier_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        _python_str_plain_evaluate_date_modifier_node,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8e87f78b900202db0e4fe4a768e0c624,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__expressions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        dparse_function_1___init___of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_005a1bdebc9fee58b552a49f7ce6749f,
        INCREASE_REFCOUNT( _python_tuple_true_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__expressions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        dparse_function_2_relabeled_clone_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        _python_str_plain_relabeled_clone,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_588022131954dfc4742036623fae8a40,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__expressions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        dparse_function_3_get_cols_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        _python_str_plain_get_cols,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e62ccc7b29db0869729a1bc0325f0899,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__expressions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        dparse_function_4_prepare_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        _python_str_plain_prepare,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3fb077499a5131e9cee7dda52f776d63,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__expressions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        dparse_function_5_as_sql_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        _python_str_plain_as_sql,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1df111b3a6563aa7c16311e7fa84189c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__expressions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        dparse_function_6_prepare_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        _python_str_plain_prepare_node,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_76c2819d4157ac5dba0a0f3bde4bde38,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__expressions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        dparse_function_7_prepare_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        _python_str_plain_prepare_leaf,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_014cb056767a69f1884241582a658a89,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__expressions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        dparse_function_8_evaluate_node_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        _python_str_plain_evaluate_node,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f20619205c944f2f669b3d1513581178,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__expressions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        dparse_function_9_evaluate_leaf_of_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions,
        _python_str_plain_evaluate_leaf,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f3751bcebffae9ade48a5a5588c314e2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__expressions,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db.models.sql.expressions",   /* m_name */
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

MOD_INIT_DECL( django__db__models__sql__expressions )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db__models__sql__expressions );
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

    // puts( "in initdjango__db__models__sql__expressions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db__models__sql__expressions = Py_InitModule4(
        "django.db.models.sql.expressions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db__models__sql__expressions = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db__models__sql__expressions = (PyDictObject *)((PyModuleObject *)_module_django__db__models__sql__expressions)->md_dict;

    assertObject( _module_django__db__models__sql__expressions );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_b6f8cb84f3c5a2f49197b8522d43dc8d, _module_django__db__models__sql__expressions );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db__models__sql__expressions );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db__models__sql__expressions != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__expressions, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__expressions, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_216bdbf36f8550f83bee591763f2dfd9 );
    PyFrameObject *frame_module_django__db__models__sql__expressions = MAKE_FRAME( _codeobj_afb26742a62db3865b64a83f71db7689, _module_django__db__models__sql__expressions );

    FrameGuard frame_guard( frame_module_django__db__models__sql__expressions );
    try
    {
        assert( Py_REFCNT( frame_module_django__db__models__sql__expressions ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__expressions, (Nuitka_StringObject *)_python_str_plain_FieldError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__db__models__sql__expressions)->md_dict, ((PyModuleObject *)_module_django__db__models__sql__expressions)->md_dict, _python_list_str_plain_FieldError_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FieldError ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__expressions, (Nuitka_StringObject *)_python_str_plain_LOOKUP_SEP, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_cfeccc6ee565189b79407570398b67dd, ((PyModuleObject *)_module_django__db__models__sql__expressions)->md_dict, ((PyModuleObject *)_module_django__db__models__sql__expressions)->md_dict, _python_list_str_plain_LOOKUP_SEP_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_LOOKUP_SEP ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__expressions, (Nuitka_StringObject *)_python_str_plain_FieldDoesNotExist, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_a15da66f68fa45171bbcd4f7a464bcd8, ((PyModuleObject *)_module_django__db__models__sql__expressions)->md_dict, ((PyModuleObject *)_module_django__db__models__sql__expressions)->md_dict, _python_list_str_plain_FieldDoesNotExist_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FieldDoesNotExist ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__expressions, (Nuitka_StringObject *)_python_str_plain_copy, IMPORT_MODULE( _python_str_plain_copy, ((PyModuleObject *)_module_django__db__models__sql__expressions)->md_dict, ((PyModuleObject *)_module_django__db__models__sql__expressions)->md_dict, Py_None, _python_int_neg_1 ) );
        {
            frame_guard.setLineNumber( 6 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_SQLEvaluator_of_module_django__db__models__sql__expressions(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__sql__expressions___metaclass__.isInitialized( false ) ? _mvar_django__db__models__sql__expressions___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_SQLEvaluator, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__expressions, (Nuitka_StringObject *)_python_str_plain_SQLEvaluator, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db__models__sql__expressions)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__db__models__sql__expressions );
}
