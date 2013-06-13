// Generated code for Python source for module 'django.dispatch.saferef'
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

// The _module_django__dispatch__saferef is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__dispatch__saferef;
PyDictObject *_moduledict_django__dispatch__saferef;

// The module level variables.
static PyObjectGlobalVariable_django__dispatch__saferef _mvar_django__dispatch__saferef_BoundMethodWeakref( &_module_django__dispatch__saferef, &_python_str_plain_BoundMethodWeakref );
static PyObjectGlobalVariable_django__dispatch__saferef _mvar_django__dispatch__saferef_BoundNonDescriptorMethodWeakref( &_module_django__dispatch__saferef, &_python_str_plain_BoundNonDescriptorMethodWeakref );
static PyObjectGlobalVariable_django__dispatch__saferef _mvar_django__dispatch__saferef___metaclass__( &_module_django__dispatch__saferef, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__dispatch__saferef _mvar_django__dispatch__saferef_get_bound_method_weakref( &_module_django__dispatch__saferef, &_python_str_plain_get_bound_method_weakref );
static PyObjectGlobalVariable_django__dispatch__saferef _mvar_django__dispatch__saferef_traceback( &_module_django__dispatch__saferef, &_python_str_plain_traceback );
static PyObjectGlobalVariable_django__dispatch__saferef _mvar_django__dispatch__saferef_weakref( &_module_django__dispatch__saferef, &_python_str_plain_weakref );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef(  );


static PyObject *MAKE_FUNCTION_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  );


static PyObject *MAKE_FUNCTION_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1_safeRef_of_module_django__dispatch__saferef(  );


static PyObject *MAKE_FUNCTION_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef(  );


static PyObject *MAKE_FUNCTION_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  );


static PyObject *MAKE_FUNCTION_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  );


static PyObject *MAKE_FUNCTION_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  );


static PyObject *MAKE_FUNCTION_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef(  );


static PyObject *MAKE_FUNCTION_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  );


static PyObject *MAKE_FUNCTION_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  );


static PyObject *MAKE_FUNCTION_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  );


static PyObject *MAKE_FUNCTION_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  );


static PyObject *MAKE_FUNCTION_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  );


