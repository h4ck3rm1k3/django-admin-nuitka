// Generated code for Python source for module 'django.db.models.fields.subclassing'
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

// The _module_django__db__models__fields__subclassing is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db__models__fields__subclassing;
PyDictObject *_moduledict_django__db__models__fields__subclassing;

// The module level variables.
static PyObjectGlobalVariable_django__db__models__fields__subclassing _mvar_django__db__models__fields__subclassing_Creator( &_module_django__db__models__fields__subclassing, &_python_str_plain_Creator );
static PyObjectGlobalVariable_django__db__models__fields__subclassing _mvar_django__db__models__fields__subclassing_SubfieldBase( &_module_django__db__models__fields__subclassing, &_python_str_plain_SubfieldBase );
static PyObjectGlobalVariable_django__db__models__fields__subclassing _mvar_django__db__models__fields__subclassing___metaclass__( &_module_django__db__models__fields__subclassing, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__db__models__fields__subclassing _mvar_django__db__models__fields__subclassing_make_contrib( &_module_django__db__models__fields__subclassing, &_python_str_plain_make_contrib );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_Creator_of_module_django__db__models__fields__subclassing(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing(  );


static PyObject *MAKE_FUNCTION_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing(  );


static PyObject *MAKE_FUNCTION_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing( PyObjectSharedLocalVariable &python_closure_func, PyObjectSharedLocalVariable &python_closure_superclass );


// This structure is for attachment as self of function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing.
// It is allocated at the time the function object is created.
struct _context_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_func;
    PyObjectClosureVariable python_closure_superclass;
};

static void _context_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing_destructor( void *context_voidptr )
{
    _context_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing_t *_python_context = (_context_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing(  );


static PyObject *MAKE_FUNCTION_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing(  );


static PyObject *MAKE_FUNCTION_function_3_make_contrib_of_module_django__db__models__fields__subclassing(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___new__( _python_str_plain___new__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_subclassing );
    _python_var___doc__.assign0( _python_str_digest_3c32ba6fa426c8777da03040e1ae9a82 );
    static PyFrameObject *frame_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing = NULL;

    if ( isFrameUnusable( frame_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing ) )
    {
        if ( frame_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_1_SubfieldBase_of_module_django__db__models__fields__subclassing" );
#endif
            Py_DECREF( frame_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing );
        }

        frame_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing = MAKE_FRAME( _codeobj_087f539f0db2fea9108faed3b1bc0b26, _module_django__db__models__fields__subclassing );
    }

    FrameGuard frame_guard( frame_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing );
    try
    {
        assert( Py_REFCNT( frame_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 15 );
        _python_var___new__.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_staticmethod ), PyObjectTemporary( MAKE_FUNCTION_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing(  ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var___new__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing )
        {
           Py_DECREF( frame_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing );
           frame_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing = NULL;
        }

        throw;
    }
    return _python_var___new__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject *_python_par_cls, PyObject *_python_par_name, PyObject *_python_par_bases, PyObject *_python_par_attrs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_bases( _python_str_plain_bases, _python_par_bases );
    PyObjectLocalParameterVariableNoDel _python_var_attrs( _python_str_plain_attrs, _python_par_attrs );
    PyObjectLocalVariable _python_var_new_class( _python_str_plain_new_class );

    // Actual function code.
    static PyFrameObject *frame_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing = NULL;

    if ( isFrameUnusable( frame_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing ) )
    {
        if ( frame_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing" );
#endif
            Py_DECREF( frame_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing );
        }

        frame_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing = MAKE_FRAME( _codeobj_4a8288a7a366e03c24d46bdf3e56acbe, _module_django__db__models__fields__subclassing );
    }

    FrameGuard frame_guard( frame_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing );
    try
    {
        assert( Py_REFCNT( frame_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 16 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper0 super1;
            _python_var_new_class.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__db__models__fields__subclassing_SubfieldBase.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_cls.asObject() ) ) ).asObject(), _python_str_plain___new__ ) ), call4.assign( _python_var_cls.asObject() ), call5.assign( _python_var_name.asObject() ), call6.assign( _python_var_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), call5.asObject0(), call6.asObject0(), _python_var_attrs.asObject() ) ) );
        }
        frame_guard.setLineNumber( 17 );
        {
            PyObjectTempKeeper0 call8;
            PyObjectTempKeeper0 call9;
            {
                PyObjectTemporary tmp_identifier( ( call8.assign( _mvar_django__db__models__fields__subclassing_make_contrib.asObject0() ), call9.assign( _python_var_new_class.asObject() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), call9.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_attrs.asObject(), _python_str_plain_get ) ).asObject(), _python_str_plain_contribute_to_class ) ).asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_new_class.asObject(), _python_str_plain_contribute_to_class );
        }
        }
        frame_guard.setLineNumber( 20 );
        return _python_var_new_class.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_attrs.updateLocalsDict( _python_var_bases.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_new_class.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing )
        {
           Py_DECREF( frame_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing );
           frame_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing( self, _python_par_cls, _python_par_name, _python_par_bases, _python_par_attrs );

error_exit:;

    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_bases );
    Py_XDECREF( _python_par_attrs );

    return NULL;
}

