// Generated code for Python source for module 'django.core.mail.utils'
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

// The _module_django__core__mail__utils is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__mail__utils;
PyDictObject *_moduledict_django__core__mail__utils;

// The module level variables.
static PyObjectGlobalVariable_django__core__mail__utils _mvar_django__core__mail__utils_CachedDnsName( &_module_django__core__mail__utils, &_python_str_plain_CachedDnsName );
static PyObjectGlobalVariable_django__core__mail__utils _mvar_django__core__mail__utils___metaclass__( &_module_django__core__mail__utils, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__mail__utils _mvar_django__core__mail__utils_socket( &_module_django__core__mail__utils, &_python_str_plain_socket );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_CachedDnsName_of_module_django__core__mail__utils(  );


static PyObject *MAKE_FUNCTION_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils(  );


static PyObject *MAKE_FUNCTION_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_CachedDnsName_of_module_django__core__mail__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___str__( _python_str_plain___str__ );
    PyObjectLocalVariable _python_var_get_fqdn( _python_str_plain_get_fqdn );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    _python_var___str__.assign1( MAKE_FUNCTION_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils(  ) );
    _python_var_get_fqdn.assign1( MAKE_FUNCTION_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils(  ) );
    return _python_var_get_fqdn.updateLocalsDict( _python_var___str__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils = NULL;

    if ( isFrameUnusable( frame_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils ) )
    {
        if ( frame_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils" );
#endif
            Py_DECREF( frame_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils );
        }

        frame_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils = MAKE_FRAME( _codeobj_dc1dc7c0ea5348d3b8c4c31e914dbcf2, _module_django__core__mail__utils );
    }

    FrameGuard frame_guard( frame_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils );
    try
    {
        assert( Py_REFCNT( frame_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 12 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_fqdn ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils )
        {
           Py_DECREF( frame_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils );
           frame_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils = NULL;

    if ( isFrameUnusable( frame_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils ) )
    {
        if ( frame_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils" );
#endif
            Py_DECREF( frame_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils );
        }

        frame_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils = MAKE_FRAME( _codeobj_e2a78e2c4e08f3f4d6deecca835a6c91, _module_django__core__mail__utils );
    }

    FrameGuard frame_guard( frame_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils );
    try
    {
        assert( Py_REFCNT( frame_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 15 );
        if ( (!( HAS_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__fqdn ) )) )
        {
            frame_guard.setLineNumber( 16 );
            {
                    PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__utils_socket.asObject0(), _python_str_plain_getfqdn ) ).asObject() ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__fqdn );
            }
        }
        frame_guard.setLineNumber( 17 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__fqdn );
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

        if ( frame_guard.getFrame0() == frame_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils )
        {
           Py_DECREF( frame_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils );
           frame_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_fqdn() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_fqdn() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_fqdn() got multiple values for keyword argument 'self'" );
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
                   "get_fqdn() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_fqdn() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_fqdn() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_fqdn() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_fqdn() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_fqdn() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_fqdn() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_fqdn() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_fqdn() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_fqdn() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_fqdn() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_fqdn() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_fqdn() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_fqdn() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils,
        dparse_function_1___str___of_class_1_CachedDnsName_of_module_django__core__mail__utils,
        _python_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_dc1dc7c0ea5348d3b8c4c31e914dbcf2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils,
        dparse_function_2_get_fqdn_of_class_1_CachedDnsName_of_module_django__core__mail__utils,
        _python_str_plain_get_fqdn,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e2a78e2c4e08f3f4d6deecca835a6c91,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__utils,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.mail.utils",   /* m_name */
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

MOD_INIT_DECL( django__core__mail__utils )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__mail__utils );
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

    // puts( "in initdjango__core__mail__utils" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__mail__utils = Py_InitModule4(
        "django.core.mail.utils",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__mail__utils = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__mail__utils = (PyDictObject *)((PyModuleObject *)_module_django__core__mail__utils)->md_dict;

    assertObject( _module_django__core__mail__utils );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_951c6b668e3184429d22e5add1c178cf, _module_django__core__mail__utils );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__mail__utils );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__mail__utils != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__mail__utils, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_f4328770f87f143aa5024a337b688b20 );
    UPDATE_STRING_DICT0( _moduledict_django__core__mail__utils, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_05936183f4468cd85d44388d73ae4e21 );
    PyFrameObject *frame_module_django__core__mail__utils = MAKE_FRAME( _codeobj_fa3fdf6cfea1b8d868e7e7851406c16d, _module_django__core__mail__utils );

    FrameGuard frame_guard( frame_module_django__core__mail__utils );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__mail__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__utils, (Nuitka_StringObject *)_python_str_plain_socket, IMPORT_MODULE( _python_str_plain_socket, ((PyModuleObject *)_module_django__core__mail__utils)->md_dict, ((PyModuleObject *)_module_django__core__mail__utils)->md_dict, Py_None, _python_int_neg_1 ) );
        {
            frame_guard.setLineNumber( 10 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_CachedDnsName_of_module_django__core__mail__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__mail__utils___metaclass__.isInitialized( false ) ? _mvar_django__core__mail__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_CachedDnsName, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__mail__utils, (Nuitka_StringObject *)_python_str_plain_CachedDnsName, _python_tmp_class.asObject() );
        }
        frame_guard.setLineNumber( 19 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__utils, (Nuitka_StringObject *)_python_str_plain_DNS_NAME, CALL_FUNCTION_NO_ARGS( _mvar_django__core__mail__utils_CachedDnsName.asObject0() ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__mail__utils)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__core__mail__utils );
}
