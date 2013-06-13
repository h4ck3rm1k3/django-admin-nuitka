// Generated code for Python source for module 'django.dispatch.dispatcher'
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

// The _module_django__dispatch__dispatcher is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__dispatch__dispatcher;
PyDictObject *_moduledict_django__dispatch__dispatcher;

// The module level variables.
static PyObjectGlobalVariable_django__dispatch__dispatcher _mvar_django__dispatch__dispatcher_NONE_ID( &_module_django__dispatch__dispatcher, &_python_str_plain_NONE_ID );
static PyObjectGlobalVariable_django__dispatch__dispatcher _mvar_django__dispatch__dispatcher_NO_RECEIVERS( &_module_django__dispatch__dispatcher, &_python_str_plain_NO_RECEIVERS );
static PyObjectGlobalVariable_django__dispatch__dispatcher _mvar_django__dispatch__dispatcher_WEAKREF_TYPES( &_module_django__dispatch__dispatcher, &_python_str_plain_WEAKREF_TYPES );
static PyObjectGlobalVariable_django__dispatch__dispatcher _mvar_django__dispatch__dispatcher___metaclass__( &_module_django__dispatch__dispatcher, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__dispatch__dispatcher _mvar_django__dispatch__dispatcher__make_id( &_module_django__dispatch__dispatcher, &_python_str_plain__make_id );
static PyObjectGlobalVariable_django__dispatch__dispatcher _mvar_django__dispatch__dispatcher_saferef( &_module_django__dispatch__dispatcher, &_python_str_plain_saferef );
static PyObjectGlobalVariable_django__dispatch__dispatcher _mvar_django__dispatch__dispatcher_threading( &_module_django__dispatch__dispatcher, &_python_str_plain_threading );
static PyObjectGlobalVariable_django__dispatch__dispatcher _mvar_django__dispatch__dispatcher_weakref( &_module_django__dispatch__dispatcher, &_python_str_plain_weakref );
static PyObjectGlobalVariable_django__dispatch__dispatcher _mvar_django__dispatch__dispatcher_xrange( &_module_django__dispatch__dispatcher, &_python_str_plain_xrange );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_2_Signal_of_module_django__dispatch__dispatcher(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher(  );


static PyObject *MAKE_FUNCTION_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher( PyObjectSharedLocalVariable &python_closure_kwargs, PyObjectSharedLocalVariable &python_closure_signal );


// This structure is for attachment as self of function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher.
// It is allocated at the time the function object is created.
struct _context_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_kwargs;
    PyObjectClosureVariable python_closure_signal;
};

static void _context_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher_destructor( void *context_voidptr )
{
    _context_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher_t *_python_context = (_context_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1__make_id_of_module_django__dispatch__dispatcher(  );


static PyObject *MAKE_FUNCTION_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher(  );


static PyObject *MAKE_FUNCTION_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher(  );


static PyObject *MAKE_FUNCTION_function_3_receiver_of_module_django__dispatch__dispatcher(  );


static PyObject *MAKE_FUNCTION_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher(  );


static PyObject *MAKE_FUNCTION_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher(  );


static PyObject *MAKE_FUNCTION_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher(  );


static PyObject *MAKE_FUNCTION_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher(  );


static PyObject *MAKE_FUNCTION_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher(  );


// The module function definitions.
static PyObject *impl_function_1__make_id_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject *_python_par_target )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_target( _python_str_plain_target, _python_par_target );

    // Actual function code.
    static PyFrameObject *frame_function_1__make_id_of_module_django__dispatch__dispatcher = NULL;

    if ( isFrameUnusable( frame_function_1__make_id_of_module_django__dispatch__dispatcher ) )
    {
        if ( frame_function_1__make_id_of_module_django__dispatch__dispatcher )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1__make_id_of_module_django__dispatch__dispatcher" );
#endif
            Py_DECREF( frame_function_1__make_id_of_module_django__dispatch__dispatcher );
        }

        frame_function_1__make_id_of_module_django__dispatch__dispatcher = MAKE_FRAME( _codeobj_01f058382b738d10a0f8e44602dbc35a, _module_django__dispatch__dispatcher );
    }

    FrameGuard frame_guard( frame_function_1__make_id_of_module_django__dispatch__dispatcher );
    try
    {
        assert( Py_REFCNT( frame_function_1__make_id_of_module_django__dispatch__dispatcher ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 10 );
        if ( HAS_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___func__ ) )
        {
            frame_guard.setLineNumber( 11 );
            {
                PyObjectTempKeeper1 make_tuple1;
                return ( make_tuple1.assign( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_id ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___self__ ) ).asObject() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_id ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_target.asObject(), _python_str_plain___func__ ) ).asObject() ) ).asObject() ) );
            }
        }
        frame_guard.setLineNumber( 12 );
        return CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_id ), _python_var_target.asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_target.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_1__make_id_of_module_django__dispatch__dispatcher )
        {
           Py_DECREF( frame_function_1__make_id_of_module_django__dispatch__dispatcher );
           frame_function_1__make_id_of_module_django__dispatch__dispatcher = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1__make_id_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "_make_id() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_make_id() got multiple values for keyword argument 'target'" );
                    goto error_exit;
                }

                _python_par_target = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_target, key ) )
            {
                if (unlikely( _python_par_target ))
                {
                    PyErr_Format( PyExc_TypeError, "_make_id() got multiple values for keyword argument 'target'" );
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
                   "_make_id() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_make_id() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_make_id() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_make_id() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_make_id() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_make_id() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_make_id() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_make_id() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_make_id() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_make_id() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_make_id() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_make_id() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_make_id() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_target != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_make_id() got multiple values for keyword argument 'target'" );
             goto error_exit;
         }

        _python_par_target = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1__make_id_of_module_django__dispatch__dispatcher( self, _python_par_target );

error_exit:;

    Py_XDECREF( _python_par_target );

    return NULL;
}