static PyObject *dparse_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_Creator_of_module_django__db__models__fields__subclassing(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___get__( _python_str_plain___get__ );
    PyObjectLocalVariable _python_var___set__( _python_str_plain___set__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_subclassing );
    _python_var___doc__.assign0( _python_str_digest_1ea3a5f1aeea9f89708f112a9c0556b4 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing(  ) );
    _python_var___get__.assign1( MAKE_FUNCTION_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing(  ) );
    _python_var___set__.assign1( MAKE_FUNCTION_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing(  ) );
    return _python_var___set__.updateLocalsDict( _python_var___get__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_field )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_field( _python_str_plain_field, _python_par_field );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing ) )
    {
        if ( frame_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing );
        }

        frame_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing = MAKE_FRAME( _codeobj_1180dcfeda903e6fbb50eb76a05b4512, _module_django__db__models__fields__subclassing );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 27 );
        {
                PyObject *tmp_identifier = _python_var_field.asObject();
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
        frame_guard.getFrame0()->f_locals = _python_var_field.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing )
        {
           Py_DECREF( frame_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing );
           frame_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
         if (unlikely( _python_par_field != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'field'" );
             goto error_exit;
         }

        _python_par_field = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing( self, _python_par_self, _python_par_field );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_field );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_obj, PyObject *_python_par_type )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_obj( _python_str_plain_obj, _python_par_obj );
    PyObjectLocalParameterVariableNoDel _python_var_type( _python_str_plain_type, _python_par_type );

    // Actual function code.
    static PyFrameObject *frame_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing = NULL;

    if ( isFrameUnusable( frame_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing ) )
    {
        if ( frame_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing" );
#endif
            Py_DECREF( frame_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing );
        }

        frame_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing = MAKE_FRAME( _codeobj_723b040c8b3f9d15678900ca852f6b73, _module_django__db__models__fields__subclassing );
    }

    FrameGuard frame_guard( frame_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing );
    try
    {
        assert( Py_REFCNT( frame_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 30 );
        if ( ( _python_var_obj.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 31 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AttributeError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_20abfa9f0c82a4f0cbd534fb26917403 ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 32 );
        {
            PyObjectTempKeeper1 subscr1;
            return ( subscr1.assign( LOOKUP_ATTRIBUTE( _python_var_obj.asObject(), _python_str_plain___dict__ ) ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_field ) ).asObject(), _python_str_plain_name ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_type.updateLocalsDict( _python_var_obj.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing )
        {
           Py_DECREF( frame_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing );
           frame_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_obj = NULL;
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
            if ( found == false && _python_str_plain_obj == key )
            {
                if (unlikely( _python_par_obj ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'obj'" );
                    goto error_exit;
                }

                _python_par_obj = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_obj, key ) )
            {
                if (unlikely( _python_par_obj ))
                {
                    PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'obj'" );
                    goto error_exit;
                }

                _python_par_obj = value;

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
         if (unlikely( _python_par_obj != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__get__() got multiple values for keyword argument 'obj'" );
             goto error_exit;
         }

        _python_par_obj = INCREASE_REFCOUNT( args[ 1 ] );
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


    return impl_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing( self, _python_par_self, _python_par_obj, _python_par_type );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_obj );
    Py_XDECREF( _python_par_type );

    return NULL;
}

static PyObject *dparse_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_obj, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_obj( _python_str_plain_obj, _python_par_obj );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing = NULL;

    if ( isFrameUnusable( frame_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing ) )
    {
        if ( frame_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing" );
#endif
            Py_DECREF( frame_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing );
        }

        frame_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing = MAKE_FRAME( _codeobj_8d2c068c36a799b9a98584ef7d4c4756, _module_django__db__models__fields__subclassing );
    }

    FrameGuard frame_guard( frame_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing );
    try
    {
        assert( Py_REFCNT( frame_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 35 );
        {
            PyObjectTempKeeper1 call1;
            {
                PyObjectTemporary tmp_identifier( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_field ) ).asObject(), _python_str_plain_to_python ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) );
                PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_obj.asObject(), _python_str_plain___dict__ ) );
                SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed.asObject(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_field ) ).asObject(), _python_str_plain_name ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_obj.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing )
        {
           Py_DECREF( frame_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing );
           frame_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_obj = NULL;
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
                PyErr_Format( PyExc_TypeError, "__set__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__set__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_obj == key )
            {
                if (unlikely( _python_par_obj ))
                {
                    PyErr_Format( PyExc_TypeError, "__set__() got multiple values for keyword argument 'obj'" );
                    goto error_exit;
                }

                _python_par_obj = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__set__() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "__set__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_obj, key ) )
            {
                if (unlikely( _python_par_obj ))
                {
                    PyErr_Format( PyExc_TypeError, "__set__() got multiple values for keyword argument 'obj'" );
                    goto error_exit;
                }

                _python_par_obj = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__set__() got multiple values for keyword argument 'value'" );
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
                   "__set__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__set__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__set__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__set__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__set__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__set__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__set__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__set__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__set__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__set__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__set__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__set__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__set__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__set__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_obj != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__set__() got multiple values for keyword argument 'obj'" );
             goto error_exit;
         }

        _python_par_obj = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__set__() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing( self, _python_par_self, _python_par_obj, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_obj );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_make_contrib_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject *_python_par_superclass, PyObject *_python_par_func )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_superclass( _python_str_plain_superclass, _python_par_superclass );
    PyObjectSharedLocalVariable _python_var_func( _python_str_plain_func, _python_par_func );
    PyObjectLocalVariable _python_var_contribute_to_class( _python_str_plain_contribute_to_class );

    // Actual function code.
    _python_var_contribute_to_class.assign1( MAKE_FUNCTION_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing( _python_var_func, _python_var_superclass ) );
    static PyFrameObject *frame_function_3_make_contrib_of_module_django__db__models__fields__subclassing = NULL;

    if ( isFrameUnusable( frame_function_3_make_contrib_of_module_django__db__models__fields__subclassing ) )
    {
        if ( frame_function_3_make_contrib_of_module_django__db__models__fields__subclassing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_make_contrib_of_module_django__db__models__fields__subclassing" );
#endif
            Py_DECREF( frame_function_3_make_contrib_of_module_django__db__models__fields__subclassing );
        }

        frame_function_3_make_contrib_of_module_django__db__models__fields__subclassing = MAKE_FRAME( _codeobj_4e1b44507480dc9b5045095cc9132571, _module_django__db__models__fields__subclassing );
    }

    FrameGuard frame_guard( frame_function_3_make_contrib_of_module_django__db__models__fields__subclassing );
    try
    {
        assert( Py_REFCNT( frame_function_3_make_contrib_of_module_django__db__models__fields__subclassing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 53 );
        return _python_var_contribute_to_class.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_func.updateLocalsDict( _python_var_superclass.updateLocalsDict( _python_var_contribute_to_class.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_make_contrib_of_module_django__db__models__fields__subclassing )
        {
           Py_DECREF( frame_function_3_make_contrib_of_module_django__db__models__fields__subclassing );
           frame_function_3_make_contrib_of_module_django__db__models__fields__subclassing = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_3_make_contrib_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_superclass = NULL;
    PyObject *_python_par_func = NULL;
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
                PyErr_Format( PyExc_TypeError, "make_contrib() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_superclass == key )
            {
                if (unlikely( _python_par_superclass ))
                {
                    PyErr_Format( PyExc_TypeError, "make_contrib() got multiple values for keyword argument 'superclass'" );
                    goto error_exit;
                }

                _python_par_superclass = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_func == key )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "make_contrib() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_superclass, key ) )
            {
                if (unlikely( _python_par_superclass ))
                {
                    PyErr_Format( PyExc_TypeError, "make_contrib() got multiple values for keyword argument 'superclass'" );
                    goto error_exit;
                }

                _python_par_superclass = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_func, key ) )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "make_contrib() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "make_contrib() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "make_contrib() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "make_contrib() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "make_contrib() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "make_contrib() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "make_contrib() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_contrib() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "make_contrib() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_contrib() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "make_contrib() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "make_contrib() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "make_contrib() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "make_contrib() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_superclass != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_contrib() got multiple values for keyword argument 'superclass'" );
             goto error_exit;
         }

        _python_par_superclass = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_func != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_contrib() got multiple values for keyword argument 'func'" );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_func == NULL )
    {
        _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_func );
    }


    return impl_function_3_make_contrib_of_module_django__db__models__fields__subclassing( self, _python_par_superclass, _python_par_func );

error_exit:;

    Py_XDECREF( _python_par_superclass );
    Py_XDECREF( _python_par_func );

    return NULL;
}

static PyObject *dparse_function_3_make_contrib_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_make_contrib_of_module_django__db__models__fields__subclassing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_make_contrib_of_module_django__db__models__fields__subclassing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_cls, PyObject *_python_par_name )
{
    // The context of the function.
    struct _context_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing_t *_python_context = (struct _context_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing = NULL;

    if ( isFrameUnusable( frame_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing ) )
    {
        if ( frame_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing" );
#endif
            Py_DECREF( frame_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing );
        }

        frame_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing = MAKE_FRAME( _codeobj_e4c39698625ac7b7860a23ce4ec1897a, _module_django__db__models__fields__subclassing );
    }

    FrameGuard frame_guard( frame_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing );
    try
    {
        assert( Py_REFCNT( frame_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 47 );
        if ( CHECK_IF_TRUE( _python_context->python_closure_func.asObject() ) )
        {
            frame_guard.setLineNumber( 48 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call2;
                PyObjectTempKeeper0 call3;
                DECREASE_REFCOUNT( ( call1.assign( _python_context->python_closure_func.asObject() ), call2.assign( _python_var_self.asObject() ), call3.assign( _python_var_cls.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_name.asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 50 );
            {
                PyObjectTempKeeper1 call7;
                PyObjectTempKeeper0 call8;
                PyObjectTempKeeper0 super5;
                DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super5.assign( _python_context->python_closure_superclass.asObject() ), BUILTIN_SUPER( super5.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_contribute_to_class ) ), call8.assign( _python_var_cls.asObject() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), call8.asObject0(), _python_var_name.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 51 );
        {
            PyObjectTempKeeper0 call10;
            PyObjectTempKeeper0 setattr12;
            PyObjectTempKeeper1 setattr13;
            ( ( setattr12.assign( _python_var_cls.asObject() ), setattr13.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ), BUILTIN_SETATTR( setattr12.asObject0(), setattr13.asObject0(), PyObjectTemporary( ( call10.assign( _mvar_django__db__models__fields__subclassing_Creator.asObject0() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_self.asObject() ) ) ).asObject() ) ), Py_None );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_self.updateLocalsDict( _python_context->python_closure_superclass.updateLocalsDict( _python_context->python_closure_func.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing )
        {
           Py_DECREF( frame_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing );
           frame_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_cls = NULL;
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
            if ( found == false && _python_str_plain_cls == key )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "contribute_to_class() got multiple values for keyword argument 'cls'" );
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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cls, key ) )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "contribute_to_class() got multiple values for keyword argument 'cls'" );
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
         if (unlikely( _python_par_cls != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "contribute_to_class() got multiple values for keyword argument 'cls'" );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 1 ] );
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


    return impl_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing( self, _python_par_self, _python_par_cls, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing,
        dparse_function_1___init___of_class_2_Creator_of_module_django__db__models__fields__subclassing,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1180dcfeda903e6fbb50eb76a05b4512,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__fields__subclassing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing,
        dparse_function_1___new___of_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing,
        _python_str_plain___new__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4a8288a7a366e03c24d46bdf3e56acbe,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__fields__subclassing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing( PyObjectSharedLocalVariable &python_closure_func, PyObjectSharedLocalVariable &python_closure_superclass )
{
    struct _context_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing_t *_python_context = new _context_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_func.shareWith( python_closure_func );
    _python_context->python_closure_superclass.shareWith( python_closure_superclass );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing,
        dparse_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing,
        _python_str_plain_contribute_to_class,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e4c39698625ac7b7860a23ce4ec1897a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__fields__subclassing,
        Py_None,
        _python_context,
        _context_function_1_contribute_to_class_of_function_3_make_contrib_of_module_django__db__models__fields__subclassing_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing,
        dparse_function_2___get___of_class_2_Creator_of_module_django__db__models__fields__subclassing,
        _python_str_plain___get__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_723b040c8b3f9d15678900ca852f6b73,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__fields__subclassing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing,
        dparse_function_3___set___of_class_2_Creator_of_module_django__db__models__fields__subclassing,
        _python_str_plain___set__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8d2c068c36a799b9a98584ef7d4c4756,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__fields__subclassing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_make_contrib_of_module_django__db__models__fields__subclassing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_make_contrib_of_module_django__db__models__fields__subclassing,
        dparse_function_3_make_contrib_of_module_django__db__models__fields__subclassing,
        _python_str_plain_make_contrib,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4e1b44507480dc9b5045095cc9132571,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__fields__subclassing,
        _python_str_digest_1effcf3e795ae771400c88cc313d5835
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db.models.fields.subclassing",   /* m_name */
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

MOD_INIT_DECL( django__db__models__fields__subclassing )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db__models__fields__subclassing );
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

    // puts( "in initdjango__db__models__fields__subclassing" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db__models__fields__subclassing = Py_InitModule4(
        "django.db.models.fields.subclassing",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db__models__fields__subclassing = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db__models__fields__subclassing = (PyDictObject *)((PyModuleObject *)_module_django__db__models__fields__subclassing)->md_dict;

    assertObject( _module_django__db__models__fields__subclassing );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_bd075b11ca30f793cd78575b910988dd, _module_django__db__models__fields__subclassing );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db__models__fields__subclassing );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db__models__fields__subclassing != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db__models__fields__subclassing, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_1ba51c8899d5930b2a02682c86a3d5ce );
    UPDATE_STRING_DICT0( _moduledict_django__db__models__fields__subclassing, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_c1c2798e758adfcaf6e8f1d8415fc8dc );
    PyFrameObject *frame_module_django__db__models__fields__subclassing = MAKE_FRAME( _codeobj_e308beeef33adc7e9e568f82e010e61d, _module_django__db__models__fields__subclassing );

    FrameGuard frame_guard( frame_module_django__db__models__fields__subclassing );
    try
    {
        assert( Py_REFCNT( frame_module_django__db__models__fields__subclassing ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 10 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_type ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_SubfieldBase_of_module_django__db__models__fields__subclassing(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__fields__subclassing___metaclass__.isInitialized( false ) ? _mvar_django__db__models__fields__subclassing___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_SubfieldBase, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__fields__subclassing, (Nuitka_StringObject *)_python_str_plain_SubfieldBase, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 22 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_Creator_of_module_django__db__models__fields__subclassing(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__fields__subclassing___metaclass__.isInitialized( false ) ? _mvar_django__db__models__fields__subclassing___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_Creator, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__fields__subclassing, (Nuitka_StringObject *)_python_str_plain_Creator, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db__models__fields__subclassing)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__db__models__fields__subclassing, (Nuitka_StringObject *)_python_str_plain_make_contrib, MAKE_FUNCTION_function_3_make_contrib_of_module_django__db__models__fields__subclassing(  ) );

   return MOD_RETURN_VALUE( _module_django__db__models__fields__subclassing );
}
