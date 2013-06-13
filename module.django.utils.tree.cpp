// Generated code for Python source for module 'django.utils.tree'
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

// The _module_django__utils__tree is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__tree;
PyDictObject *_moduledict_django__utils__tree;

// The module level variables.
static PyObjectGlobalVariable_django__utils__tree _mvar_django__utils__tree_Node( &_module_django__utils__tree, &_python_str_plain_Node );
static PyObjectGlobalVariable_django__utils__tree _mvar_django__utils__tree___metaclass__( &_module_django__utils__tree, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__tree _mvar_django__utils__tree_copy( &_module_django__utils__tree, &_python_str_plain_copy );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Node_of_module_django__utils__tree(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3___str___of_class_1_Node_of_module_django__utils__tree( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_c );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_3___str___of_class_1_Node_of_module_django__utils__tree( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_c );


static PyObject *MAKE_FUNCTION_function_10_add_of_class_1_Node_of_module_django__utils__tree(  );


static PyObject *MAKE_FUNCTION_function_11_negate_of_class_1_Node_of_module_django__utils__tree(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Node_of_module_django__utils__tree(  );


static PyObject *MAKE_FUNCTION_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree(  );


static PyObject *MAKE_FUNCTION_function_3___str___of_class_1_Node_of_module_django__utils__tree(  );


static PyObject *MAKE_FUNCTION_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree(  );


static PyObject *MAKE_FUNCTION_function_5___len___of_class_1_Node_of_module_django__utils__tree(  );


static PyObject *MAKE_FUNCTION_function_6___bool___of_class_1_Node_of_module_django__utils__tree(  );


static PyObject *MAKE_FUNCTION_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree(  );


static PyObject *MAKE_FUNCTION_function_8___contains___of_class_1_Node_of_module_django__utils__tree(  );


static PyObject *MAKE_FUNCTION_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Node_of_module_django__utils__tree(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_default( _python_str_plain_default );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var__new_instance( _python_str_plain__new_instance );
    PyObjectLocalVariable _python_var___str__( _python_str_plain___str__ );
    PyObjectLocalVariable _python_var___deepcopy__( _python_str_plain___deepcopy__ );
    PyObjectLocalVariable _python_var___len__( _python_str_plain___len__ );
    PyObjectLocalVariable _python_var___bool__( _python_str_plain___bool__ );
    PyObjectLocalVariable _python_var___nonzero__( _python_str_plain___nonzero__ );
    PyObjectLocalVariable _python_var___contains__( _python_str_plain___contains__ );
    PyObjectLocalVariable _python_var__prepare_data( _python_str_plain__prepare_data );
    PyObjectLocalVariable _python_var_add( _python_str_plain_add );
    PyObjectLocalVariable _python_var_negate( _python_str_plain_negate );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_tree );
    _python_var___doc__.assign0( _python_str_digest_18e45eb5d07bb9697e8d98c9b8d7d7b4 );
    _python_var_default.assign0( _python_str_plain_DEFAULT );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_Node_of_module_django__utils__tree(  ) );
    _python_var__new_instance.assign1( MAKE_FUNCTION_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree(  ) );
    static PyFrameObject *frame_class_1_Node_of_module_django__utils__tree = NULL;

    if ( isFrameUnusable( frame_class_1_Node_of_module_django__utils__tree ) )
    {
        if ( frame_class_1_Node_of_module_django__utils__tree )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_1_Node_of_module_django__utils__tree" );
#endif
            Py_DECREF( frame_class_1_Node_of_module_django__utils__tree );
        }

        frame_class_1_Node_of_module_django__utils__tree = MAKE_FRAME( _codeobj_8b666455851adcd74b441e85dd37fe5f, _module_django__utils__tree );
    }

    FrameGuard frame_guard( frame_class_1_Node_of_module_django__utils__tree );
    try
    {
        assert( Py_REFCNT( frame_class_1_Node_of_module_django__utils__tree ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 41 );
        _python_var__new_instance.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_classmethod ), _python_var__new_instance.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_negate.updateLocalsDict( _python_var_add.updateLocalsDict( _python_var__prepare_data.updateLocalsDict( _python_var___contains__.updateLocalsDict( _python_var___nonzero__.updateLocalsDict( _python_var___bool__.updateLocalsDict( _python_var___len__.updateLocalsDict( _python_var___deepcopy__.updateLocalsDict( _python_var___str__.updateLocalsDict( _python_var__new_instance.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_default.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_1_Node_of_module_django__utils__tree )
        {
           Py_DECREF( frame_class_1_Node_of_module_django__utils__tree );
           frame_class_1_Node_of_module_django__utils__tree = NULL;
        }

        throw;
    }
    _python_var___str__.assign1( MAKE_FUNCTION_function_3___str___of_class_1_Node_of_module_django__utils__tree(  ) );
    _python_var___deepcopy__.assign1( MAKE_FUNCTION_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree(  ) );
    _python_var___len__.assign1( MAKE_FUNCTION_function_5___len___of_class_1_Node_of_module_django__utils__tree(  ) );
    _python_var___bool__.assign1( MAKE_FUNCTION_function_6___bool___of_class_1_Node_of_module_django__utils__tree(  ) );
    _python_var___nonzero__.assign1( MAKE_FUNCTION_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree(  ) );
    _python_var___contains__.assign1( MAKE_FUNCTION_function_8___contains___of_class_1_Node_of_module_django__utils__tree(  ) );
    _python_var__prepare_data.assign1( MAKE_FUNCTION_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree(  ) );
    _python_var_add.assign1( MAKE_FUNCTION_function_10_add_of_class_1_Node_of_module_django__utils__tree(  ) );
    _python_var_negate.assign1( MAKE_FUNCTION_function_11_negate_of_class_1_Node_of_module_django__utils__tree(  ) );
    return _python_var_negate.updateLocalsDict( _python_var_add.updateLocalsDict( _python_var__prepare_data.updateLocalsDict( _python_var___contains__.updateLocalsDict( _python_var___nonzero__.updateLocalsDict( _python_var___bool__.updateLocalsDict( _python_var___len__.updateLocalsDict( _python_var___deepcopy__.updateLocalsDict( _python_var___str__.updateLocalsDict( _python_var__new_instance.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_default.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_children, PyObject *_python_par_connector, PyObject *_python_par_negated )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_children( _python_str_plain_children, _python_par_children );
    PyObjectLocalParameterVariableNoDel _python_var_connector( _python_str_plain_connector, _python_par_connector );
    PyObjectLocalParameterVariableNoDel _python_var_negated( _python_str_plain_negated, _python_par_negated );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_Node_of_module_django__utils__tree = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_Node_of_module_django__utils__tree ) )
    {
        if ( frame_function_1___init___of_class_1_Node_of_module_django__utils__tree )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_Node_of_module_django__utils__tree" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_Node_of_module_django__utils__tree );
        }

        frame_function_1___init___of_class_1_Node_of_module_django__utils__tree = MAKE_FRAME( _codeobj_27ebb01b41dd4280a3a08d0a0157ed91, _module_django__utils__tree );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_Node_of_module_django__utils__tree );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_Node_of_module_django__utils__tree ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 23 );
        {
                PyObjectTemporary tmp_identifier( ( CHECK_IF_TRUE( _python_var_children.asObject() ) ? LOOKUP_INDEX_SLICE( _python_var_children.asObject(), 0, PY_SSIZE_T_MAX ) : PyList_New( 0 ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_children );
        }
        frame_guard.setLineNumber( 24 );
        {
            PyObjectTempKeeper0 keeper_0;
            {
                PyObjectTemporary tmp_identifier( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_connector.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_default ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_connector );
        }
        }
        frame_guard.setLineNumber( 25 );
        {
                PyObject *tmp_identifier = _python_var_negated.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_negated );
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
        frame_guard.getFrame0()->f_locals = _python_var_negated.updateLocalsDict( _python_var_connector.updateLocalsDict( _python_var_children.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_Node_of_module_django__utils__tree )
        {
           Py_DECREF( frame_function_1___init___of_class_1_Node_of_module_django__utils__tree );
           frame_function_1___init___of_class_1_Node_of_module_django__utils__tree = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_children = NULL;
    PyObject *_python_par_connector = NULL;
    PyObject *_python_par_negated = NULL;
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
            if ( found == false && _python_str_plain_children == key )
            {
                if (unlikely( _python_par_children ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'children'" );
                    goto error_exit;
                }

                _python_par_children = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_connector == key )
            {
                if (unlikely( _python_par_connector ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'connector'" );
                    goto error_exit;
                }

                _python_par_connector = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_negated == key )
            {
                if (unlikely( _python_par_negated ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'negated'" );
                    goto error_exit;
                }

                _python_par_negated = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_children, key ) )
            {
                if (unlikely( _python_par_children ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'children'" );
                    goto error_exit;
                }

                _python_par_children = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_connector, key ) )
            {
                if (unlikely( _python_par_connector ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'connector'" );
                    goto error_exit;
                }

                _python_par_connector = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_negated, key ) )
            {
                if (unlikely( _python_par_negated ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'negated'" );
                    goto error_exit;
                }

                _python_par_negated = value;

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
            if ( 4 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 1 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
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
                if ( 4 == 1 )
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
         if (unlikely( _python_par_children != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'children'" );
             goto error_exit;
         }

        _python_par_children = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_connector != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'connector'" );
             goto error_exit;
         }

        _python_par_connector = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_negated != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'negated'" );
             goto error_exit;
         }

        _python_par_negated = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_children == NULL )
    {
        _python_par_children = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_children );
    }
    if ( _python_par_connector == NULL )
    {
        _python_par_connector = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_connector );
    }
    if ( _python_par_negated == NULL )
    {
        _python_par_negated = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_negated );
    }


    return impl_function_1___init___of_class_1_Node_of_module_django__utils__tree( self, _python_par_self, _python_par_children, _python_par_connector, _python_par_negated );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_children );
    Py_XDECREF( _python_par_connector );
    Py_XDECREF( _python_par_negated );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___init___of_class_1_Node_of_module_django__utils__tree( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_Node_of_module_django__utils__tree( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject *_python_par_cls, PyObject *_python_par_children, PyObject *_python_par_connector, PyObject *_python_par_negated )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );
    PyObjectLocalParameterVariableNoDel _python_var_children( _python_str_plain_children, _python_par_children );
    PyObjectLocalParameterVariableNoDel _python_var_connector( _python_str_plain_connector, _python_par_connector );
    PyObjectLocalParameterVariableNoDel _python_var_negated( _python_str_plain_negated, _python_par_negated );
    PyObjectLocalVariable _python_var_obj( _python_str_plain_obj );

    // Actual function code.
    static PyFrameObject *frame_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree = NULL;

    if ( isFrameUnusable( frame_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree ) )
    {
        if ( frame_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2__new_instance_of_class_1_Node_of_module_django__utils__tree" );
#endif
            Py_DECREF( frame_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree );
        }

        frame_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree = MAKE_FRAME( _codeobj_cb6d01c9e82d06f59c88c733f74d8570, _module_django__utils__tree );
    }

    FrameGuard frame_guard( frame_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree );
    try
    {
        assert( Py_REFCNT( frame_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 38 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper0 call3;
            _python_var_obj.assign1( ( call1.assign( _mvar_django__utils__tree_Node.asObject0() ), call2.assign( _python_var_children.asObject() ), call3.assign( _python_var_connector.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_negated.asObject() ) ) );
        }
        frame_guard.setLineNumber( 39 );
        {
                PyObject *tmp_identifier = _python_var_cls.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_obj.asObject(), _python_str_plain___class__ );
        }
        frame_guard.setLineNumber( 40 );
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
        frame_guard.getFrame0()->f_locals = _python_var_negated.updateLocalsDict( _python_var_connector.updateLocalsDict( _python_var_children.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_obj.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree )
        {
           Py_DECREF( frame_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree );
           frame_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_children = NULL;
    PyObject *_python_par_connector = NULL;
    PyObject *_python_par_negated = NULL;
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
                PyErr_Format( PyExc_TypeError, "_new_instance() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_new_instance() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_children == key )
            {
                if (unlikely( _python_par_children ))
                {
                    PyErr_Format( PyExc_TypeError, "_new_instance() got multiple values for keyword argument 'children'" );
                    goto error_exit;
                }

                _python_par_children = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_connector == key )
            {
                if (unlikely( _python_par_connector ))
                {
                    PyErr_Format( PyExc_TypeError, "_new_instance() got multiple values for keyword argument 'connector'" );
                    goto error_exit;
                }

                _python_par_connector = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_negated == key )
            {
                if (unlikely( _python_par_negated ))
                {
                    PyErr_Format( PyExc_TypeError, "_new_instance() got multiple values for keyword argument 'negated'" );
                    goto error_exit;
                }

                _python_par_negated = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cls, key ) )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "_new_instance() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_children, key ) )
            {
                if (unlikely( _python_par_children ))
                {
                    PyErr_Format( PyExc_TypeError, "_new_instance() got multiple values for keyword argument 'children'" );
                    goto error_exit;
                }

                _python_par_children = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_connector, key ) )
            {
                if (unlikely( _python_par_connector ))
                {
                    PyErr_Format( PyExc_TypeError, "_new_instance() got multiple values for keyword argument 'connector'" );
                    goto error_exit;
                }

                _python_par_connector = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_negated, key ) )
            {
                if (unlikely( _python_par_negated ))
                {
                    PyErr_Format( PyExc_TypeError, "_new_instance() got multiple values for keyword argument 'negated'" );
                    goto error_exit;
                }

                _python_par_negated = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_new_instance() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_new_instance() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_new_instance() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_new_instance() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_new_instance() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_new_instance() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_new_instance() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_new_instance() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_new_instance() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_new_instance() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_new_instance() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_new_instance() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_new_instance() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_new_instance() got multiple values for keyword argument 'cls'" );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_children != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_new_instance() got multiple values for keyword argument 'children'" );
             goto error_exit;
         }

        _python_par_children = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_connector != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_new_instance() got multiple values for keyword argument 'connector'" );
             goto error_exit;
         }

        _python_par_connector = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_negated != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_new_instance() got multiple values for keyword argument 'negated'" );
             goto error_exit;
         }

        _python_par_negated = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_children == NULL )
    {
        _python_par_children = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_children );
    }
    if ( _python_par_connector == NULL )
    {
        _python_par_connector = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_connector );
    }
    if ( _python_par_negated == NULL )
    {
        _python_par_negated = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_negated );
    }


    return impl_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree( self, _python_par_cls, _python_par_children, _python_par_connector, _python_par_negated );

error_exit:;

    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_children );
    Py_XDECREF( _python_par_connector );
    Py_XDECREF( _python_par_negated );

    return NULL;
}

static PyObject *dparse_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___str___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_c( _python_str_plain_c );

    // Actual function code.
    static PyFrameObject *frame_function_3___str___of_class_1_Node_of_module_django__utils__tree = NULL;

    if ( isFrameUnusable( frame_function_3___str___of_class_1_Node_of_module_django__utils__tree ) )
    {
        if ( frame_function_3___str___of_class_1_Node_of_module_django__utils__tree )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___str___of_class_1_Node_of_module_django__utils__tree" );
#endif
            Py_DECREF( frame_function_3___str___of_class_1_Node_of_module_django__utils__tree );
        }

        frame_function_3___str___of_class_1_Node_of_module_django__utils__tree = MAKE_FRAME( _codeobj_fd89c7d8e6eb0586f91f832865c17645, _module_django__utils__tree );
    }

    FrameGuard frame_guard( frame_function_3___str___of_class_1_Node_of_module_django__utils__tree );
    try
    {
        assert( Py_REFCNT( frame_function_3___str___of_class_1_Node_of_module_django__utils__tree ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 44 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_negated ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 45 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper1 make_tuple3;
                return BINARY_OPERATION_REMAINDER( _python_str_digest_98baef9ead4856fb5a6a2e7f96735742, PyObjectTemporary( ( make_tuple3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_connector ) ), MAKE_TUPLE2( make_tuple3.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_str_digest_fc763cb31e9938f37737394681228f83, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( impl_listcontr_1_of_function_3___str___of_class_1_Node_of_module_django__utils__tree( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_children ) ).asObject() ), _python_var_c ) ).asObject() ) ) ).asObject() ) ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 47 );
        {
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper1 make_tuple7;
            return BINARY_OPERATION_REMAINDER( _python_str_digest_3a787216dffb48c329463d50e6a5ac11, PyObjectTemporary( ( make_tuple7.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_connector ) ), MAKE_TUPLE2( make_tuple7.asObject0(), PyObjectTemporary( ( call5.assign( LOOKUP_ATTRIBUTE( _python_str_digest_fc763cb31e9938f37737394681228f83, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( impl_listcontr_2_of_function_3___str___of_class_1_Node_of_module_django__utils__tree( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_children ) ).asObject() ), _python_var_c ) ).asObject() ) ) ).asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_c.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3___str___of_class_1_Node_of_module_django__utils__tree )
        {
           Py_DECREF( frame_function_3___str___of_class_1_Node_of_module_django__utils__tree );
           frame_function_3___str___of_class_1_Node_of_module_django__utils__tree = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3___str___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_3___str___of_class_1_Node_of_module_django__utils__tree( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3___str___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3___str___of_class_1_Node_of_module_django__utils__tree( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___str___of_class_1_Node_of_module_django__utils__tree( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3___str___of_class_1_Node_of_module_django__utils__tree( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_c )
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
                python_closure_c.assign0( _python_tmp_iter_value.asObject() );
                APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( TO_STR( python_closure_c.asObject() ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_3___str___of_class_1_Node_of_module_django__utils__tree( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_c )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 47 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 47 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_c.assign0( _python_tmp_iter_value.asObject() );
                APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( TO_STR( python_closure_c.asObject() ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_memodict )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_memodict( _python_str_plain_memodict, _python_par_memodict );
    PyObjectLocalVariable _python_var_obj( _python_str_plain_obj );

    // Actual function code.
    static PyFrameObject *frame_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree = NULL;

    if ( isFrameUnusable( frame_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree ) )
    {
        if ( frame_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree" );
#endif
            Py_DECREF( frame_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree );
        }

        frame_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree = MAKE_FRAME( _codeobj_2f3c99f6c691f5899c69b0ec434c89a5, _module_django__utils__tree );
    }

    FrameGuard frame_guard( frame_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree );
    try
    {
        assert( Py_REFCNT( frame_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 54 );
        {
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper1 make_dict1;
            _python_var_obj.assign1( ( call5.assign( _mvar_django__utils__tree_Node.asObject0() ), CALL_FUNCTION( call5.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_connector ) ), MAKE_DICT2( make_dict1.asObject0(), _python_str_plain_connector, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_negated ) ).asObject(), _python_str_plain_negated ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 55 );
        {
                PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_obj.asObject(), _python_str_plain___class__ );
        }
        frame_guard.setLineNumber( 56 );
        {
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper1 call9;
            {
                PyObjectTemporary tmp_identifier( ( call8.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__tree_copy.asObject0(), _python_str_plain_deepcopy ) ), call9.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_children ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), call9.asObject0(), _python_var_memodict.asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_obj.asObject(), _python_str_plain_children );
        }
        }
        frame_guard.setLineNumber( 57 );
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
        frame_guard.getFrame0()->f_locals = _python_var_memodict.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_obj.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree )
        {
           Py_DECREF( frame_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree );
           frame_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_memodict = NULL;
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
                PyErr_Format( PyExc_TypeError, "__deepcopy__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__deepcopy__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_memodict == key )
            {
                if (unlikely( _python_par_memodict ))
                {
                    PyErr_Format( PyExc_TypeError, "__deepcopy__() got multiple values for keyword argument 'memodict'" );
                    goto error_exit;
                }

                _python_par_memodict = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__deepcopy__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_memodict, key ) )
            {
                if (unlikely( _python_par_memodict ))
                {
                    PyErr_Format( PyExc_TypeError, "__deepcopy__() got multiple values for keyword argument 'memodict'" );
                    goto error_exit;
                }

                _python_par_memodict = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__deepcopy__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__deepcopy__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__deepcopy__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__deepcopy__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__deepcopy__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__deepcopy__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__deepcopy__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_memodict != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__deepcopy__() got multiple values for keyword argument 'memodict'" );
             goto error_exit;
         }

        _python_par_memodict = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree( self, _python_par_self, _python_par_memodict );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_memodict );

    return NULL;
}

static PyObject *dparse_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5___len___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5___len___of_class_1_Node_of_module_django__utils__tree = NULL;

    if ( isFrameUnusable( frame_function_5___len___of_class_1_Node_of_module_django__utils__tree ) )
    {
        if ( frame_function_5___len___of_class_1_Node_of_module_django__utils__tree )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5___len___of_class_1_Node_of_module_django__utils__tree" );
#endif
            Py_DECREF( frame_function_5___len___of_class_1_Node_of_module_django__utils__tree );
        }

        frame_function_5___len___of_class_1_Node_of_module_django__utils__tree = MAKE_FRAME( _codeobj_c8b3a90ab2f6c2bcac624a48017b11c9, _module_django__utils__tree );
    }

    FrameGuard frame_guard( frame_function_5___len___of_class_1_Node_of_module_django__utils__tree );
    try
    {
        assert( Py_REFCNT( frame_function_5___len___of_class_1_Node_of_module_django__utils__tree ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 63 );
        return BUILTIN_LEN( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_children ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_5___len___of_class_1_Node_of_module_django__utils__tree )
        {
           Py_DECREF( frame_function_5___len___of_class_1_Node_of_module_django__utils__tree );
           frame_function_5___len___of_class_1_Node_of_module_django__utils__tree = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5___len___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__len__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__len__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__len__() got multiple values for keyword argument 'self'" );
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
                   "__len__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__len__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__len__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__len__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__len__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__len__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__len__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__len__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__len__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__len__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__len__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__len__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__len__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__len__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5___len___of_class_1_Node_of_module_django__utils__tree( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5___len___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5___len___of_class_1_Node_of_module_django__utils__tree( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5___len___of_class_1_Node_of_module_django__utils__tree( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6___bool___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_6___bool___of_class_1_Node_of_module_django__utils__tree = NULL;

    if ( isFrameUnusable( frame_function_6___bool___of_class_1_Node_of_module_django__utils__tree ) )
    {
        if ( frame_function_6___bool___of_class_1_Node_of_module_django__utils__tree )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6___bool___of_class_1_Node_of_module_django__utils__tree" );
#endif
            Py_DECREF( frame_function_6___bool___of_class_1_Node_of_module_django__utils__tree );
        }

        frame_function_6___bool___of_class_1_Node_of_module_django__utils__tree = MAKE_FRAME( _codeobj_b721ec8015e30bd62949fa7133d66dd1, _module_django__utils__tree );
    }

    FrameGuard frame_guard( frame_function_6___bool___of_class_1_Node_of_module_django__utils__tree );
    try
    {
        assert( Py_REFCNT( frame_function_6___bool___of_class_1_Node_of_module_django__utils__tree ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 69 );
        return INCREASE_REFCOUNT( TO_BOOL( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_children ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_6___bool___of_class_1_Node_of_module_django__utils__tree )
        {
           Py_DECREF( frame_function_6___bool___of_class_1_Node_of_module_django__utils__tree );
           frame_function_6___bool___of_class_1_Node_of_module_django__utils__tree = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6___bool___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__bool__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__bool__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__bool__() got multiple values for keyword argument 'self'" );
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
                   "__bool__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__bool__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__bool__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__bool__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__bool__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__bool__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__bool__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__bool__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__bool__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6___bool___of_class_1_Node_of_module_django__utils__tree( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6___bool___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6___bool___of_class_1_Node_of_module_django__utils__tree( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6___bool___of_class_1_Node_of_module_django__utils__tree( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree = NULL;

    if ( isFrameUnusable( frame_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree ) )
    {
        if ( frame_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7___nonzero___of_class_1_Node_of_module_django__utils__tree" );
#endif
            Py_DECREF( frame_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree );
        }

        frame_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree = MAKE_FRAME( _codeobj_0e2d8a1dd732c1e636ebb1d1f511f0d0, _module_django__utils__tree );
    }

    FrameGuard frame_guard( frame_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree );
    try
    {
        assert( Py_REFCNT( frame_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 72 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_self.asObject() ) ).asObject(), _python_str_plain___bool__ ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_self.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree )
        {
           Py_DECREF( frame_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree );
           frame_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__nonzero__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__nonzero__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__nonzero__() got multiple values for keyword argument 'self'" );
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
                   "__nonzero__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__nonzero__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__nonzero__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8___contains___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_other )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_other( _python_str_plain_other, _python_par_other );

    // Actual function code.
    static PyFrameObject *frame_function_8___contains___of_class_1_Node_of_module_django__utils__tree = NULL;

    if ( isFrameUnusable( frame_function_8___contains___of_class_1_Node_of_module_django__utils__tree ) )
    {
        if ( frame_function_8___contains___of_class_1_Node_of_module_django__utils__tree )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8___contains___of_class_1_Node_of_module_django__utils__tree" );
#endif
            Py_DECREF( frame_function_8___contains___of_class_1_Node_of_module_django__utils__tree );
        }

        frame_function_8___contains___of_class_1_Node_of_module_django__utils__tree = MAKE_FRAME( _codeobj_93c6c11a3a0a63ef6979506f11d9874a, _module_django__utils__tree );
    }

    FrameGuard frame_guard( frame_function_8___contains___of_class_1_Node_of_module_django__utils__tree );
    try
    {
        assert( Py_REFCNT( frame_function_8___contains___of_class_1_Node_of_module_django__utils__tree ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 78 );
        {
            PyObjectTempKeeper0 cmp1;
            return INCREASE_REFCOUNT( ( cmp1.assign( _python_var_other.asObject() ), SEQUENCE_CONTAINS( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_children ) ).asObject() ) ) );
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

        if ( frame_guard.getFrame0() == frame_function_8___contains___of_class_1_Node_of_module_django__utils__tree )
        {
           Py_DECREF( frame_function_8___contains___of_class_1_Node_of_module_django__utils__tree );
           frame_function_8___contains___of_class_1_Node_of_module_django__utils__tree = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8___contains___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__contains__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__contains__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__contains__() got multiple values for keyword argument 'other'" );
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
                    PyErr_Format( PyExc_TypeError, "__contains__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__contains__() got multiple values for keyword argument 'other'" );
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
                   "__contains__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__contains__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__contains__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__contains__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__contains__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__contains__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__contains__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__contains__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__contains__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__contains__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__contains__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__contains__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__contains__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__contains__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_other != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__contains__() got multiple values for keyword argument 'other'" );
             goto error_exit;
         }

        _python_par_other = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_8___contains___of_class_1_Node_of_module_django__utils__tree( self, _python_par_self, _python_par_other );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_other );

    return NULL;
}

static PyObject *dparse_function_8___contains___of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8___contains___of_class_1_Node_of_module_django__utils__tree( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8___contains___of_class_1_Node_of_module_django__utils__tree( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_data )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_data( _python_str_plain_data, _python_par_data );

    // Actual function code.
    static PyFrameObject *frame_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree = NULL;

    if ( isFrameUnusable( frame_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree ) )
    {
        if ( frame_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree" );
#endif
            Py_DECREF( frame_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree );
        }

        frame_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree = MAKE_FRAME( _codeobj_c49c4542366c21c996664d4197a879e8, _module_django__utils__tree );
    }

    FrameGuard frame_guard( frame_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree );
    try
    {
        assert( Py_REFCNT( frame_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 85 );
        return _python_var_data.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_data.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree )
        {
           Py_DECREF( frame_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree );
           frame_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_data = NULL;
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
                PyErr_Format( PyExc_TypeError, "_prepare_data() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_prepare_data() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_data == key )
            {
                if (unlikely( _python_par_data ))
                {
                    PyErr_Format( PyExc_TypeError, "_prepare_data() got multiple values for keyword argument 'data'" );
                    goto error_exit;
                }

                _python_par_data = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_prepare_data() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_data, key ) )
            {
                if (unlikely( _python_par_data ))
                {
                    PyErr_Format( PyExc_TypeError, "_prepare_data() got multiple values for keyword argument 'data'" );
                    goto error_exit;
                }

                _python_par_data = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_prepare_data() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_prepare_data() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_prepare_data() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_prepare_data() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_prepare_data() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_prepare_data() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_prepare_data() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_prepare_data() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_prepare_data() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_prepare_data() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_prepare_data() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_prepare_data() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_prepare_data() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_prepare_data() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_data != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_prepare_data() got multiple values for keyword argument 'data'" );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree( self, _python_par_self, _python_par_data );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_data );

    return NULL;
}

static PyObject *dparse_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_add_of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_data, PyObject *_python_par_conn_type, PyObject *_python_par_squash )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_data( _python_str_plain_data, _python_par_data );
    PyObjectLocalParameterVariableNoDel _python_var_conn_type( _python_str_plain_conn_type, _python_par_conn_type );
    PyObjectLocalParameterVariableNoDel _python_var_squash( _python_str_plain_squash, _python_par_squash );
    PyObjectLocalVariable _python_var_obj( _python_str_plain_obj );

    // Actual function code.
    static PyFrameObject *frame_function_10_add_of_class_1_Node_of_module_django__utils__tree = NULL;

    if ( isFrameUnusable( frame_function_10_add_of_class_1_Node_of_module_django__utils__tree ) )
    {
        if ( frame_function_10_add_of_class_1_Node_of_module_django__utils__tree )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_add_of_class_1_Node_of_module_django__utils__tree" );
#endif
            Py_DECREF( frame_function_10_add_of_class_1_Node_of_module_django__utils__tree );
        }

        frame_function_10_add_of_class_1_Node_of_module_django__utils__tree = MAKE_FRAME( _codeobj_6795782aa7ef16d717b34d485c5672e8, _module_django__utils__tree );
    }

    FrameGuard frame_guard( frame_function_10_add_of_class_1_Node_of_module_django__utils__tree );
    try
    {
        assert( Py_REFCNT( frame_function_10_add_of_class_1_Node_of_module_django__utils__tree ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 102 );
        {
            PyObjectTempKeeper0 cmp1;
            if ( ( cmp1.assign( _python_var_data.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_children ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 103 );
            return _python_var_data.asObject1();
        }
        }
        frame_guard.setLineNumber( 104 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_data.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__prepare_data ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_data.asObject() ) ) );
        }
        frame_guard.setLineNumber( 105 );
        if ( (!( CHECK_IF_TRUE( _python_var_squash.asObject() ) )) )
        {
            frame_guard.setLineNumber( 106 );
            {
                PyObjectTempKeeper1 call5;
                DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_children ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_data.asObject() ) ) );
            }
            frame_guard.setLineNumber( 107 );
            return _python_var_data.asObject1();
        }
        frame_guard.setLineNumber( 108 );
        {
            PyObjectTempKeeper1 cmp21;
            if ( ( cmp21.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_connector ) ), RICH_COMPARE_BOOL_EQ( cmp21.asObject0(), _python_var_conn_type.asObject() ) ) )
        {
            frame_guard.setLineNumber( 110 );
            {
                PyObjectTempKeeper1 cmp13;
                PyObjectTempKeeper0 isinstance11;
                if ( ( ( isinstance11.assign( _python_var_data.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance11.asObject0(), _mvar_django__utils__tree_Node.asObject0() ) ) && ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_data.asObject(), _python_str_plain_negated ) ).asObject() ) )) && ( ( cmp13.assign( LOOKUP_ATTRIBUTE( _python_var_data.asObject(), _python_str_plain_connector ) ), RICH_COMPARE_BOOL_EQ( cmp13.asObject0(), _python_var_conn_type.asObject() ) ) || RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( _python_var_data.asObject() ) ).asObject(), _python_int_pos_1 ) ) ) ) )
            {
                frame_guard.setLineNumber( 118 );
                {
                    PyObjectTempKeeper1 call7;
                    DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_children ) ).asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_data.asObject(), _python_str_plain_children ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 119 );
                return _python_var_self.asObject1();
            }
            else
            {
                frame_guard.setLineNumber( 123 );
                {
                    PyObjectTempKeeper1 call9;
                    DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_children ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_data.asObject() ) ) );
                }
                frame_guard.setLineNumber( 124 );
                return _python_var_data.asObject1();
            }
            }
        }
        else
        {
            frame_guard.setLineNumber( 126 );
            {
                PyObjectTempKeeper1 call15;
                PyObjectTempKeeper1 call16;
                PyObjectTempKeeper1 call17;
                _python_var_obj.assign1( ( call15.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__new_instance ) ), call16.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_children ) ), call17.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_connector ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), call16.asObject0(), call17.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_negated ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 128 );
            {
                    PyObject *tmp_identifier = _python_var_conn_type.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_connector );
            }
            frame_guard.setLineNumber( 129 );
            {
                PyObjectTempKeeper0 make_list19;
                {
                    PyObjectTemporary tmp_identifier( ( make_list19.assign( _python_var_obj.asObject() ), MAKE_LIST2( make_list19.asObject(), _python_var_data.asObject1() ) ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_children );
            }
            }
            frame_guard.setLineNumber( 130 );
            return _python_var_data.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_squash.updateLocalsDict( _python_var_conn_type.updateLocalsDict( _python_var_data.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_obj.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_10_add_of_class_1_Node_of_module_django__utils__tree )
        {
           Py_DECREF( frame_function_10_add_of_class_1_Node_of_module_django__utils__tree );
           frame_function_10_add_of_class_1_Node_of_module_django__utils__tree = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_add_of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_data = NULL;
    PyObject *_python_par_conn_type = NULL;
    PyObject *_python_par_squash = NULL;
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
                PyErr_Format( PyExc_TypeError, "add() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_data == key )
            {
                if (unlikely( _python_par_data ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'data'" );
                    goto error_exit;
                }

                _python_par_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_conn_type == key )
            {
                if (unlikely( _python_par_conn_type ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'conn_type'" );
                    goto error_exit;
                }

                _python_par_conn_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_squash == key )
            {
                if (unlikely( _python_par_squash ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'squash'" );
                    goto error_exit;
                }

                _python_par_squash = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_data, key ) )
            {
                if (unlikely( _python_par_data ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'data'" );
                    goto error_exit;
                }

                _python_par_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_conn_type, key ) )
            {
                if (unlikely( _python_par_conn_type ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'conn_type'" );
                    goto error_exit;
                }

                _python_par_conn_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_squash, key ) )
            {
                if (unlikely( _python_par_squash ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'squash'" );
                    goto error_exit;
                }

                _python_par_squash = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "add() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "add() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "add() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "add() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "add() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "add() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "add() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "add() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "add() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "add() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "add() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_data != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'data'" );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_conn_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'conn_type'" );
             goto error_exit;
         }

        _python_par_conn_type = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_squash != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'squash'" );
             goto error_exit;
         }

        _python_par_squash = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_squash == NULL )
    {
        _python_par_squash = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_squash );
    }


    return impl_function_10_add_of_class_1_Node_of_module_django__utils__tree( self, _python_par_self, _python_par_data, _python_par_conn_type, _python_par_squash );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_data );
    Py_XDECREF( _python_par_conn_type );
    Py_XDECREF( _python_par_squash );

    return NULL;
}

static PyObject *dparse_function_10_add_of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_10_add_of_class_1_Node_of_module_django__utils__tree( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_add_of_class_1_Node_of_module_django__utils__tree( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_negate_of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_11_negate_of_class_1_Node_of_module_django__utils__tree = NULL;

    if ( isFrameUnusable( frame_function_11_negate_of_class_1_Node_of_module_django__utils__tree ) )
    {
        if ( frame_function_11_negate_of_class_1_Node_of_module_django__utils__tree )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_negate_of_class_1_Node_of_module_django__utils__tree" );
#endif
            Py_DECREF( frame_function_11_negate_of_class_1_Node_of_module_django__utils__tree );
        }

        frame_function_11_negate_of_class_1_Node_of_module_django__utils__tree = MAKE_FRAME( _codeobj_cf8452b80b786b08c5dda3d754cf275a, _module_django__utils__tree );
    }

    FrameGuard frame_guard( frame_function_11_negate_of_class_1_Node_of_module_django__utils__tree );
    try
    {
        assert( Py_REFCNT( frame_function_11_negate_of_class_1_Node_of_module_django__utils__tree ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 136 );
        {
                PyObject *tmp_identifier = UNARY_OPERATION( UNARY_NOT, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_negated ) ).asObject() );
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_negated );
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

        if ( frame_guard.getFrame0() == frame_function_11_negate_of_class_1_Node_of_module_django__utils__tree )
        {
           Py_DECREF( frame_function_11_negate_of_class_1_Node_of_module_django__utils__tree );
           frame_function_11_negate_of_class_1_Node_of_module_django__utils__tree = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_11_negate_of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "negate() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "negate() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "negate() got multiple values for keyword argument 'self'" );
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
                   "negate() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "negate() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "negate() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "negate() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "negate() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "negate() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "negate() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "negate() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "negate() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "negate() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "negate() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "negate() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "negate() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "negate() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_11_negate_of_class_1_Node_of_module_django__utils__tree( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_11_negate_of_class_1_Node_of_module_django__utils__tree( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_11_negate_of_class_1_Node_of_module_django__utils__tree( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_negate_of_class_1_Node_of_module_django__utils__tree( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_add_of_class_1_Node_of_module_django__utils__tree(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_add_of_class_1_Node_of_module_django__utils__tree,
        dparse_function_10_add_of_class_1_Node_of_module_django__utils__tree,
        _python_str_plain_add,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6795782aa7ef16d717b34d485c5672e8,
        INCREASE_REFCOUNT( _python_tuple_true_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tree,
        _python_str_digest_6028242e37b571b5f49c63654f1ff81f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_negate_of_class_1_Node_of_module_django__utils__tree(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_negate_of_class_1_Node_of_module_django__utils__tree,
        dparse_function_11_negate_of_class_1_Node_of_module_django__utils__tree,
        _python_str_plain_negate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cf8452b80b786b08c5dda3d754cf275a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tree,
        _python_str_digest_8eb7586469ea5fa91fe29906ba704686
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Node_of_module_django__utils__tree(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_Node_of_module_django__utils__tree,
        dparse_function_1___init___of_class_1_Node_of_module_django__utils__tree,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_27ebb01b41dd4280a3a08d0a0157ed91,
        INCREASE_REFCOUNT( _python_tuple_none_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tree,
        _python_str_digest_e1b5285fbc54e56936b2396797e338ac
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree,
        dparse_function_2__new_instance_of_class_1_Node_of_module_django__utils__tree,
        _python_str_plain__new_instance,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cb6d01c9e82d06f59c88c733f74d8570,
        INCREASE_REFCOUNT( _python_tuple_none_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tree,
        _python_str_digest_eeab84c490f4ab71ec34105bf285e326
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___str___of_class_1_Node_of_module_django__utils__tree(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___str___of_class_1_Node_of_module_django__utils__tree,
        dparse_function_3___str___of_class_1_Node_of_module_django__utils__tree,
        _python_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fd89c7d8e6eb0586f91f832865c17645,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tree,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree,
        dparse_function_4___deepcopy___of_class_1_Node_of_module_django__utils__tree,
        _python_str_plain___deepcopy__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2f3c99f6c691f5899c69b0ec434c89a5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tree,
        _python_str_digest_6e2fef5dba7646390d8c19828b1fbae0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5___len___of_class_1_Node_of_module_django__utils__tree(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5___len___of_class_1_Node_of_module_django__utils__tree,
        dparse_function_5___len___of_class_1_Node_of_module_django__utils__tree,
        _python_str_plain___len__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c8b3a90ab2f6c2bcac624a48017b11c9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tree,
        _python_str_digest_527de78c18f011b0b79d908c9a55e918
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6___bool___of_class_1_Node_of_module_django__utils__tree(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6___bool___of_class_1_Node_of_module_django__utils__tree,
        dparse_function_6___bool___of_class_1_Node_of_module_django__utils__tree,
        _python_str_plain___bool__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b721ec8015e30bd62949fa7133d66dd1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tree,
        _python_str_digest_c85a48c3911ceea16f090942461cc26f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree,
        dparse_function_7___nonzero___of_class_1_Node_of_module_django__utils__tree,
        _python_str_plain___nonzero__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0e2d8a1dd732c1e636ebb1d1f511f0d0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tree,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8___contains___of_class_1_Node_of_module_django__utils__tree(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8___contains___of_class_1_Node_of_module_django__utils__tree,
        dparse_function_8___contains___of_class_1_Node_of_module_django__utils__tree,
        _python_str_plain___contains__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_93c6c11a3a0a63ef6979506f11d9874a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tree,
        _python_str_digest_f6dcee32b5c0ceb17e9253c927ba4bc9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree,
        dparse_function_9__prepare_data_of_class_1_Node_of_module_django__utils__tree,
        _python_str_plain__prepare_data,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c49c4542366c21c996664d4197a879e8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tree,
        _python_str_digest_83006267daae0591d63d0343c7767628
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.tree",   /* m_name */
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

MOD_INIT_DECL( django__utils__tree )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__tree );
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

    // puts( "in initdjango__utils__tree" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__tree = Py_InitModule4(
        "django.utils.tree",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__tree = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__tree = (PyDictObject *)((PyModuleObject *)_module_django__utils__tree)->md_dict;

    assertObject( _module_django__utils__tree );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_c6d87df14dfab199a865c0ea670ae412, _module_django__utils__tree );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__tree );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__tree != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__tree, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_e6092b7e2fbe1f837c7c22407350ff71 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__tree, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_4c480db8109e1d357b530d33096bf256 );
    PyFrameObject *frame_module_django__utils__tree = MAKE_FRAME( _codeobj_be32c85747e5fe61771e5c48d62f3195, _module_django__utils__tree );

    FrameGuard frame_guard( frame_module_django__utils__tree );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__tree ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__tree, (Nuitka_StringObject *)_python_str_plain_copy, IMPORT_MODULE( _python_str_plain_copy, ((PyModuleObject *)_module_django__utils__tree)->md_dict, ((PyModuleObject *)_module_django__utils__tree)->md_dict, Py_None, _python_int_neg_1 ) );
        {
            frame_guard.setLineNumber( 8 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_Node_of_module_django__utils__tree(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__tree___metaclass__.isInitialized( false ) ? _mvar_django__utils__tree___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_Node, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__tree, (Nuitka_StringObject *)_python_str_plain_Node, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__tree)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__utils__tree );
}