static PyObject *dparse_function_1__make_id_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1__make_id_of_module_django__dispatch__dispatcher( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__make_id_of_module_django__dispatch__dispatcher( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_Signal_of_module_django__dispatch__dispatcher(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_connect( _python_str_plain_connect );
    PyObjectLocalVariable _python_var_disconnect( _python_str_plain_disconnect );
    PyObjectLocalVariable _python_var_has_listeners( _python_str_plain_has_listeners );
    PyObjectLocalVariable _python_var_send( _python_str_plain_send );
    PyObjectLocalVariable _python_var_send_robust( _python_str_plain_send_robust );
    PyObjectLocalVariable _python_var__live_receivers( _python_str_plain__live_receivers );
    PyObjectLocalVariable _python_var__remove_receiver( _python_str_plain__remove_receiver );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_dispatcher );
    _python_var___doc__.assign0( _python_str_digest_c032ab192874cdd9974cac25a004b751 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher(  ) );
    _python_var_connect.assign1( MAKE_FUNCTION_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher(  ) );
    _python_var_disconnect.assign1( MAKE_FUNCTION_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher(  ) );
    _python_var_has_listeners.assign1( MAKE_FUNCTION_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher(  ) );
    _python_var_send.assign1( MAKE_FUNCTION_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher(  ) );
    _python_var_send_robust.assign1( MAKE_FUNCTION_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher(  ) );
    _python_var__live_receivers.assign1( MAKE_FUNCTION_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher(  ) );
    _python_var__remove_receiver.assign1( MAKE_FUNCTION_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher(  ) );
    return _python_var__remove_receiver.updateLocalsDict( _python_var__live_receivers.updateLocalsDict( _python_var_send_robust.updateLocalsDict( _python_var_send.updateLocalsDict( _python_var_has_listeners.updateLocalsDict( _python_var_disconnect.updateLocalsDict( _python_var_connect.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_providing_args, PyObject *_python_par_use_caching )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_providing_args( _python_str_plain_providing_args, _python_par_providing_args );
    PyObjectLocalParameterVariableNoDel _python_var_use_caching( _python_str_plain_use_caching, _python_par_use_caching );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher ) )
    {
        if ( frame_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher );
        }

        frame_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher = MAKE_FRAME( _codeobj_0eb4e2787d4bd8b97218056fe2ea097a, _module_django__dispatch__dispatcher );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 34 );
        SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain_receivers );
        frame_guard.setLineNumber( 35 );
        if ( ( _python_var_providing_args.asObject() == Py_None ) )
        {
            _python_var_providing_args.assign1( PyList_New( 0 ) );
        }
        frame_guard.setLineNumber( 37 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), _python_var_providing_args.asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_providing_args );
        }
        frame_guard.setLineNumber( 38 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__dispatch__dispatcher_threading.asObject0(), _python_str_plain_Lock ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_lock );
        }
        frame_guard.setLineNumber( 39 );
        {
                PyObject *tmp_identifier = _python_var_use_caching.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_use_caching );
        }
        frame_guard.setLineNumber( 45 );
        SET_ATTRIBUTE( PyObjectTemporary( PyDict_New() ).asObject(), _python_var_self.asObject(), _python_str_plain_sender_receivers_cache );
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
        frame_guard.getFrame0()->f_locals = _python_var_use_caching.updateLocalsDict( _python_var_providing_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
           Py_DECREF( frame_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher );
           frame_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_providing_args = NULL;
    PyObject *_python_par_use_caching = NULL;
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
            if ( found == false && _python_str_plain_providing_args == key )
            {
                if (unlikely( _python_par_providing_args ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'providing_args'" );
                    goto error_exit;
                }

                _python_par_providing_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_use_caching == key )
            {
                if (unlikely( _python_par_use_caching ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'use_caching'" );
                    goto error_exit;
                }

                _python_par_use_caching = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_providing_args, key ) )
            {
                if (unlikely( _python_par_providing_args ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'providing_args'" );
                    goto error_exit;
                }

                _python_par_providing_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_use_caching, key ) )
            {
                if (unlikely( _python_par_use_caching ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'use_caching'" );
                    goto error_exit;
                }

                _python_par_use_caching = value;

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
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
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
                if ( 3 == 1 )
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
         if (unlikely( _python_par_providing_args != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'providing_args'" );
             goto error_exit;
         }

        _python_par_providing_args = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_use_caching != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'use_caching'" );
             goto error_exit;
         }

        _python_par_use_caching = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_providing_args == NULL )
    {
        _python_par_providing_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_providing_args );
    }
    if ( _python_par_use_caching == NULL )
    {
        _python_par_use_caching = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_use_caching );
    }


    return impl_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher( self, _python_par_self, _python_par_providing_args, _python_par_use_caching );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_providing_args );
    Py_XDECREF( _python_par_use_caching );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_receiver, PyObject *_python_par_sender, PyObject *_python_par_weak, PyObject *_python_par_dispatch_uid )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_receiver( _python_str_plain_receiver, _python_par_receiver );
    PyObjectLocalParameterVariableNoDel _python_var_sender( _python_str_plain_sender, _python_par_sender );
    PyObjectLocalParameterVariableNoDel _python_var_weak( _python_str_plain_weak, _python_par_weak );
    PyObjectLocalParameterVariableNoDel _python_var_dispatch_uid( _python_str_plain_dispatch_uid, _python_par_dispatch_uid );
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );
    PyObjectLocalVariable _python_var_inspect( _python_str_plain_inspect );
    PyObjectLocalVariable _python_var_argspec( _python_str_plain_argspec );
    PyObjectLocalVariable _python_var_lookup_key( _python_str_plain_lookup_key );
    PyObjectLocalVariable _python_var_r_key( _python_str_plain_r_key );
    PyObjectLocalVariable _python_var__( _python_str_plain__ );

    // Actual function code.
    static PyFrameObject *frame_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;

    if ( isFrameUnusable( frame_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher ) )
    {
        if ( frame_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher" );
#endif
            Py_DECREF( frame_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher );
        }

        frame_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher = MAKE_FRAME( _codeobj_a64c6c38a8a2468543e37b1f57b6dc02, _module_django__dispatch__dispatcher );
    }

    FrameGuard frame_guard( frame_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher );
    try
    {
        assert( Py_REFCNT( frame_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 82 );
        _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__dispatch__dispatcher)->md_dict, PyObjectTemporary( _python_var_dispatch_uid.updateLocalsDict( _python_var_weak.updateLocalsDict( _python_var_sender.updateLocalsDict( _python_var_receiver.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var__.updateLocalsDict( _python_var_r_key.updateLocalsDict( _python_var_lookup_key.updateLocalsDict( _python_var_argspec.updateLocalsDict( _python_var_inspect.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 85 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_DEBUG ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 86 );
            _python_var_inspect.assign1( IMPORT_MODULE( _python_str_plain_inspect, ((PyModuleObject *)_module_django__dispatch__dispatcher)->md_dict, PyObjectTemporary( _python_var_dispatch_uid.updateLocalsDict( _python_var_weak.updateLocalsDict( _python_var_sender.updateLocalsDict( _python_var_receiver.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var__.updateLocalsDict( _python_var_r_key.updateLocalsDict( _python_var_lookup_key.updateLocalsDict( _python_var_argspec.updateLocalsDict( _python_var_inspect.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
            frame_guard.setLineNumber( 87 );
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_callable ), _python_var_receiver.asObject() ) ).asObject() ) )) )
            {
                frame_guard.setLineNumber( 87 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_7be7a2efb78a7171f8bd57b967382a21 ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
            frame_guard.setLineNumber( 94 );
            try
            {
                frame_guard.setLineNumber( 95 );
                {
                    PyObjectTempKeeper1 call3;
                    _python_var_argspec.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_inspect.asObject(), _python_str_plain_getargspec ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_receiver.asObject() ) ) );
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

                if ( _exception.matches( PyExc_TypeError ) )
                {
                    frame_guard.detachFrame();
                    frame_guard.setLineNumber( 97 );
                    try
                    {
                        frame_guard.setLineNumber( 98 );
                        {
                            PyObjectTempKeeper1 call1;
                            _python_var_argspec.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_inspect.asObject(), _python_str_plain_getargspec ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_receiver.asObject(), _python_str_plain___call__ ) ).asObject() ) ) );
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

                        if ( _exception.matches( PyExc_TypeError ) || _exception.matches( PyExc_AttributeError ) )
                        {
                            frame_guard.detachFrame();
                            _python_var_argspec.assign0( Py_None );
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
            frame_guard.setLineNumber( 101 );
            if ( CHECK_IF_TRUE( _python_var_argspec.asObject() ) )
            {
                frame_guard.setLineNumber( 102 );
                if ( ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_argspec.asObject(), _python_int_pos_2, 2 ) ).asObject() == Py_None ) )
                {
                    frame_guard.setLineNumber( 102 );
                    {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_67c671e9e560650bd75385391ae4d713 ) ).asObject() ) );
                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                    }
                }
            }
        }
        frame_guard.setLineNumber( 105 );
        if ( CHECK_IF_TRUE( _python_var_dispatch_uid.asObject() ) )
        {
            frame_guard.setLineNumber( 106 );
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 make_tuple7;
                _python_var_lookup_key.assign1( ( make_tuple7.assign( _python_var_dispatch_uid.asObject() ), MAKE_TUPLE2( make_tuple7.asObject0(), PyObjectTemporary( ( call5.assign( _mvar_django__dispatch__dispatcher__make_id.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_sender.asObject() ) ) ).asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 108 );
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                PyObjectTempKeeper1 make_tuple13;
                _python_var_lookup_key.assign1( ( make_tuple13.assign( ( call9.assign( _mvar_django__dispatch__dispatcher__make_id.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_receiver.asObject() ) ) ), MAKE_TUPLE2( make_tuple13.asObject0(), PyObjectTemporary( ( call11.assign( _mvar_django__dispatch__dispatcher__make_id.asObject0() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_sender.asObject() ) ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 110 );
        if ( CHECK_IF_TRUE( _python_var_weak.asObject() ) )
        {
            frame_guard.setLineNumber( 111 );
            {
                PyObjectTempKeeper1 call15;
                PyObjectTempKeeper1 call16;
                _python_var_receiver.assign1( ( call15.assign( LOOKUP_ATTRIBUTE( _mvar_django__dispatch__dispatcher_saferef.asObject0(), _python_str_plain_safeRef ) ), call16.assign( MAKE_TUPLE1( _python_var_receiver.asObject() ) ), CALL_FUNCTION( call15.asObject0(), call16.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__remove_receiver ) ).asObject(), _python_str_plain_onDelete ) ).asObject() ) ) );
            }
        }
        {
            frame_guard.setLineNumber( 113 );
            PyObjectTemporary _python_tmp_with_source( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_lock ) );
            PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___exit__ ) );
            PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___enter__ ) ).asObject() ) );
            PyObject *_python_tmp_indicator = Py_True;
            PythonExceptionKeeper _caught_1;


            try
            {
                try
                {
                    {
                        PyObject *_python_tmp_break_indicator = Py_False;
                        frame_guard.setLineNumber( 114 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_receivers ) ).asObject() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 114 );
                                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_2 == NULL )
                                {
                                    _python_tmp_break_indicator = Py_True;
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                                {
                                    frame_guard.setLineNumber( 114 );
                                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                    _python_var_r_key.assign0( _python_tmp_element_1.asObject() );
                                    _python_var__.assign0( _python_tmp_element_2.asObject() );
                                }
                            }
                            frame_guard.setLineNumber( 115 );
                            {
                                PyObjectTempKeeper0 cmp18;
                                if ( ( cmp18.assign( _python_var_r_key.asObject() ), RICH_COMPARE_BOOL_EQ( cmp18.asObject0(), _python_var_lookup_key.asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 116 );
                                break;
                            }
                            }

                           CONSIDER_THREADING();
                        }
                        if ( ( _python_tmp_break_indicator == Py_True ) )
                        {
                            frame_guard.setLineNumber( 118 );
                            {
                                PyObjectTempKeeper1 call22;
                                PyObjectTempKeeper0 make_tuple20;
                                DECREASE_REFCOUNT( ( call22.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_receivers ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call22.asObject0(), PyObjectTemporary( ( make_tuple20.assign( _python_var_lookup_key.asObject() ), MAKE_TUPLE2( make_tuple20.asObject0(), _python_var_receiver.asObject() ) ) ).asObject() ) ) );
                            }
                        }
                    }
                    frame_guard.setLineNumber( 119 );
                    SET_ATTRIBUTE( PyObjectTemporary( PyDict_New() ).asObject(), _python_var_self.asObject(), _python_str_plain_sender_receivers_cache );
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
        frame_guard.getFrame0()->f_locals = _python_var_dispatch_uid.updateLocalsDict( _python_var_weak.updateLocalsDict( _python_var_sender.updateLocalsDict( _python_var_receiver.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var__.updateLocalsDict( _python_var_r_key.updateLocalsDict( _python_var_lookup_key.updateLocalsDict( _python_var_argspec.updateLocalsDict( _python_var_inspect.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
           Py_DECREF( frame_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher );
           frame_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_receiver = NULL;
    PyObject *_python_par_sender = NULL;
    PyObject *_python_par_weak = NULL;
    PyObject *_python_par_dispatch_uid = NULL;
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
                PyErr_Format( PyExc_TypeError, "connect() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_receiver == key )
            {
                if (unlikely( _python_par_receiver ))
                {
                    PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'receiver'" );
                    goto error_exit;
                }

                _python_par_receiver = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_sender == key )
            {
                if (unlikely( _python_par_sender ))
                {
                    PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'sender'" );
                    goto error_exit;
                }

                _python_par_sender = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_weak == key )
            {
                if (unlikely( _python_par_weak ))
                {
                    PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'weak'" );
                    goto error_exit;
                }

                _python_par_weak = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dispatch_uid == key )
            {
                if (unlikely( _python_par_dispatch_uid ))
                {
                    PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'dispatch_uid'" );
                    goto error_exit;
                }

                _python_par_dispatch_uid = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_receiver, key ) )
            {
                if (unlikely( _python_par_receiver ))
                {
                    PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'receiver'" );
                    goto error_exit;
                }

                _python_par_receiver = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_sender, key ) )
            {
                if (unlikely( _python_par_sender ))
                {
                    PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'sender'" );
                    goto error_exit;
                }

                _python_par_sender = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_weak, key ) )
            {
                if (unlikely( _python_par_weak ))
                {
                    PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'weak'" );
                    goto error_exit;
                }

                _python_par_weak = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dispatch_uid, key ) )
            {
                if (unlikely( _python_par_dispatch_uid ))
                {
                    PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'dispatch_uid'" );
                    goto error_exit;
                }

                _python_par_dispatch_uid = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "connect() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "connect() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "connect() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "connect() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "connect() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "connect() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "connect() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "connect() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "connect() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 5 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "connect() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "connect() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "connect() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "connect() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_receiver != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'receiver'" );
             goto error_exit;
         }

        _python_par_receiver = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_sender != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'sender'" );
             goto error_exit;
         }

        _python_par_sender = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_weak != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'weak'" );
             goto error_exit;
         }

        _python_par_weak = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_dispatch_uid != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "connect() got multiple values for keyword argument 'dispatch_uid'" );
             goto error_exit;
         }

        _python_par_dispatch_uid = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_sender == NULL )
    {
        _python_par_sender = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_sender );
    }
    if ( _python_par_weak == NULL )
    {
        _python_par_weak = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_weak );
    }
    if ( _python_par_dispatch_uid == NULL )
    {
        _python_par_dispatch_uid = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_dispatch_uid );
    }


    return impl_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, _python_par_self, _python_par_receiver, _python_par_sender, _python_par_weak, _python_par_dispatch_uid );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_receiver );
    Py_XDECREF( _python_par_sender );
    Py_XDECREF( _python_par_weak );
    Py_XDECREF( _python_par_dispatch_uid );

    return NULL;
}