// The module function definitions.
static PyObject *impl_function_1_safeRef_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_target, PyObject *_python_par_onDelete )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_target( _python_str_plain_target, _python_par_target );
    PyObjectLocalParameterVariableNoDel _python_var_onDelete( _python_str_plain_onDelete, _python_par_onDelete );
    PyObjectLocalVariable _python_var_reference( _python_str_plain_reference );

    // Actual function code.
    static PyFrameObject *frame_function_1_safeRef_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_1_safeRef_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_1_safeRef_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_safeRef_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_1_safeRef_of_module_django__dispatch__saferef );
        }

        frame_function_1_safeRef_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_2feaf78ea29f5a612f4cd36b5806a970, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_1_safeRef_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_1_safeRef_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 22 );
        if ( HAS_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___self__ ) )
        {
            frame_guard.setLineNumber( 23 );
            if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___self__ ) ).asObject() != Py_None ) )
            {
                frame_guard.setLineNumber( 26 );
                if ( (!( HAS_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___func__ ) )) )
                {
                    frame_guard.setLineNumber( 26 );
                    {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_4a09d7fcd586464babf475b3651a2216, PyObjectTemporary( MAKE_TUPLE1( _python_var_target.asObject() ) ).asObject() ) ).asObject() ) ).asObject() ) );
                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                    }
                }
                frame_guard.setLineNumber( 27 );
                {
                    PyObjectTempKeeper0 call5;
                    PyObjectTempKeeper0 make_dict1;
                    _python_var_reference.assign1( ( call5.assign( _mvar_django__dispatch__saferef_get_bound_method_weakref.asObject0() ), CALL_FUNCTION( call5.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict1.assign( _python_var_target.asObject() ), MAKE_DICT2( make_dict1.asObject0(), _python_str_plain_target, _python_var_onDelete.asObject(), _python_str_plain_onDelete ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 31 );
                return _python_var_reference.asObject1();
            }
        }
        frame_guard.setLineNumber( 32 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_callable ), _python_var_onDelete.asObject() ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 33 );
            {
                PyObjectTempKeeper1 call8;
                PyObjectTempKeeper0 call9;
                return ( call8.assign( LOOKUP_ATTRIBUTE( _mvar_django__dispatch__saferef_weakref.asObject0(), _python_str_plain_ref ) ), call9.assign( _python_var_target.asObject() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), call9.asObject0(), _python_var_onDelete.asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 35 );
            {
                PyObjectTempKeeper1 call11;
                return ( call11.assign( LOOKUP_ATTRIBUTE( _mvar_django__dispatch__saferef_weakref.asObject0(), _python_str_plain_ref ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_target.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_onDelete.updateLocalsDict( _python_var_target.updateLocalsDict( _python_var_reference.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_safeRef_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_1_safeRef_of_module_django__dispatch__saferef );
           frame_function_1_safeRef_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_safeRef_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_target = NULL;
    PyObject *_python_par_onDelete = NULL;
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
                PyErr_Format( PyExc_TypeError, "safeRef() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_target == key )
            {
                if (unlikely( _python_par_target ))
                {
                    PyErr_Format( PyExc_TypeError, "safeRef() got multiple values for keyword argument 'target'" );
                    goto error_exit;
                }

                _python_par_target = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_onDelete == key )
            {
                if (unlikely( _python_par_onDelete ))
                {
                    PyErr_Format( PyExc_TypeError, "safeRef() got multiple values for keyword argument 'onDelete'" );
                    goto error_exit;
                }

                _python_par_onDelete = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_target, key ) )
            {
                if (unlikely( _python_par_target ))
                {
                    PyErr_Format( PyExc_TypeError, "safeRef() got multiple values for keyword argument 'target'" );
                    goto error_exit;
                }

                _python_par_target = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_onDelete, key ) )
            {
                if (unlikely( _python_par_onDelete ))
                {
                    PyErr_Format( PyExc_TypeError, "safeRef() got multiple values for keyword argument 'onDelete'" );
                    goto error_exit;
                }

                _python_par_onDelete = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "safeRef() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "safeRef() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "safeRef() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "safeRef() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "safeRef() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "safeRef() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "safeRef() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "safeRef() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "safeRef() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "safeRef() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "safeRef() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "safeRef() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "safeRef() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_target != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "safeRef() got multiple values for keyword argument 'target'" );
             goto error_exit;
         }

        _python_par_target = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_onDelete != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "safeRef() got multiple values for keyword argument 'onDelete'" );
             goto error_exit;
         }

        _python_par_onDelete = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_onDelete == NULL )
    {
        _python_par_onDelete = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_onDelete );
    }


    return impl_function_1_safeRef_of_module_django__dispatch__saferef( self, _python_par_target, _python_par_onDelete );

error_exit:;

    Py_XDECREF( _python_par_target );
    Py_XDECREF( _python_par_onDelete );

    return NULL;
}

static PyObject *dparse_function_1_safeRef_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_safeRef_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_safeRef_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var__allInstances( _python_str_plain__allInstances );
    PyObjectLocalVariable _python_var___new__( _python_str_plain___new__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_calculateKey( _python_str_plain_calculateKey );
    PyObjectLocalVariable _python_var___str__( _python_str_plain___str__ );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );
    PyObjectLocalVariable _python_var___hash__( _python_str_plain___hash__ );
    PyObjectLocalVariable _python_var___bool__( _python_str_plain___bool__ );
    PyObjectLocalVariable _python_var___nonzero__( _python_str_plain___nonzero__ );
    PyObjectLocalVariable _python_var___eq__( _python_str_plain___eq__ );
    PyObjectLocalVariable _python_var___call__( _python_str_plain___call__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_saferef );
    _python_var___doc__.assign0( _python_str_digest_0c5ae1de9d91069e8eca5fadbf4bc584 );
    static PyFrameObject *frame_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_2_BoundMethodWeakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
        }

        frame_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_f0ea9bd0db60752a472ef22ab208526f, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 71 );
        _python_var__allInstances.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__dispatch__saferef_weakref.asObject0(), _python_str_plain_WeakValueDictionary ) ).asObject() ) );
        frame_guard.setLineNumber( 73 );
        _python_var___new__.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_staticmethod ), PyObjectTemporary( MAKE_FUNCTION_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  ) ).asObject() ) );
        _python_var___init__.assign1( MAKE_FUNCTION_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  ) );
        _python_var_calculateKey.assign1( MAKE_FUNCTION_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  ) );
        frame_guard.setLineNumber( 143 );
        _python_var_calculateKey.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_classmethod ), _python_var_calculateKey.asObject() ) );
        _python_var___str__.assign1( MAKE_FUNCTION_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  ) );
        frame_guard.setLineNumber( 153 );
        _python_var___repr__.assign0( _python_var___str__.asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var___call__.updateLocalsDict( _python_var___eq__.updateLocalsDict( _python_var___nonzero__.updateLocalsDict( _python_var___bool__.updateLocalsDict( _python_var___hash__.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___str__.updateLocalsDict( _python_var_calculateKey.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___new__.updateLocalsDict( _python_var__allInstances.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
           frame_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;
        }

        throw;
    }
    _python_var___hash__.assign1( MAKE_FUNCTION_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  ) );
    _python_var___bool__.assign1( MAKE_FUNCTION_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  ) );
    _python_var___nonzero__.assign1( MAKE_FUNCTION_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  ) );
    _python_var___eq__.assign1( MAKE_FUNCTION_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  ) );
    _python_var___call__.assign1( MAKE_FUNCTION_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  ) );
    return _python_var___call__.updateLocalsDict( _python_var___eq__.updateLocalsDict( _python_var___nonzero__.updateLocalsDict( _python_var___bool__.updateLocalsDict( _python_var___hash__.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___str__.updateLocalsDict( _python_var_calculateKey.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___new__.updateLocalsDict( _python_var__allInstances.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_cls, PyObject *_python_par_target, PyObject *_python_par_onDelete, PyObject *_python_par_arguments, PyObject *_python_par_named )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );
    PyObjectLocalParameterVariableNoDel _python_var_target( _python_str_plain_target, _python_par_target );
    PyObjectLocalParameterVariableNoDel _python_var_onDelete( _python_str_plain_onDelete, _python_par_onDelete );
    PyObjectLocalParameterVariableNoDel _python_var_arguments( _python_str_plain_arguments, _python_par_arguments );
    PyObjectLocalParameterVariableNoDel _python_var_named( _python_str_plain_named, _python_par_named );
    PyObjectLocalVariable _python_var_key( _python_str_plain_key );
    PyObjectLocalVariable _python_var_current( _python_str_plain_current );
    PyObjectLocalVariable _python_var_base( _python_str_plain_base );

    // Actual function code.
    static PyFrameObject *frame_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
        }

        frame_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_f8643bba5b29d9d6da66fc024fbe2610, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 85 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_key.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain_calculateKey ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_target.asObject() ) ) );
        }
        frame_guard.setLineNumber( 86 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_current.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__allInstances ) ).asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_key.asObject() ) ) );
        }
        frame_guard.setLineNumber( 87 );
        if ( ( _python_var_current.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 88 );
            {
                PyObjectTempKeeper1 call5;
                DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_current.asObject(), _python_str_plain_deletionMethods ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_onDelete.asObject() ) ) );
            }
            frame_guard.setLineNumber( 89 );
            return _python_var_current.asObject1();
        }
        else
        {
            frame_guard.setLineNumber( 91 );
            {
                PyObjectTempKeeper1 call9;
                PyObjectTempKeeper0 super7;
                _python_var_base.assign1( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super7.assign( _mvar_django__dispatch__saferef_BoundMethodWeakref.asObject0() ), BUILTIN_SUPER( super7.asObject0(), _python_var_cls.asObject() ) ) ).asObject(), _python_str_plain___new__ ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_cls.asObject() ) ) );
            }
            frame_guard.setLineNumber( 92 );
            {
                    PyObject *tmp_identifier = _python_var_base.asObject();
                    PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__allInstances ) );
                    SET_SUBSCRIPT( tmp_identifier, tmp_subscribed.asObject(), _python_var_key.asObject() );
            }
            frame_guard.setLineNumber( 93 );
            {
                PyObjectTempKeeper1 call_tmp13;
                PyObjectTempKeeper1 call_tmp14;
                PyObjectTempKeeper0 call_tmp15;
                PyObjectTempKeeper0 make_tuple11;
                DECREASE_REFCOUNT( ( call_tmp13.assign( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain___init__ ) ), call_tmp14.assign( ( make_tuple11.assign( _python_var_target.asObject() ), MAKE_TUPLE2( make_tuple11.asObject0(), _python_var_onDelete.asObject() ) ) ), call_tmp15.assign( _python_var_arguments.asObject() ), impl_function_8_complex_call_helper_pos_star_list_star_dict_of_module___internal__( call_tmp13.asObject(), call_tmp14.asObject(), call_tmp15.asObject(), _python_var_named.asObject1() ) ) );
            }
            frame_guard.setLineNumber( 94 );
            return _python_var_base.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_named.updateLocalsDict( _python_var_arguments.updateLocalsDict( _python_var_onDelete.updateLocalsDict( _python_var_target.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_base.updateLocalsDict( _python_var_current.updateLocalsDict( _python_var_key.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
           frame_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_target = NULL;
    PyObject *_python_par_onDelete = NULL;
    PyObject *_python_par_arguments = NULL;
    PyObject *_python_par_named = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_named = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_named = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "__new__() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_named, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "__new__() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_named = (PyObject *)split_copy;
        }
        else
        {
            _python_par_named = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "__new__() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_named, entry->me_key, value );

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
            _python_par_named = PyDict_New();
        }
    }

    // Check if argument cls was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_named, _python_str_plain_cls );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_cls == NULL );

            _python_par_cls = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_named, _python_str_plain_cls );

            kw_found += 1;
        }
    }

    // Check if argument target was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_named, _python_str_plain_target );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_target == NULL );

            _python_par_target = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_named, _python_str_plain_target );

            kw_found += 1;
        }
    }

    // Check if argument onDelete was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_named, _python_str_plain_onDelete );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_onDelete == NULL );

            _python_par_onDelete = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_named, _python_str_plain_onDelete );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__new__() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__new__() takes at least %d non-keyword arguments (%zd given)", 3, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "__new__() takes at least %d arguments (%zd given)", 3, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'cls'" );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_target != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'target'" );
             goto error_exit;
         }

        _python_par_target = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_onDelete != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__new__() got multiple values for keyword argument 'onDelete'" );
             goto error_exit;
         }

        _python_par_onDelete = INCREASE_REFCOUNT( args[ 2 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 3 )
    {
        _python_par_arguments = PyTuple_New( args_size - 3 );

        for( Py_ssize_t i = 0; i < args_size - 3; i++ )
        {
           PyTuple_SET_ITEM( _python_par_arguments, i, INCREASE_REFCOUNT( args[3+i] ) );
        }
    }
    else
    {
        _python_par_arguments = INCREASE_REFCOUNT( _python_tuple_empty );
    }
    // Assign values not given to defaults
    if ( _python_par_onDelete == NULL )
    {
        _python_par_onDelete = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_onDelete );
    }


    return impl_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, _python_par_cls, _python_par_target, _python_par_onDelete, _python_par_arguments, _python_par_named );