static PyObject *dparse_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_receiver, PyObject *_python_par_sender, PyObject *_python_par_weak, PyObject *_python_par_dispatch_uid )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_receiver( _python_str_plain_receiver, _python_par_receiver );
    PyObjectLocalParameterVariableNoDel _python_var_sender( _python_str_plain_sender, _python_par_sender );
    PyObjectLocalParameterVariableNoDel _python_var_weak( _python_str_plain_weak, _python_par_weak );
    PyObjectLocalParameterVariableNoDel _python_var_dispatch_uid( _python_str_plain_dispatch_uid, _python_par_dispatch_uid );
    PyObjectLocalVariable _python_var_lookup_key( _python_str_plain_lookup_key );
    PyObjectLocalVariable _python_var_index( _python_str_plain_index );
    PyObjectLocalVariable _python_var_r_key( _python_str_plain_r_key );
    PyObjectLocalVariable _python_var__( _python_str_plain__ );

    // Actual function code.
    static PyFrameObject *frame_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;

    if ( isFrameUnusable( frame_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher ) )
    {
        if ( frame_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher" );
#endif
            Py_DECREF( frame_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher );
        }

        frame_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher = MAKE_FRAME( _codeobj_4007ff483b437a9b31d8a8c2640ceafd, _module_django__dispatch__dispatcher );
    }

    FrameGuard frame_guard( frame_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher );
    try
    {
        assert( Py_REFCNT( frame_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 143 );
        if ( CHECK_IF_TRUE( _python_var_dispatch_uid.asObject() ) )
        {
            frame_guard.setLineNumber( 144 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 make_tuple3;
                _python_var_lookup_key.assign1( ( make_tuple3.assign( _python_var_dispatch_uid.asObject() ), MAKE_TUPLE2( make_tuple3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__dispatch__dispatcher__make_id.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_sender.asObject() ) ) ).asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 146 );
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                PyObjectTempKeeper1 make_tuple9;
                _python_var_lookup_key.assign1( ( make_tuple9.assign( ( call5.assign( _mvar_django__dispatch__dispatcher__make_id.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_receiver.asObject() ) ) ), MAKE_TUPLE2( make_tuple9.asObject0(), PyObjectTemporary( ( call7.assign( _mvar_django__dispatch__dispatcher__make_id.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_sender.asObject() ) ) ).asObject() ) ) );
            }
        }
        {
            frame_guard.setLineNumber( 148 );
            PyObjectTemporary _python_tmp_with_source( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_lock ) );
            PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___exit__ ) );
            PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___enter__ ) ).asObject() ) );
            PyObject *_python_tmp_indicator = Py_True;
            PythonExceptionKeeper _caught_1;


            try
            {
                try
                {
                    {
                        frame_guard.setLineNumber( 149 );
                        PyObject *_tmp_python_tmp_for_iterator;
                        {
                            PyObjectTempKeeper0 call11;
                            _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call11.assign( _mvar_django__dispatch__dispatcher_xrange.asObject0() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_receivers ) ).asObject() ) ).asObject() ) ) ).asObject() );
                        }
                        PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 149 );
                                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_2 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                                _python_var_index.assign0( _python_tmp_iter_value.asObject() );
                            }
                            {
                                frame_guard.setLineNumber( 150 );
                                PyObject *_tmp_python_tmp_source_iter;
                                {
                                    PyObjectTempKeeper1 subscr13;
                                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( subscr13.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_receivers ) ), LOOKUP_SUBSCRIPT( subscr13.asObject0(), _python_var_index.asObject() ) ) ).asObject() );
                                }
                                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                _python_var_r_key.assign0( _python_tmp_element_1.asObject() );
                                _python_var__.assign0( _python_tmp_element_2.asObject() );
                            }
                            frame_guard.setLineNumber( 151 );
                            {
                                PyObjectTempKeeper0 cmp15;
                                if ( ( cmp15.assign( _python_var_r_key.asObject() ), RICH_COMPARE_BOOL_EQ( cmp15.asObject0(), _python_var_lookup_key.asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 152 );
                                {
                                        PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_receivers ) );
                                        DEL_SUBSCRIPT( tmp_subscribed.asObject(), _python_var_index.asObject() );
                                }
                                frame_guard.setLineNumber( 153 );
                                break;
                            }
                            }

                           CONSIDER_THREADING();
                        }
                    }
                    frame_guard.setLineNumber( 154 );
                    SET_ATTRIBUTE( PyObjectTemporary( PyDict_New() ).asObject(), _python_var_self.asObject(), _python_str_plain_sender_receivers_cache );
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
        frame_guard.getFrame0()->f_locals = _python_var_dispatch_uid.updateLocalsDict( _python_var_weak.updateLocalsDict( _python_var_sender.updateLocalsDict( _python_var_receiver.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var__.updateLocalsDict( _python_var_r_key.updateLocalsDict( _python_var_index.updateLocalsDict( _python_var_lookup_key.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
           Py_DECREF( frame_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher );
           frame_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_receiver = NULL;
    PyObject *_python_par_sender = NULL;
    PyObject *_python_par_weak = NULL;
    PyObject *_python_par_dispatch_uid = NULL;
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
                PyErr_Format( PyExc_TypeError, "disconnect() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_receiver == key )
            {
                if (unlikely( _python_par_receiver ))
                {
                    PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'receiver'" );
                    goto error_exit;
                }

                _python_par_receiver = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_sender == key )
            {
                if (unlikely( _python_par_sender ))
                {
                    PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'sender'" );
                    goto error_exit;
                }

                _python_par_sender = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_weak == key )
            {
                if (unlikely( _python_par_weak ))
                {
                    PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'weak'" );
                    goto error_exit;
                }

                _python_par_weak = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dispatch_uid == key )
            {
                if (unlikely( _python_par_dispatch_uid ))
                {
                    PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'dispatch_uid'" );
                    goto error_exit;
                }

                _python_par_dispatch_uid = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_receiver, key ) )
            {
                if (unlikely( _python_par_receiver ))
                {
                    PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'receiver'" );
                    goto error_exit;
                }

                _python_par_receiver = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_sender, key ) )
            {
                if (unlikely( _python_par_sender ))
                {
                    PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'sender'" );
                    goto error_exit;
                }

                _python_par_sender = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_weak, key ) )
            {
                if (unlikely( _python_par_weak ))
                {
                    PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'weak'" );
                    goto error_exit;
                }

                _python_par_weak = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dispatch_uid, key ) )
            {
                if (unlikely( _python_par_dispatch_uid ))
                {
                    PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'dispatch_uid'" );
                    goto error_exit;
                }

                _python_par_dispatch_uid = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "disconnect() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "disconnect() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "disconnect() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "disconnect() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "disconnect() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "disconnect() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "disconnect() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "disconnect() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "disconnect() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "disconnect() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "disconnect() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "disconnect() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "disconnect() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_receiver != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'receiver'" );
             goto error_exit;
         }

        _python_par_receiver = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_sender != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'sender'" );
             goto error_exit;
         }

        _python_par_sender = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_weak != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'weak'" );
             goto error_exit;
         }

        _python_par_weak = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_dispatch_uid != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "disconnect() got multiple values for keyword argument 'dispatch_uid'" );
             goto error_exit;
         }

        _python_par_dispatch_uid = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_receiver == NULL )
    {
        _python_par_receiver = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_receiver );
    }
    if ( _python_par_sender == NULL )
    {
        _python_par_sender = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_sender );
    }
    if ( _python_par_weak == NULL )
    {
        _python_par_weak = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_weak );
    }
    if ( _python_par_dispatch_uid == NULL )
    {
        _python_par_dispatch_uid = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_dispatch_uid );
    }


    return impl_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, _python_par_self, _python_par_receiver, _python_par_sender, _python_par_weak, _python_par_dispatch_uid );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_receiver );
    Py_XDECREF( _python_par_sender );
    Py_XDECREF( _python_par_weak );
    Py_XDECREF( _python_par_dispatch_uid );

    return NULL;
}