error_exit:;

    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_target );
    Py_XDECREF( _python_par_onDelete );
    Py_XDECREF( _python_par_arguments );
    Py_XDECREF( _python_par_named );

    return NULL;
}

static PyObject *dparse_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), MAKE_TUPLE( &args[ 3 ], size > 3 ? size-3 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_target, PyObject *_python_par_onDelete )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_target( _python_str_plain_target, _python_par_target );
    PyObjectLocalParameterVariableNoDel _python_var_onDelete( _python_str_plain_onDelete, _python_par_onDelete );
    PyObjectLocalVariable _python_var_remove( _python_str_plain_remove );

    // Actual function code.
    static PyFrameObject *frame_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
        }

        frame_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_e30cf332c9c400bd071564f8cd351650, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 110 );
        _python_var_remove.assign1( MAKE_FUNCTION_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( MAKE_TUPLE1( _python_var_self.asObject() ) ) );
        frame_guard.setLineNumber( 129 );
        {
                PyObjectTemporary tmp_identifier( MAKE_LIST1( _python_var_onDelete.asObject1() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_deletionMethods );
        }
        frame_guard.setLineNumber( 130 );
        {
            PyObjectTempKeeper1 call1;
            {
                PyObjectTemporary tmp_identifier( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_calculateKey ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_target.asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_key );
        }
        }
        frame_guard.setLineNumber( 131 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 call4;
            {
                PyObjectTemporary tmp_identifier( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__dispatch__saferef_weakref.asObject0(), _python_str_plain_ref ) ), call4.assign( LOOKUP_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___self__ ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_remove.asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_weakSelf );
        }
        }
        frame_guard.setLineNumber( 132 );
        {
            PyObjectTempKeeper1 call6;
            PyObjectTempKeeper1 call7;
            {
                PyObjectTemporary tmp_identifier( ( call6.assign( LOOKUP_ATTRIBUTE( _mvar_django__dispatch__saferef_weakref.asObject0(), _python_str_plain_ref ) ), call7.assign( LOOKUP_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___func__ ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), call7.asObject0(), _python_var_remove.asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_weakFunc );
        }
        }
        frame_guard.setLineNumber( 133 );
        {
                PyObjectTemporary tmp_identifier( TO_STR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___self__ ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_selfName );
        }
        frame_guard.setLineNumber( 134 );
        {
                PyObjectTemporary tmp_identifier( TO_STR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___func__ ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_funcName );
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
        frame_guard.getFrame0()->f_locals = _python_var_onDelete.updateLocalsDict( _python_var_target.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_remove.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
           frame_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_target = NULL;
    PyObject *_python_par_onDelete = NULL;
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
            if ( found == false && _python_str_plain_target == key )
            {
                if (unlikely( _python_par_target ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'target'" );
                    goto error_exit;
                }

                _python_par_target = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_onDelete == key )
            {
                if (unlikely( _python_par_onDelete ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'onDelete'" );
                    goto error_exit;
                }

                _python_par_onDelete = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_target, key ) )
            {
                if (unlikely( _python_par_target ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'target'" );
                    goto error_exit;
                }

                _python_par_target = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_onDelete, key ) )
            {
                if (unlikely( _python_par_onDelete ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'onDelete'" );
                    goto error_exit;
                }

                _python_par_onDelete = value;

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
         if (unlikely( _python_par_target != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'target'" );
             goto error_exit;
         }

        _python_par_target = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_onDelete != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'onDelete'" );
             goto error_exit;
         }

        _python_par_onDelete = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_onDelete == NULL )
    {
        _python_par_onDelete = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_onDelete );
    }


    return impl_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, _python_par_self, _python_par_target, _python_par_onDelete );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_target );
    Py_XDECREF( _python_par_onDelete );

    return NULL;
}

static PyObject *dparse_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_weak, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_weak( _python_str_plain_weak, _python_par_weak );
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_methods( _python_str_plain_methods );
    PyObjectLocalVariable _python_var_function( _python_str_plain_function );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );

    // Actual function code.
    static PyFrameObject *frame_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
        }

        frame_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_211b0d0a3ecc689520269b8703ea952d, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 112 );
        _python_var_methods.assign1( LOOKUP_INDEX_SLICE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_deletionMethods ) ).asObject(), 0, PY_SSIZE_T_MAX ) );
        frame_guard.setLineNumber( 113 );
        DEL_SLICE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_deletionMethods ) ).asObject(), 0, PY_SSIZE_T_MAX );
        frame_guard.setLineNumber( 114 );
        try
        {
            frame_guard.setLineNumber( 115 );
            {
                    PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain__allInstances ) );
                    DEL_SUBSCRIPT( tmp_subscribed.asObject(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_key ) ).asObject() );
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
            frame_guard.setLineNumber( 118 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_methods.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 118 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_function.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 119 );
                try
                {
                    frame_guard.setLineNumber( 120 );
                    if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_callable ), _python_var_function.asObject() ) ).asObject() ) )
                    {
                        frame_guard.setLineNumber( 121 );
                        {
                            PyObjectTempKeeper0 call4;
                            DECREASE_REFCOUNT( ( call4.assign( _python_var_function.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_self.asObject() ) ) );
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

                    if ( _exception.matches( PyExc_Exception ) )
                    {
                        frame_guard.detachFrame();
                        _python_var_e.assign0( _exception.getValue() );
                        frame_guard.setLineNumber( 123 );
                        try
                        {
                            frame_guard.setLineNumber( 124 );
                            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__dispatch__saferef_traceback.asObject0(), _python_str_plain_print_exc ) ).asObject() ) );
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
                                frame_guard.detachFrame();
                                frame_guard.setLineNumber( 126 );
                                {
                                    PyObjectTempKeeper0 make_tuple1;
                                    PyObjectTempKeeper0 make_tuple2;
                                    PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_1bafaded6e8460ffa40bed79960ac37a, PyObjectTemporary( ( make_tuple1.assign( _python_var_self.asObject() ), make_tuple2.assign( _python_var_function.asObject() ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), _python_var_e.asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() );
                                PRINT_NEW_LINE_TO( NULL );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_weak.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_function.updateLocalsDict( _python_var_methods.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
           frame_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_weak = NULL;
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
                PyErr_Format( PyExc_TypeError, "remove() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_weak == key )
            {
                if (unlikely( _python_par_weak ))
                {
                    PyErr_Format( PyExc_TypeError, "remove() got multiple values for keyword argument 'weak'" );
                    goto error_exit;
                }

                _python_par_weak = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "remove() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_weak, key ) )
            {
                if (unlikely( _python_par_weak ))
                {
                    PyErr_Format( PyExc_TypeError, "remove() got multiple values for keyword argument 'weak'" );
                    goto error_exit;
                }

                _python_par_weak = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "remove() got multiple values for keyword argument 'self'" );
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
                   "remove() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "remove() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "remove() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "remove() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "remove() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "remove() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "remove() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "remove() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "remove() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "remove() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "remove() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "remove() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "remove() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_weak != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "remove() got multiple values for keyword argument 'weak'" );
             goto error_exit;
         }

        _python_par_weak = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "remove() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_self == NULL )
    {
        _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_self );
    }


    return impl_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, _python_par_weak, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_weak );
    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_cls, PyObject *_python_par_target )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );
    PyObjectLocalParameterVariableNoDel _python_var_target( _python_str_plain_target, _python_par_target );

    // Actual function code.
    static PyFrameObject *frame_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
        }

        frame_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_db34254d69d195e7b59ac70af43c18e7, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 142 );
        {
            PyObjectTempKeeper1 make_tuple1;
            return ( make_tuple1.assign( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_id ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___self__ ) ).asObject() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_id ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___func__ ) ).asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_target.updateLocalsDict( _python_var_cls.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
           frame_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_target = NULL;
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
                PyErr_Format( PyExc_TypeError, "calculateKey() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "calculateKey() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_target == key )
            {
                if (unlikely( _python_par_target ))
                {
                    PyErr_Format( PyExc_TypeError, "calculateKey() got multiple values for keyword argument 'target'" );
                    goto error_exit;
                }

                _python_par_target = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cls, key ) )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "calculateKey() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_target, key ) )
            {
                if (unlikely( _python_par_target ))
                {
                    PyErr_Format( PyExc_TypeError, "calculateKey() got multiple values for keyword argument 'target'" );
                    goto error_exit;
                }

                _python_par_target = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "calculateKey() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "calculateKey() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "calculateKey() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "calculateKey() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "calculateKey() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "calculateKey() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "calculateKey() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "calculateKey() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "calculateKey() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "calculateKey() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "calculateKey() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "calculateKey() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "calculateKey() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "calculateKey() got multiple values for keyword argument 'cls'" );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_target != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "calculateKey() got multiple values for keyword argument 'target'" );
             goto error_exit;
         }

        _python_par_target = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, _python_par_cls, _python_par_target );