static PyObject *dparse_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_sender )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_sender( _python_str_plain_sender, _python_par_sender );

    // Actual function code.
    static PyFrameObject *frame_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;

    if ( isFrameUnusable( frame_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher ) )
    {
        if ( frame_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher" );
#endif
            Py_DECREF( frame_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher );
        }

        frame_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher = MAKE_FRAME( _codeobj_cb30ed2eada5bc504f81907162a8f96d, _module_django__dispatch__dispatcher );
    }

    FrameGuard frame_guard( frame_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher );
    try
    {
        assert( Py_REFCNT( frame_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 157 );
        {
            PyObjectTempKeeper1 call1;
            return INCREASE_REFCOUNT( TO_BOOL( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__live_receivers ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_sender.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_sender.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
           Py_DECREF( frame_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher );
           frame_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_sender = NULL;
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
                PyErr_Format( PyExc_TypeError, "has_listeners() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "has_listeners() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_sender == key )
            {
                if (unlikely( _python_par_sender ))
                {
                    PyErr_Format( PyExc_TypeError, "has_listeners() got multiple values for keyword argument 'sender'" );
                    goto error_exit;
                }

                _python_par_sender = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "has_listeners() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_sender, key ) )
            {
                if (unlikely( _python_par_sender ))
                {
                    PyErr_Format( PyExc_TypeError, "has_listeners() got multiple values for keyword argument 'sender'" );
                    goto error_exit;
                }

                _python_par_sender = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "has_listeners() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "has_listeners() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "has_listeners() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "has_listeners() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "has_listeners() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "has_listeners() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "has_listeners() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "has_listeners() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "has_listeners() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "has_listeners() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "has_listeners() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "has_listeners() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "has_listeners() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "has_listeners() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_sender != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "has_listeners() got multiple values for keyword argument 'sender'" );
             goto error_exit;
         }

        _python_par_sender = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_sender == NULL )
    {
        _python_par_sender = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_sender );
    }


    return impl_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, _python_par_self, _python_par_sender );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_sender );

    return NULL;
}