error_exit:;

    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_target );

    return NULL;
}

static PyObject *dparse_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
        }

        frame_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_b1b77ee4685ad4c3d348c62b0a5ffa68, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 147 );
        {
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple2;
            return BINARY_OPERATION_REMAINDER( _python_str_digest_621c9210b38f9aad10720813a9ceaebb, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ), make_tuple2.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_selfName ) ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_funcName ) ).asObject() ) ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
           frame_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
        }

        frame_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_17a0c3cdbaaf1bfc7ae0eff98a254123, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 156 );
        return CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_hash ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_key ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
           frame_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
        }

        frame_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_4b46165f48466e3336059af6c0515873, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 160 );
        return INCREASE_REFCOUNT( BOOL_FROM( ( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _python_var_self.asObject() ) ).asObject() != Py_None ) ) );
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

        if ( frame_guard.getFrame0() == frame_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
           frame_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
        }

        frame_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_1847cdf9fda85a323557799a55efd09a, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 163 );
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

        if ( frame_guard.getFrame0() == frame_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
           frame_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_other )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_other( _python_str_plain_other, _python_par_other );

    // Actual function code.
    static PyFrameObject *frame_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
        }

        frame_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_7ed8307be1e85408a101d209b7073f25, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 167 );
        {
            PyObjectTempKeeper0 isinstance3;
            if ( (!( ( isinstance3.assign( _python_var_other.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject() ) ) )) )
        {
            frame_guard.setLineNumber( 168 );
            {
                PyObjectTempKeeper1 cmp1;
                return ( cmp1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), RICH_COMPARE_EQ( cmp1.asObject0(), PyObjectTemporary( BUILTIN_TYPE1( _python_var_other.asObject() ) ).asObject() ) );
            }
        }
        }
        frame_guard.setLineNumber( 169 );
        {
            PyObjectTempKeeper1 cmp5;
            return ( cmp5.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_key ) ), RICH_COMPARE_EQ( cmp5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_other.asObject(), _python_str_plain_key ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
           frame_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, _python_par_self, _python_par_other );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_other );

    return NULL;
}

static PyObject *dparse_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_target( _python_str_plain_target );
    PyObjectLocalVariable _python_var_function( _python_str_plain_function );

    // Actual function code.
    static PyFrameObject *frame_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
        }

        frame_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_404a9996731997961d3c8186a8dc415a, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 182 );
        _python_var_target.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_weakSelf ) ).asObject() ) );
        frame_guard.setLineNumber( 183 );
        if ( ( _python_var_target.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 184 );
            _python_var_function.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_weakFunc ) ).asObject() ) );
            frame_guard.setLineNumber( 185 );
            if ( ( _python_var_function.asObject() != Py_None ) )
            {
                frame_guard.setLineNumber( 186 );
                {
                    PyObjectTempKeeper1 call1;
                    return ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_function.asObject(), _python_str_plain___get__ ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_target.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_function.updateLocalsDict( _python_var_target.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef );
           frame_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__call__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
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
                   "__call__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__call__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__call__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___call__( _python_str_plain___call__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_saferef );
    _python_var___doc__.assign0( _python_str_digest_199a10d666e94f489cc33e5eb31c81fc );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef(  ) );
    _python_var___call__.assign1( MAKE_FUNCTION_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef(  ) );
    return _python_var___call__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_target, PyObject *_python_par_onDelete )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_target( _python_str_plain_target, _python_par_target );
    PyObjectLocalParameterVariableNoDel _python_var_onDelete( _python_str_plain_onDelete, _python_par_onDelete );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef );
        }

        frame_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_79590e36ece050f9c8ce05adb1005747, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 220 );
        {
            PyObjectTempKeeper1 cmp7;
            PyObjectTempKeeper1 getattr4;
            if ( (!( ( cmp7.assign( ( getattr4.assign( LOOKUP_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___self__ ) ), BUILTIN_GETATTR( getattr4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___name__ ) ).asObject(), NULL ) ) ), RICH_COMPARE_BOOL_EQ( cmp7.asObject0(), _python_var_target.asObject() ) ) )) )
        {
            frame_guard.setLineNumber( 220 );
            {
                PyObjectTempKeeper0 make_tuple1;
                PyObjectTempKeeper1 make_tuple2;
                {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_7bf87c76c3f857594480eebc1a7d2095, PyObjectTemporary( ( make_tuple1.assign( _python_var_target.asObject() ), make_tuple2.assign( LOOKUP_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___name__ ) ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___self__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        }
        frame_guard.setLineNumber( 223 );
        {
            PyObjectTempKeeper1 call11;
            PyObjectTempKeeper0 call12;
            PyObjectTempKeeper0 super9;
            DECREASE_REFCOUNT( ( call11.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super9.assign( _mvar_django__dispatch__saferef_BoundNonDescriptorMethodWeakref.asObject0() ), BUILTIN_SUPER( super9.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), call12.assign( _python_var_target.asObject() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), call12.asObject0(), _python_var_onDelete.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_onDelete.updateLocalsDict( _python_var_target.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef );
           frame_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_target = NULL;
    PyObject *_python_par_onDelete = NULL;
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
            if ( found == false && _python_str_plain_target == key )
            {
                if (unlikely( _python_par_target ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'target'" );
                    goto error_exit;
                }

                _python_par_target = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_onDelete == key )
            {
                if (unlikely( _python_par_onDelete ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'onDelete'" );
                    goto error_exit;
                }

                _python_par_onDelete = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_target, key ) )
            {
                if (unlikely( _python_par_target ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'target'" );
                    goto error_exit;
                }

                _python_par_target = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_onDelete, key ) )
            {
                if (unlikely( _python_par_onDelete ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'onDelete'" );
                    goto error_exit;
                }

                _python_par_onDelete = value;

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
         if (unlikely( _python_par_target != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'target'" );
             goto error_exit;
         }

        _python_par_target = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_onDelete != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'onDelete'" );
             goto error_exit;
         }

        _python_par_onDelete = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_onDelete == NULL )
    {
        _python_par_onDelete = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_onDelete );
    }


    return impl_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef( self, _python_par_self, _python_par_target, _python_par_onDelete );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_target );
    Py_XDECREF( _python_par_onDelete );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_target( _python_str_plain_target );
    PyObjectLocalVariable _python_var_function( _python_str_plain_function );

    // Actual function code.
    static PyFrameObject *frame_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef );
        }

        frame_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_f2b7cf50764a8c0a95a398bee0d044d9, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 236 );
        _python_var_target.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_weakSelf ) ).asObject() ) );
        frame_guard.setLineNumber( 237 );
        if ( ( _python_var_target.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 238 );
            _python_var_function.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_weakFunc ) ).asObject() ) );
            frame_guard.setLineNumber( 239 );
            if ( ( _python_var_function.asObject() != Py_None ) )
            {
                frame_guard.setLineNumber( 246 );
                {
                    PyObjectTempKeeper0 getattr1;
                    return ( getattr1.assign( _python_var_target.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_function.asObject(), _python_str_plain___name__ ) ).asObject(), NULL ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_function.updateLocalsDict( _python_var_target.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef );
           frame_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__call__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
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
                   "__call__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__call__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__call__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject *_python_par_target, PyObject *_python_par_onDelete )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_target( _python_str_plain_target, _python_par_target );
    PyObjectLocalParameterVariableNoDel _python_var_onDelete( _python_str_plain_onDelete, _python_par_onDelete );

    // Actual function code.
    static PyFrameObject *frame_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef = NULL;

    if ( isFrameUnusable( frame_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef ) )
    {
        if ( frame_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_get_bound_method_weakref_of_module_django__dispatch__saferef" );
#endif
            Py_DECREF( frame_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef );
        }

        frame_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_9f548acb896be0f6673e969ee3e5374b, _module_django__dispatch__saferef );
    }

    FrameGuard frame_guard( frame_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 252 );
        if ( HAS_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___get__ ) )
        {
            frame_guard.setLineNumber( 254 );
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 make_dict1;
                return ( call5.assign( _mvar_django__dispatch__saferef_BoundMethodWeakref.asObject0() ), CALL_FUNCTION( call5.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict1.assign( _python_var_target.asObject() ), MAKE_DICT2( make_dict1.asObject0(), _python_str_plain_target, _python_var_onDelete.asObject(), _python_str_plain_onDelete ) ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 257 );
            {
                PyObjectTempKeeper0 call12;
                PyObjectTempKeeper0 make_dict8;
                return ( call12.assign( _mvar_django__dispatch__saferef_BoundNonDescriptorMethodWeakref.asObject0() ), CALL_FUNCTION( call12.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict8.assign( _python_var_target.asObject() ), MAKE_DICT2( make_dict8.asObject0(), _python_str_plain_target, _python_var_onDelete.asObject(), _python_str_plain_onDelete ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_onDelete.updateLocalsDict( _python_var_target.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef )
        {
           Py_DECREF( frame_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef );
           frame_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_target = NULL;
    PyObject *_python_par_onDelete = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_target == key )
            {
                if (unlikely( _python_par_target ))
                {
                    PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() got multiple values for keyword argument 'target'" );
                    goto error_exit;
                }

                _python_par_target = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_onDelete == key )
            {
                if (unlikely( _python_par_onDelete ))
                {
                    PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() got multiple values for keyword argument 'onDelete'" );
                    goto error_exit;
                }

                _python_par_onDelete = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_target, key ) )
            {
                if (unlikely( _python_par_target ))
                {
                    PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() got multiple values for keyword argument 'target'" );
                    goto error_exit;
                }

                _python_par_target = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_onDelete, key ) )
            {
                if (unlikely( _python_par_onDelete ))
                {
                    PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() got multiple values for keyword argument 'onDelete'" );
                    goto error_exit;
                }

                _python_par_onDelete = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_bound_method_weakref() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_target != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() got multiple values for keyword argument 'target'" );
             goto error_exit;
         }

        _python_par_target = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_onDelete != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_bound_method_weakref() got multiple values for keyword argument 'onDelete'" );
             goto error_exit;
         }

        _python_par_onDelete = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef( self, _python_par_target, _python_par_onDelete );

error_exit:;

    Py_XDECREF( _python_par_target );
    Py_XDECREF( _python_par_onDelete );

    return NULL;
}

static PyObject *dparse_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef,
        dparse_function_1___init___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_79590e36ece050f9c8ce05adb1005747,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        _python_str_digest_91c3dea14722738a1b63b7b714da5c6d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        dparse_function_1___new___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        _python_str_plain___new__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f8643bba5b29d9d6da66fc024fbe2610,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        _python_str_digest_f640b89bc4be3e51d59f323d7d150243
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        dparse_function_1_remove_of_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        _python_str_plain_remove,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_211b0d0a3ecc689520269b8703ea952d,
        defaults,
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        _python_str_digest_12f668c27721fc4980425b68ee33fb90
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_safeRef_of_module_django__dispatch__saferef(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_safeRef_of_module_django__dispatch__saferef,
        dparse_function_1_safeRef_of_module_django__dispatch__saferef,
        _python_str_plain_safeRef,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2feaf78ea29f5a612f4cd36b5806a970,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        _python_str_digest_54e27287b4a9c04e4b1754944a3f5ef8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef,
        dparse_function_2___call___of_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef,
        _python_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f2b7cf50764a8c0a95a398bee0d044d9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        _python_str_digest_68fedce4c82f7737319c5f7b41fb6d0b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        dparse_function_2___init___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e30cf332c9c400bd071564f8cd351650,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        _python_str_digest_91c3dea14722738a1b63b7b714da5c6d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        dparse_function_3_calculateKey_of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        _python_str_plain_calculateKey,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_db34254d69d195e7b59ac70af43c18e7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        _python_str_digest_ea3b6127d72981e31aead990b0d208f7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        dparse_function_4___str___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        _python_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b1b77ee4685ad4c3d348c62b0a5ffa68,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        _python_str_digest_446a36c3d3587a46573b0f0b408c0b55
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef,
        dparse_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef,
        _python_str_plain_get_bound_method_weakref,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9f548acb896be0f6673e969ee3e5374b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        _python_str_digest_9d8a9bf95bd09046f07d9885141ae2f9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        dparse_function_5___hash___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        _python_str_plain___hash__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_17a0c3cdbaaf1bfc7ae0eff98a254123,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        dparse_function_6___bool___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        _python_str_plain___bool__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4b46165f48466e3336059af6c0515873,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        _python_str_digest_86766c919096d3be3c7fdc338dce111d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        dparse_function_7___nonzero___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        _python_str_plain___nonzero__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1847cdf9fda85a323557799a55efd09a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        dparse_function_8___eq___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        _python_str_plain___eq__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7ed8307be1e85408a101d209b7073f25,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        _python_str_digest_c73ba4a6f9af59939d4354236b35351c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        dparse_function_9___call___of_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef,
        _python_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_404a9996731997961d3c8186a8dc415a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__saferef,
        _python_str_digest_68fedce4c82f7737319c5f7b41fb6d0b
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.dispatch.saferef",   /* m_name */
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

MOD_INIT_DECL( django__dispatch__saferef )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__dispatch__saferef );
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

    // puts( "in initdjango__dispatch__saferef" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__dispatch__saferef = Py_InitModule4(
        "django.dispatch.saferef",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__dispatch__saferef = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__dispatch__saferef = (PyDictObject *)((PyModuleObject *)_module_django__dispatch__saferef)->md_dict;

    assertObject( _module_django__dispatch__saferef );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_da0eb250509a87bf1a5c93f4b390d5be, _module_django__dispatch__saferef );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__dispatch__saferef );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__dispatch__saferef != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__dispatch__saferef, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_83c650b2e62b61c5237b1a450d658d32 );
    UPDATE_STRING_DICT0( _moduledict_django__dispatch__saferef, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_3daaaafea291aa64db167e944af4aa48 );
    PyFrameObject *frame_module_django__dispatch__saferef = MAKE_FRAME( _codeobj_66e30e0b40371564a040dc8601c404f1, _module_django__dispatch__saferef );

    FrameGuard frame_guard( frame_module_django__dispatch__saferef );
    try
    {
        assert( Py_REFCNT( frame_module_django__dispatch__saferef ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__dispatch__saferef, (Nuitka_StringObject *)_python_str_plain_traceback, IMPORT_MODULE( _python_str_plain_traceback, ((PyModuleObject *)_module_django__dispatch__saferef)->md_dict, ((PyModuleObject *)_module_django__dispatch__saferef)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__dispatch__saferef, (Nuitka_StringObject *)_python_str_plain_weakref, IMPORT_MODULE( _python_str_plain_weakref, ((PyModuleObject *)_module_django__dispatch__saferef)->md_dict, ((PyModuleObject *)_module_django__dispatch__saferef)->md_dict, Py_None, _python_int_neg_1 ) );
        UPDATE_STRING_DICT1( _moduledict_django__dispatch__saferef, (Nuitka_StringObject *)_python_str_plain_safeRef, MAKE_FUNCTION_function_1_safeRef_of_module_django__dispatch__saferef(  ) );
        {
            frame_guard.setLineNumber( 37 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_BoundMethodWeakref_of_module_django__dispatch__saferef(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__dispatch__saferef___metaclass__.isInitialized( false ) ? _mvar_django__dispatch__saferef___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_BoundMethodWeakref, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__dispatch__saferef, (Nuitka_StringObject *)_python_str_plain_BoundMethodWeakref, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 189 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__dispatch__saferef_BoundMethodWeakref.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_BoundNonDescriptorMethodWeakref_of_module_django__dispatch__saferef(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__dispatch__saferef___metaclass__.isInitialized( false ) ? _mvar_django__dispatch__saferef___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_BoundNonDescriptorMethodWeakref, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__dispatch__saferef, (Nuitka_StringObject *)_python_str_plain_BoundNonDescriptorMethodWeakref, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__dispatch__saferef)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__dispatch__saferef, (Nuitka_StringObject *)_python_str_plain_get_bound_method_weakref, MAKE_FUNCTION_function_4_get_bound_method_weakref_of_module_django__dispatch__saferef(  ) );

   return MOD_RETURN_VALUE( _module_django__dispatch__saferef );
}