static PyObject *dparse_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_sender, PyObject *_python_par_named )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_sender( _python_str_plain_sender, _python_par_sender );
    PyObjectLocalParameterVariableNoDel _python_var_named( _python_str_plain_named, _python_par_named );
    PyObjectLocalVariable _python_var_responses( _python_str_plain_responses );
    PyObjectLocalVariable _python_var_receiver( _python_str_plain_receiver );
    PyObjectLocalVariable _python_var_response( _python_str_plain_response );

    // Actual function code.
    _python_var_responses.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;

    if ( isFrameUnusable( frame_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher ) )
    {
        if ( frame_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher" );
#endif
            Py_DECREF( frame_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher );
        }

        frame_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher = MAKE_FRAME( _codeobj_e655a22b17c1307f82d158d6a3fa9911, _module_django__dispatch__dispatcher );
    }

    FrameGuard frame_guard( frame_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher );
    try
    {
        assert( Py_REFCNT( frame_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 178 );
        {
            PyObjectTempKeeper1 call1;
            if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_receivers ) ).asObject() ) )) || ( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sender_receivers_cache ) ).asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_sender.asObject() ) ) ).asObject() == _mvar_django__dispatch__dispatcher_NO_RECEIVERS.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 179 );
            return _python_var_responses.asObject1();
        }
        }
        {
            frame_guard.setLineNumber( 181 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper1 call3;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__live_receivers ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_sender.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 181 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_receiver.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 182 );
                {
                    PyObjectTempKeeper1 call_tmp10;
                    PyObjectTempKeeper0 call_tmp9;
                    PyObjectTempKeeper0 make_dict5;
                    _python_var_response.assign1( ( call_tmp9.assign( _python_var_receiver.asObject() ), call_tmp10.assign( ( make_dict5.assign( _python_var_self.asObject() ), MAKE_DICT2( make_dict5.asObject0(), _python_str_plain_signal, _python_var_sender.asObject(), _python_str_plain_sender ) ) ), impl_function_6_complex_call_helper_keywords_star_dict_of_module___internal__( call_tmp9.asObject(), call_tmp10.asObject(), _python_var_named.asObject1() ) ) );
                }
                frame_guard.setLineNumber( 183 );
                {
                    PyObjectTempKeeper1 call14;
                    PyObjectTempKeeper0 make_tuple12;
                    DECREASE_REFCOUNT( ( call14.assign( LOOKUP_ATTRIBUTE( _python_var_responses.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), PyObjectTemporary( ( make_tuple12.assign( _python_var_receiver.asObject() ), MAKE_TUPLE2( make_tuple12.asObject0(), _python_var_response.asObject() ) ) ).asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 184 );
        return _python_var_responses.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_named.updateLocalsDict( _python_var_sender.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_response.updateLocalsDict( _python_var_receiver.updateLocalsDict( _python_var_responses.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
           Py_DECREF( frame_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher );
           frame_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_sender = NULL;
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
                        PyErr_Format( PyExc_TypeError, "send() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "send() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "send() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_named, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_named, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument sender was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_named, _python_str_plain_sender );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_sender == NULL );

            _python_par_sender = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_named, _python_str_plain_sender );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "send() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "send() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "send() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "send() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "send() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "send() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "send() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "send() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "send() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "send() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "send() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "send() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "send() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_sender != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send() got multiple values for keyword argument 'sender'" );
             goto error_exit;
         }

        _python_par_sender = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, _python_par_self, _python_par_sender, _python_par_named );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_sender );
    Py_XDECREF( _python_par_named );

    return NULL;
}

static PyObject *dparse_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_sender, PyObject *_python_par_named )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_sender( _python_str_plain_sender, _python_par_sender );
    PyObjectLocalParameterVariableNoDel _python_var_named( _python_str_plain_named, _python_par_named );
    PyObjectLocalVariable _python_var_responses( _python_str_plain_responses );
    PyObjectLocalVariable _python_var_receiver( _python_str_plain_receiver );
    PyObjectLocalVariable _python_var_response( _python_str_plain_response );
    PyObjectLocalVariable _python_var_err( _python_str_plain_err );

    // Actual function code.
    _python_var_responses.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;

    if ( isFrameUnusable( frame_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher ) )
    {
        if ( frame_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher" );
#endif
            Py_DECREF( frame_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher );
        }

        frame_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher = MAKE_FRAME( _codeobj_b8393df2d334528d143368c632fd4466, _module_django__dispatch__dispatcher );
    }

    FrameGuard frame_guard( frame_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher );
    try
    {
        assert( Py_REFCNT( frame_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 210 );
        {
            PyObjectTempKeeper1 call1;
            if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_receivers ) ).asObject() ) )) || ( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sender_receivers_cache ) ).asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_sender.asObject() ) ) ).asObject() == _mvar_django__dispatch__dispatcher_NO_RECEIVERS.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 211 );
            return _python_var_responses.asObject1();
        }
        }
        {
            frame_guard.setLineNumber( 215 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper1 call3;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__live_receivers ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_sender.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 215 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_receiver.assign0( _python_tmp_iter_value.asObject() );
                }
                {
                    PyObject *_python_tmp_unhandled_indicator = Py_True;
                    frame_guard.setLineNumber( 216 );
                    try
                    {
                        frame_guard.setLineNumber( 217 );
                        {
                            PyObjectTempKeeper0 call_tmp13;
                            PyObjectTempKeeper1 call_tmp14;
                            PyObjectTempKeeper0 make_dict9;
                            _python_var_response.assign1( ( call_tmp13.assign( _python_var_receiver.asObject() ), call_tmp14.assign( ( make_dict9.assign( _python_var_self.asObject() ), MAKE_DICT2( make_dict9.asObject0(), _python_str_plain_signal, _python_var_sender.asObject(), _python_str_plain_sender ) ) ), impl_function_6_complex_call_helper_keywords_star_dict_of_module___internal__( call_tmp13.asObject(), call_tmp14.asObject(), _python_var_named.asObject1() ) ) );
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
                            _python_tmp_unhandled_indicator = Py_False;
                            _python_var_err.assign0( _exception.getValue() );
                            frame_guard.setLineNumber( 219 );
                            {
                                PyObjectTempKeeper1 call7;
                                PyObjectTempKeeper0 make_tuple5;
                                DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_responses.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( ( make_tuple5.assign( _python_var_receiver.asObject() ), MAKE_TUPLE2( make_tuple5.asObject0(), _python_var_err.asObject() ) ) ).asObject() ) ) );
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
                        frame_guard.setLineNumber( 221 );
                        {
                            PyObjectTempKeeper1 call18;
                            PyObjectTempKeeper0 make_tuple16;
                            DECREASE_REFCOUNT( ( call18.assign( LOOKUP_ATTRIBUTE( _python_var_responses.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), PyObjectTemporary( ( make_tuple16.assign( _python_var_receiver.asObject() ), MAKE_TUPLE2( make_tuple16.asObject0(), _python_var_response.asObject() ) ) ).asObject() ) ) );
                        }
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 222 );
        return _python_var_responses.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_named.updateLocalsDict( _python_var_sender.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_err.updateLocalsDict( _python_var_response.updateLocalsDict( _python_var_receiver.updateLocalsDict( _python_var_responses.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
           Py_DECREF( frame_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher );
           frame_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_sender = NULL;
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
                        PyErr_Format( PyExc_TypeError, "send_robust() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "send_robust() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "send_robust() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_named, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_named, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument sender was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_named, _python_str_plain_sender );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_sender == NULL );

            _python_par_sender = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_named, _python_str_plain_sender );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "send_robust() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "send_robust() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "send_robust() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "send_robust() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "send_robust() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "send_robust() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "send_robust() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "send_robust() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "send_robust() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "send_robust() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "send_robust() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "send_robust() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "send_robust() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_sender != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_robust() got multiple values for keyword argument 'sender'" );
             goto error_exit;
         }

        _python_par_sender = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, _python_par_self, _python_par_sender, _python_par_named );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_sender );
    Py_XDECREF( _python_par_named );

    return NULL;
}

static PyObject *dparse_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_sender )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_sender( _python_str_plain_sender, _python_par_sender );
    PyObjectLocalVariable _python_var_receivers( _python_str_plain_receivers );
    PyObjectLocalVariable _python_var_senderkey( _python_str_plain_senderkey );
    PyObjectLocalVariable _python_var_receiverkey( _python_str_plain_receiverkey );
    PyObjectLocalVariable _python_var_r_senderkey( _python_str_plain_r_senderkey );
    PyObjectLocalVariable _python_var_receiver( _python_str_plain_receiver );
    PyObjectLocalVariable _python_var_non_weak_receivers( _python_str_plain_non_weak_receivers );

    // Actual function code.
    _python_var_receivers.assign0( Py_None );
    static PyFrameObject *frame_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;

    if ( isFrameUnusable( frame_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher ) )
    {
        if ( frame_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher" );
#endif
            Py_DECREF( frame_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher );
        }

        frame_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher = MAKE_FRAME( _codeobj_8cf9fe81eeb1a872740fc8d21cae22ff, _module_django__dispatch__dispatcher );
    }

    FrameGuard frame_guard( frame_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher );
    try
    {
        assert( Py_REFCNT( frame_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 232 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_use_caching ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 233 );
            {
                PyObjectTempKeeper1 call1;
                _python_var_receivers.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sender_receivers_cache ) ).asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_sender.asObject() ) ) );
            }
            frame_guard.setLineNumber( 236 );
            if ( ( _python_var_receivers.asObject() == _mvar_django__dispatch__dispatcher_NO_RECEIVERS.asObject0() ) )
            {
                return PyList_New( 0 );
            }
        }
        frame_guard.setLineNumber( 238 );
        if ( ( _python_var_receivers.asObject() == Py_None ) )
        {
            {
                frame_guard.setLineNumber( 239 );
                PyObjectTemporary _python_tmp_with_source( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_lock ) );
                PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___exit__ ) );
                PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___enter__ ) ).asObject() ) );
                PyObject *_python_tmp_indicator = Py_True;
                PythonExceptionKeeper _caught_1;


                try
                {
                    try
                    {
                        frame_guard.setLineNumber( 240 );
                        {
                            PyObjectTempKeeper0 call3;
                            _python_var_senderkey.assign1( ( call3.assign( _mvar_django__dispatch__dispatcher__make_id.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_sender.asObject() ) ) );
                        }
                        _python_var_receivers.assign1( PyList_New( 0 ) );
                        {
                            frame_guard.setLineNumber( 242 );
                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_receivers ) ).asObject() ) );
                            while( true )
                            {
                                {
                                    frame_guard.setLineNumber( 242 );
                                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                    if ( _tmp_unpack_2 == NULL )
                                    {
                                        break;
                                    }
                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                                    {
                                        frame_guard.setLineNumber( 242 );
                                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                        {
                                            frame_guard.setLineNumber( 242 );
                                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_element_1.asObject() ) );
                                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                            _python_var_receiverkey.assign0( _python_tmp_element_1.asObject() );
                                            _python_var_r_senderkey.assign0( _python_tmp_element_2.asObject() );
                                        }
                                        _python_var_receiver.assign0( _python_tmp_element_2.asObject() );
                                    }
                                }
                                frame_guard.setLineNumber( 243 );
                                {
                                    PyObjectTempKeeper0 cmp7;
                                    PyObjectTempKeeper0 cmp9;
                                    if ( ( ( cmp7.assign( _python_var_r_senderkey.asObject() ), RICH_COMPARE_BOOL_EQ( cmp7.asObject0(), _mvar_django__dispatch__dispatcher_NONE_ID.asObject0() ) ) || ( cmp9.assign( _python_var_r_senderkey.asObject() ), RICH_COMPARE_BOOL_EQ( cmp9.asObject0(), _python_var_senderkey.asObject() ) ) ) )
                                {
                                    frame_guard.setLineNumber( 244 );
                                    {
                                        PyObjectTempKeeper1 call5;
                                        DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_receivers.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_receiver.asObject() ) ) );
                                    }
                                }
                                }

                               CONSIDER_THREADING();
                            }
                        }
                        frame_guard.setLineNumber( 245 );
                        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_use_caching ) ).asObject() ) )
                        {
                            frame_guard.setLineNumber( 246 );
                            if ( (!( CHECK_IF_TRUE( _python_var_receivers.asObject() ) )) )
                            {
                                frame_guard.setLineNumber( 247 );
                                {
                                        PyObject *tmp_identifier = _mvar_django__dispatch__dispatcher_NO_RECEIVERS.asObject0();
                                        PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sender_receivers_cache ) );
                                        SET_SUBSCRIPT( tmp_identifier, tmp_subscribed.asObject(), _python_var_sender.asObject() );
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 250 );
                                {
                                        PyObject *tmp_identifier = _python_var_receivers.asObject();
                                        PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sender_receivers_cache ) );
                                        SET_SUBSCRIPT( tmp_identifier, tmp_subscribed.asObject(), _python_var_sender.asObject() );
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
        _python_var_non_weak_receivers.assign1( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 252 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_receivers.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 252 );
                    PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_3 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                    _python_var_receiver.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 253 );
                {
                    PyObjectTempKeeper0 isinstance15;
                    if ( ( isinstance15.assign( _python_var_receiver.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance15.asObject0(), _mvar_django__dispatch__dispatcher_WEAKREF_TYPES.asObject0() ) ) )
                {
                    frame_guard.setLineNumber( 255 );
                    _python_var_receiver.assign1( CALL_FUNCTION_NO_ARGS( _python_var_receiver.asObject() ) );
                    frame_guard.setLineNumber( 256 );
                    if ( ( _python_var_receiver.asObject() != Py_None ) )
                    {
                        frame_guard.setLineNumber( 257 );
                        {
                            PyObjectTempKeeper1 call11;
                            DECREASE_REFCOUNT( ( call11.assign( LOOKUP_ATTRIBUTE( _python_var_non_weak_receivers.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_receiver.asObject() ) ) );
                        }
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 259 );
                    {
                        PyObjectTempKeeper1 call13;
                        DECREASE_REFCOUNT( ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_non_weak_receivers.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_var_receiver.asObject() ) ) );
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 260 );
        return _python_var_non_weak_receivers.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_sender.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_non_weak_receivers.updateLocalsDict( _python_var_receiver.updateLocalsDict( _python_var_r_senderkey.updateLocalsDict( _python_var_receiverkey.updateLocalsDict( _python_var_senderkey.updateLocalsDict( _python_var_receivers.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
           Py_DECREF( frame_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher );
           frame_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_sender = NULL;
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
                PyErr_Format( PyExc_TypeError, "_live_receivers() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_live_receivers() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_sender == key )
            {
                if (unlikely( _python_par_sender ))
                {
                    PyErr_Format( PyExc_TypeError, "_live_receivers() got multiple values for keyword argument 'sender'" );
                    goto error_exit;
                }

                _python_par_sender = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_live_receivers() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_sender, key ) )
            {
                if (unlikely( _python_par_sender ))
                {
                    PyErr_Format( PyExc_TypeError, "_live_receivers() got multiple values for keyword argument 'sender'" );
                    goto error_exit;
                }

                _python_par_sender = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_live_receivers() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_live_receivers() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_live_receivers() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_live_receivers() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_live_receivers() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_live_receivers() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_live_receivers() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_live_receivers() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_live_receivers() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_live_receivers() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_live_receivers() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_live_receivers() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_live_receivers() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_live_receivers() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_sender != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_live_receivers() got multiple values for keyword argument 'sender'" );
             goto error_exit;
         }

        _python_par_sender = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, _python_par_self, _python_par_sender );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_sender );

    return NULL;
}

static PyObject *dparse_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_receiver )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_receiver( _python_str_plain_receiver, _python_par_receiver );
    PyObjectLocalVariable _python_var_to_remove( _python_str_plain_to_remove );
    PyObjectLocalVariable _python_var_key( _python_str_plain_key );
    PyObjectLocalVariable _python_var_connected_receiver( _python_str_plain_connected_receiver );
    PyObjectLocalVariable _python_var_last_idx( _python_str_plain_last_idx );
    PyObjectLocalVariable _python_var_idx( _python_str_plain_idx );
    PyObjectLocalVariable _python_var_r_key( _python_str_plain_r_key );
    PyObjectLocalVariable _python_var__( _python_str_plain__ );

    // Actual function code.
    static PyFrameObject *frame_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;

    if ( isFrameUnusable( frame_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher ) )
    {
        if ( frame_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher" );
#endif
            Py_DECREF( frame_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher );
        }

        frame_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher = MAKE_FRAME( _codeobj_4f622cd8dbf3304419e90af56023d37f, _module_django__dispatch__dispatcher );
    }

    FrameGuard frame_guard( frame_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher );
    try
    {
        assert( Py_REFCNT( frame_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 267 );
            PyObjectTemporary _python_tmp_with_source( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_lock ) );
            PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___exit__ ) );
            PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___enter__ ) ).asObject() ) );
            PyObject *_python_tmp_indicator = Py_True;
            PythonExceptionKeeper _caught_1;


            try
            {
                try
                {
                    _python_var_to_remove.assign1( PyList_New( 0 ) );
                    {
                        frame_guard.setLineNumber( 269 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_receivers ) ).asObject() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 269 );
                                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_2 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                                {
                                    frame_guard.setLineNumber( 269 );
                                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                    _python_var_key.assign0( _python_tmp_element_1.asObject() );
                                    _python_var_connected_receiver.assign0( _python_tmp_element_2.asObject() );
                                }
                            }
                            frame_guard.setLineNumber( 270 );
                            {
                                PyObjectTempKeeper0 cmp3;
                                if ( ( cmp3.assign( _python_var_connected_receiver.asObject() ), RICH_COMPARE_BOOL_EQ( cmp3.asObject0(), _python_var_receiver.asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 271 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_to_remove.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_key.asObject() ) ) );
                                }
                            }
                            }

                           CONSIDER_THREADING();
                        }
                    }
                    {
                        frame_guard.setLineNumber( 272 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_to_remove.asObject() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 272 );
                                PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_3 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                                _python_var_key.assign0( _python_tmp_iter_value.asObject() );
                            }
                            frame_guard.setLineNumber( 273 );
                            _python_var_last_idx.assign1( BINARY_OPERATION_SUB( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_receivers ) ).asObject() ) ).asObject(), _python_int_pos_1 ) );
                            {
                                frame_guard.setLineNumber( 276 );
                                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_reversed ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_receivers ) ).asObject() ) ).asObject() ) ).asObject() ) );
                                while( true )
                                {
                                    {
                                        frame_guard.setLineNumber( 276 );
                                        PyObject *_tmp_unpack_4 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                        if ( _tmp_unpack_4 == NULL )
                                        {
                                            break;
                                        }
                                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_4 );
                                        {
                                            frame_guard.setLineNumber( 276 );
                                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                            _python_var_idx.assign0( _python_tmp_element_1.asObject() );
                                            {
                                                frame_guard.setLineNumber( 276 );
                                                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_element_2.asObject() ) );
                                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                                _python_var_r_key.assign0( _python_tmp_element_1.asObject() );
                                                _python_var__.assign0( _python_tmp_element_2.asObject() );
                                            }
                                        }
                                    }
                                    frame_guard.setLineNumber( 277 );
                                    {
                                        PyObjectTempKeeper0 cmp7;
                                        if ( ( cmp7.assign( _python_var_r_key.asObject() ), RICH_COMPARE_BOOL_EQ( cmp7.asObject0(), _python_var_key.asObject() ) ) )
                                    {
                                        frame_guard.setLineNumber( 278 );
                                        {
                                            PyObjectTempKeeper0 op5;
                                            {
                                                PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_receivers ) );
                                                DEL_SUBSCRIPT( tmp_subscribed.asObject(), PyObjectTemporary( ( op5.assign( _python_var_last_idx.asObject() ), BINARY_OPERATION_SUB( op5.asObject0(), _python_var_idx.asObject() ) ) ).asObject() );
                                        }
                                        }
                                    }
                                    }

                                   CONSIDER_THREADING();
                                }
                            }

                           CONSIDER_THREADING();
                        }
                    }
                    frame_guard.setLineNumber( 279 );
                    SET_ATTRIBUTE( PyObjectTemporary( PyDict_New() ).asObject(), _python_var_self.asObject(), _python_str_plain_sender_receivers_cache );
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
        frame_guard.getFrame0()->f_locals = _python_var_receiver.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var__.updateLocalsDict( _python_var_r_key.updateLocalsDict( _python_var_idx.updateLocalsDict( _python_var_last_idx.updateLocalsDict( _python_var_connected_receiver.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_to_remove.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher )
        {
           Py_DECREF( frame_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher );
           frame_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_receiver = NULL;
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
                PyErr_Format( PyExc_TypeError, "_remove_receiver() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_remove_receiver() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_receiver == key )
            {
                if (unlikely( _python_par_receiver ))
                {
                    PyErr_Format( PyExc_TypeError, "_remove_receiver() got multiple values for keyword argument 'receiver'" );
                    goto error_exit;
                }

                _python_par_receiver = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_remove_receiver() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_receiver, key ) )
            {
                if (unlikely( _python_par_receiver ))
                {
                    PyErr_Format( PyExc_TypeError, "_remove_receiver() got multiple values for keyword argument 'receiver'" );
                    goto error_exit;
                }

                _python_par_receiver = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_remove_receiver() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_remove_receiver() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_remove_receiver() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_remove_receiver() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_remove_receiver() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_remove_receiver() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_remove_receiver() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_remove_receiver() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_remove_receiver() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_remove_receiver() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_remove_receiver() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_remove_receiver() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_remove_receiver() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_remove_receiver() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_receiver != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_remove_receiver() got multiple values for keyword argument 'receiver'" );
             goto error_exit;
         }

        _python_par_receiver = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, _python_par_self, _python_par_receiver );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_receiver );

    return NULL;
}

static PyObject *dparse_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_receiver_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject *_python_par_signal, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_signal( _python_str_plain_signal, _python_par_signal );
    PyObjectSharedLocalVariable _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var__decorator( _python_str_plain__decorator );

    // Actual function code.
    _python_var__decorator.assign1( MAKE_FUNCTION_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher( _python_var_kwargs, _python_var_signal ) );
    static PyFrameObject *frame_function_3_receiver_of_module_django__dispatch__dispatcher = NULL;

    if ( isFrameUnusable( frame_function_3_receiver_of_module_django__dispatch__dispatcher ) )
    {
        if ( frame_function_3_receiver_of_module_django__dispatch__dispatcher )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_receiver_of_module_django__dispatch__dispatcher" );
#endif
            Py_DECREF( frame_function_3_receiver_of_module_django__dispatch__dispatcher );
        }

        frame_function_3_receiver_of_module_django__dispatch__dispatcher = MAKE_FRAME( _codeobj_155e6c07567ae03ef49d98a8717b003b, _module_django__dispatch__dispatcher );
    }

    FrameGuard frame_guard( frame_function_3_receiver_of_module_django__dispatch__dispatcher );
    try
    {
        assert( Py_REFCNT( frame_function_3_receiver_of_module_django__dispatch__dispatcher ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 302 );
        return _python_var__decorator.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_signal.updateLocalsDict( _python_var__decorator.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_receiver_of_module_django__dispatch__dispatcher )
        {
           Py_DECREF( frame_function_3_receiver_of_module_django__dispatch__dispatcher );
           frame_function_3_receiver_of_module_django__dispatch__dispatcher = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_3_receiver_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_signal = NULL;
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
                        PyErr_Format( PyExc_TypeError, "receiver() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "receiver() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "receiver() keywords must be strings" );
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

    // Check if argument signal was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_signal );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_signal == NULL );

            _python_par_signal = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_signal );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "receiver() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "receiver() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "receiver() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "receiver() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "receiver() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "receiver() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "receiver() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "receiver() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "receiver() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "receiver() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "receiver() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "receiver() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_signal != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "receiver() got multiple values for keyword argument 'signal'" );
             goto error_exit;
         }

        _python_par_signal = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_receiver_of_module_django__dispatch__dispatcher( self, _python_par_signal, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_signal );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_3_receiver_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_receiver_of_module_django__dispatch__dispatcher( self, INCREASE_REFCOUNT( args[ 0 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_3_receiver_of_module_django__dispatch__dispatcher( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject *_python_par_func )
{
    // The context of the function.
    struct _context_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher_t *_python_context = (struct _context_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_func( _python_str_plain_func, _python_par_func );
    PyObjectLocalVariable _python_var_s( _python_str_plain_s );

    // Actual function code.
    static PyFrameObject *frame_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher = NULL;

    if ( isFrameUnusable( frame_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher ) )
    {
        if ( frame_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher" );
#endif
            Py_DECREF( frame_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher );
        }

        frame_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher = MAKE_FRAME( _codeobj_e774954a38f761dc1bbd4fd0303ad578, _module_django__dispatch__dispatcher );
    }

    FrameGuard frame_guard( frame_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher );
    try
    {
        assert( Py_REFCNT( frame_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 296 );
        if ( BUILTIN_ISINSTANCE_BOOL( _python_context->python_closure_signal.asObject(), PyObjectTemporary( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_list ), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) ).asObject() ) )
        {
            {
                frame_guard.setLineNumber( 297 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_context->python_closure_signal.asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 297 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_s.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 298 );
                    {
                        PyObjectTempKeeper1 call_tmp1;
                        PyObjectTempKeeper1 call_tmp2;
                        DECREASE_REFCOUNT( ( call_tmp1.assign( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_connect ) ), call_tmp2.assign( MAKE_TUPLE1( _python_var_func.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), INCREASE_REFCOUNT( _python_context->python_closure_kwargs.asObject() ) ) ) );
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        else
        {
            frame_guard.setLineNumber( 300 );
            {
                PyObjectTempKeeper1 call_tmp4;
                PyObjectTempKeeper1 call_tmp5;
                DECREASE_REFCOUNT( ( call_tmp4.assign( LOOKUP_ATTRIBUTE( _python_context->python_closure_signal.asObject(), _python_str_plain_connect ) ), call_tmp5.assign( MAKE_TUPLE1( _python_var_func.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp4.asObject(), call_tmp5.asObject(), INCREASE_REFCOUNT( _python_context->python_closure_kwargs.asObject() ) ) ) );
            }
        }
        frame_guard.setLineNumber( 301 );
        return _python_var_func.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_func.updateLocalsDict( _python_context->python_closure_kwargs.updateLocalsDict( _python_context->python_closure_signal.updateLocalsDict( _python_var_s.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher )
        {
           Py_DECREF( frame_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher );
           frame_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "_decorator() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_func == key )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "_decorator() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_func, key ) )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "_decorator() got multiple values for keyword argument 'func'" );
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
                   "_decorator() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_decorator() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_decorator() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_decorator() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_decorator() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_decorator() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_decorator() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_decorator() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_decorator() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_decorator() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_decorator() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_decorator() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_decorator() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_func != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_decorator() got multiple values for keyword argument 'func'" );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher( self, _python_par_func );

error_exit:;

    Py_XDECREF( _python_par_func );

    return NULL;
}

static PyObject *dparse_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher,
        dparse_function_1___init___of_class_2_Signal_of_module_django__dispatch__dispatcher,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0eb4e2787d4bd8b97218056fe2ea097a,
        INCREASE_REFCOUNT( _python_tuple_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__dispatcher,
        _python_str_digest_18745f5b4ee3380a87fc717644064cb9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher( PyObjectSharedLocalVariable &python_closure_kwargs, PyObjectSharedLocalVariable &python_closure_signal )
{
    struct _context_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher_t *_python_context = new _context_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_kwargs.shareWith( python_closure_kwargs );
    _python_context->python_closure_signal.shareWith( python_closure_signal );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher,
        dparse_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher,
        _python_str_plain__decorator,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e774954a38f761dc1bbd4fd0303ad578,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__dispatcher,
        Py_None,
        _python_context,
        _context_function_1__decorator_of_function_3_receiver_of_module_django__dispatch__dispatcher_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__make_id_of_module_django__dispatch__dispatcher(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__make_id_of_module_django__dispatch__dispatcher,
        dparse_function_1__make_id_of_module_django__dispatch__dispatcher,
        _python_str_plain__make_id,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_01f058382b738d10a0f8e44602dbc35a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__dispatcher,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        dparse_function_2_connect_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        _python_str_plain_connect,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a64c6c38a8a2468543e37b1f57b6dc02,
        INCREASE_REFCOUNT( _python_tuple_none_true_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__dispatcher,
        _python_str_digest_79b70907282897e67554ff5f0c7276d8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        dparse_function_3_disconnect_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        _python_str_plain_disconnect,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4007ff483b437a9b31d8a8c2640ceafd,
        INCREASE_REFCOUNT( _python_tuple_none_none_true_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__dispatcher,
        _python_str_digest_f1a41441be66e5b0904e8513a9006395
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_receiver_of_module_django__dispatch__dispatcher(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_receiver_of_module_django__dispatch__dispatcher,
        dparse_function_3_receiver_of_module_django__dispatch__dispatcher,
        _python_str_plain_receiver,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_155e6c07567ae03ef49d98a8717b003b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__dispatcher,
        _python_str_digest_a4c141956af9f9d26e56bb57cf3651e0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        dparse_function_4_has_listeners_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        _python_str_plain_has_listeners,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cb30ed2eada5bc504f81907162a8f96d,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__dispatcher,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        dparse_function_5_send_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        _python_str_plain_send,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e655a22b17c1307f82d158d6a3fa9911,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__dispatcher,
        _python_str_digest_5aeb098c199c35d4f1a035652937ccf0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        dparse_function_6_send_robust_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        _python_str_plain_send_robust,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b8393df2d334528d143368c632fd4466,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__dispatcher,
        _python_str_digest_4b460c2d1e84cf37c2761ac2369d6813
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        dparse_function_7__live_receivers_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        _python_str_plain__live_receivers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8cf9fe81eeb1a872740fc8d21cae22ff,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__dispatcher,
        _python_str_digest_f2e39d54fd35a0a3d3d45ddf5b904520
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        dparse_function_8__remove_receiver_of_class_2_Signal_of_module_django__dispatch__dispatcher,
        _python_str_plain__remove_receiver,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4f622cd8dbf3304419e90af56023d37f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__dispatch__dispatcher,
        _python_str_digest_a1cc919bd67f9d4b089d59e1df61f2aa
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.dispatch.dispatcher",   /* m_name */
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

MOD_INIT_DECL( django__dispatch__dispatcher )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__dispatch__dispatcher );
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

    // puts( "in initdjango__dispatch__dispatcher" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__dispatch__dispatcher = Py_InitModule4(
        "django.dispatch.dispatcher",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__dispatch__dispatcher = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__dispatch__dispatcher = (PyDictObject *)((PyModuleObject *)_module_django__dispatch__dispatcher)->md_dict;

    assertObject( _module_django__dispatch__dispatcher );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_eb7c6e6bd41f9a006ac9ff1749f44ec3, _module_django__dispatch__dispatcher );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__dispatch__dispatcher );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__dispatch__dispatcher != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__dispatch__dispatcher, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__dispatch__dispatcher, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_16a2cc3566990e47f92a676e3cd48feb );
    PyFrameObject *frame_module_django__dispatch__dispatcher = MAKE_FRAME( _codeobj_3634b398360e6cc9aac3d661c0df0555, _module_django__dispatch__dispatcher );

    FrameGuard frame_guard( frame_module_django__dispatch__dispatcher );
    try
    {
        assert( Py_REFCNT( frame_module_django__dispatch__dispatcher ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__dispatch__dispatcher, (Nuitka_StringObject *)_python_str_plain_weakref, IMPORT_MODULE( _python_str_plain_weakref, ((PyModuleObject *)_module_django__dispatch__dispatcher)->md_dict, ((PyModuleObject *)_module_django__dispatch__dispatcher)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__dispatch__dispatcher, (Nuitka_StringObject *)_python_str_plain_threading, IMPORT_MODULE( _python_str_plain_threading, ((PyModuleObject *)_module_django__dispatch__dispatcher)->md_dict, ((PyModuleObject *)_module_django__dispatch__dispatcher)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__dispatch__dispatcher, (Nuitka_StringObject *)_python_str_plain_saferef, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d12fe2bb7fdf007ad027eded8177af80, ((PyModuleObject *)_module_django__dispatch__dispatcher)->md_dict, ((PyModuleObject *)_module_django__dispatch__dispatcher)->md_dict, _python_list_str_plain_saferef_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_saferef ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__dispatch__dispatcher, (Nuitka_StringObject *)_python_str_plain_xrange, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_91ddc8f1df73e2bf4268fd2741c1c593, ((PyModuleObject *)_module_django__dispatch__dispatcher)->md_dict, ((PyModuleObject *)_module_django__dispatch__dispatcher)->md_dict, _python_list_str_plain_xrange_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_xrange ) );
        frame_guard.setLineNumber( 7 );
        {
            PyObjectTempKeeper1 make_tuple1;
            UPDATE_STRING_DICT1( _moduledict_django__dispatch__dispatcher, (Nuitka_StringObject *)_python_str_plain_WEAKREF_TYPES, ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _mvar_django__dispatch__dispatcher_weakref.asObject0(), _python_str_plain_ReferenceType ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__dispatch__dispatcher_saferef.asObject0(), _python_str_plain_BoundMethodWeakref ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__dispatch__dispatcher, (Nuitka_StringObject *)_python_str_plain__make_id, MAKE_FUNCTION_function_1__make_id_of_module_django__dispatch__dispatcher(  ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__dispatch__dispatcher, (Nuitka_StringObject *)_python_str_plain_NONE_ID, CALL_FUNCTION_WITH_ARGS( _mvar_django__dispatch__dispatcher__make_id.asObject0(), Py_None ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__dispatch__dispatcher, (Nuitka_StringObject *)_python_str_plain_NO_RECEIVERS, CALL_FUNCTION_NO_ARGS( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
        {
            frame_guard.setLineNumber( 18 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_Signal_of_module_django__dispatch__dispatcher(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__dispatch__dispatcher___metaclass__.isInitialized( false ) ? _mvar_django__dispatch__dispatcher___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call3;
                PyObjectTempKeeper0 call5;
                _tmp_python_tmp_class = ( call3.assign( _python_tmp_metaclass.asObject() ), call5.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_str_plain_Signal, call5.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__dispatch__dispatcher, (Nuitka_StringObject *)_python_str_plain_Signal, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__dispatch__dispatcher)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__dispatch__dispatcher, (Nuitka_StringObject *)_python_str_plain_receiver, MAKE_FUNCTION_function_3_receiver_of_module_django__dispatch__dispatcher(  ) );

   return MOD_RETURN_VALUE( _module_django__dispatch__dispatcher );
}
