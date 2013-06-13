// Generated code for Python source for module 'django.db.utils'
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

// The _module_django__db__utils is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db__utils;
PyDictObject *_moduledict_django__db__utils;

// The module level variables.
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_ConnectionDoesNotExist( &_module_django__db__utils, &_python_str_plain_ConnectionDoesNotExist );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_DEFAULT_DB_ALIAS( &_module_django__db__utils, &_python_str_plain_DEFAULT_DB_ALIAS );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_DataError( &_module_django__db__utils, &_python_str_plain_DataError );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_DatabaseError( &_module_django__db__utils, &_python_str_plain_DatabaseError );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_Error( &_module_django__db__utils, &_python_str_plain_Error );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_ImproperlyConfigured( &_module_django__db__utils, &_python_str_plain_ImproperlyConfigured );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_IntegrityError( &_module_django__db__utils, &_python_str_plain_IntegrityError );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_InterfaceError( &_module_django__db__utils, &_python_str_plain_InterfaceError );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_InternalError( &_module_django__db__utils, &_python_str_plain_InternalError );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_NotSupportedError( &_module_django__db__utils, &_python_str_plain_NotSupportedError );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_OperationalError( &_module_django__db__utils, &_python_str_plain_OperationalError );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_PendingDeprecationWarning( &_module_django__db__utils, &_python_str_plain_PendingDeprecationWarning );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_ProgrammingError( &_module_django__db__utils, &_python_str_plain_ProgrammingError );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils___file__( &_module_django__db__utils, &_python_str_plain___file__ );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils___metaclass__( &_module_django__db__utils, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_cached_property( &_module_django__db__utils, &_python_str_plain_cached_property );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_import_by_path( &_module_django__db__utils, &_python_str_plain_import_by_path );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_import_module( &_module_django__db__utils, &_python_str_plain_import_module );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_load_backend( &_module_django__db__utils, &_python_str_plain_load_backend );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_local( &_module_django__db__utils, &_python_str_plain_local );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_os( &_module_django__db__utils, &_python_str_plain_os );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_pkgutil( &_module_django__db__utils, &_python_str_plain_pkgutil );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_settings( &_module_django__db__utils, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_six( &_module_django__db__utils, &_python_str_plain_six );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_upath( &_module_django__db__utils, &_python_str_plain_upath );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_warnings( &_module_django__db__utils, &_python_str_plain_warnings );
static PyObjectGlobalVariable_django__db__utils _mvar_django__db__utils_wraps( &_module_django__db__utils, &_python_str_plain_wraps );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Error_of_module_django__db__utils(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_InterfaceError_of_module_django__db__utils(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_DatabaseError_of_module_django__db__utils(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_DataError_of_module_django__db__utils(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_OperationalError_of_module_django__db__utils(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_IntegrityError_of_module_django__db__utils(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_InternalError_of_module_django__db__utils(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_ProgrammingError_of_module_django__db__utils(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_9_NotSupportedError_of_module_django__db__utils(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_11_load_backend_of_module_django__db__utils( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure__, PyObjectLocalVariable &python_closure_ispkg, PyObjectLocalVariable &python_closure_name );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_11_load_backend_of_module_django__db__utils( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_b );


NUITKA_LOCAL_MODULE PyObject *impl_class_12_ConnectionDoesNotExist_of_module_django__db__utils(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_13_ConnectionHandler_of_module_django__db__utils(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_alias, PyObjectLocalParameterVariableNoDel &python_closure_self );


NUITKA_LOCAL_MODULE PyObject *impl_class_14_ConnectionRouter_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_11_load_backend_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( PyObjectSharedLocalVariable &python_closure_action );


// This structure is for attachment as self of function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils.
// It is allocated at the time the function object is created.
struct _context_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_action;
};

static void _context_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils_destructor( void *context_voidptr )
{
    _context_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils_t *_python_context = (_context_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( PyObjectSharedLocalVariable &python_closure_func, PyObjectSharedLocalVariable &python_closure_self );


// This structure is for attachment as self of function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils.
// It is allocated at the time the function object is created.
struct _context_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_func;
    PyObjectClosureVariable python_closure_self;
};

static void _context_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils_destructor( void *context_voidptr )
{
    _context_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils_t *_python_context = (_context_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_2___enter___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils(  );


static PyObject *MAKE_FUNCTION_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Error_of_module_django__db__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_2_InterfaceError_of_module_django__db__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_3_DatabaseError_of_module_django__db__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_4_DataError_of_module_django__db__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_5_OperationalError_of_module_django__db__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_6_IntegrityError_of_module_django__db__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_7_InternalError_of_module_django__db__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_8_ProgrammingError_of_module_django__db__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_9_NotSupportedError_of_module_django__db__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___enter__( _python_str_plain___enter__ );
    PyObjectLocalVariable _python_var___exit__( _python_str_plain___exit__ );
    PyObjectLocalVariable _python_var___call__( _python_str_plain___call__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    _python_var___doc__.assign0( _python_str_digest_efbe3d5979ed11b24e468fed87380ea5 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  ) );
    _python_var___enter__.assign1( MAKE_FUNCTION_function_2___enter___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  ) );
    _python_var___exit__.assign1( MAKE_FUNCTION_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  ) );
    _python_var___call__.assign1( MAKE_FUNCTION_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  ) );
    return _python_var___call__.updateLocalsDict( _python_var___exit__.updateLocalsDict( _python_var___enter__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_wrapper )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_wrapper( _python_str_plain_wrapper, _python_par_wrapper );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils ) )
    {
        if ( frame_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils );
        }

        frame_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils = MAKE_FRAME( _codeobj_fa36ae136fd25225b4d59949ace54867, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 67 );
        {
                PyObject *tmp_identifier = _python_var_wrapper.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_wrapper );
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
        frame_guard.getFrame0()->f_locals = _python_var_wrapper.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils );
           frame_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_wrapper = NULL;
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
            if ( found == false && _python_str_plain_wrapper == key )
            {
                if (unlikely( _python_par_wrapper ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'wrapper'" );
                    goto error_exit;
                }

                _python_par_wrapper = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_wrapper, key ) )
            {
                if (unlikely( _python_par_wrapper ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'wrapper'" );
                    goto error_exit;
                }

                _python_par_wrapper = value;

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
         if (unlikely( _python_par_wrapper != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'wrapper'" );
             goto error_exit;
         }

        _python_par_wrapper = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, _python_par_self, _python_par_wrapper );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_wrapper );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___enter___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2___enter___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__enter__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__enter__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__enter__() got multiple values for keyword argument 'self'" );
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
                   "__enter__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__enter__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__enter__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__enter__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__enter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__enter__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__enter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__enter__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__enter__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___enter___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___enter___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___enter___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___enter___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_exc_type, PyObject *_python_par_exc_value, PyObject *_python_par_traceback )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_exc_type( _python_str_plain_exc_type, _python_par_exc_type );
    PyObjectLocalParameterVariableNoDel _python_var_exc_value( _python_str_plain_exc_value, _python_par_exc_value );
    PyObjectLocalParameterVariableNoDel _python_var_traceback( _python_str_plain_traceback, _python_par_traceback );
    PyObjectLocalVariable _python_var_dj_exc_type( _python_str_plain_dj_exc_type );
    PyObjectLocalVariable _python_var_db_exc_type( _python_str_plain_db_exc_type );
    PyObjectLocalVariable _python_var_args( _python_str_plain_args );
    PyObjectLocalVariable _python_var_dj_exc_value( _python_str_plain_dj_exc_value );

    // Actual function code.
    static PyFrameObject *frame_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils ) )
    {
        if ( frame_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils );
        }

        frame_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils = MAKE_FRAME( _codeobj_3a84e2e4d4076ba956e8079db505b0c8, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 73 );
        if ( ( _python_var_exc_type.asObject() == Py_None ) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        {
            frame_guard.setLineNumber( 75 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper0 make_tuple1;
                PyObjectTempKeeper0 make_tuple2;
                PyObjectTempKeeper0 make_tuple3;
                PyObjectTempKeeper0 make_tuple4;
                PyObjectTempKeeper0 make_tuple5;
                PyObjectTempKeeper0 make_tuple6;
                PyObjectTempKeeper0 make_tuple7;
                PyObjectTempKeeper0 make_tuple8;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple1.assign( _mvar_django__db__utils_DataError.asObject0() ), make_tuple2.assign( _mvar_django__db__utils_OperationalError.asObject0() ), make_tuple3.assign( _mvar_django__db__utils_IntegrityError.asObject0() ), make_tuple4.assign( _mvar_django__db__utils_InternalError.asObject0() ), make_tuple5.assign( _mvar_django__db__utils_ProgrammingError.asObject0() ), make_tuple6.assign( _mvar_django__db__utils_NotSupportedError.asObject0() ), make_tuple7.assign( _mvar_django__db__utils_DatabaseError.asObject0() ), make_tuple8.assign( _mvar_django__db__utils_InterfaceError.asObject0() ), MAKE_TUPLE9( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), make_tuple4.asObject0(), make_tuple5.asObject0(), make_tuple6.asObject0(), make_tuple7.asObject0(), make_tuple8.asObject0(), _mvar_django__db__utils_Error.asObject0() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 75 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_dj_exc_type.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 86 );
                {
                    PyObjectTempKeeper1 getattr10;
                    _python_var_db_exc_type.assign1( ( getattr10.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_wrapper ) ).asObject(), _python_str_plain_Database ) ), BUILTIN_GETATTR( getattr10.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_dj_exc_type.asObject(), _python_str_plain___name__ ) ).asObject(), NULL ) ) );
                }
                frame_guard.setLineNumber( 87 );
                {
                    PyObjectTempKeeper0 call24;
                    if ( CHECK_IF_TRUE( PyObjectTemporary( ( call24.assign( _python_var_exc_type.asObject() ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_issubclass ), call24.asObject0(), _python_var_db_exc_type.asObject() ) ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 89 );
                    try
                    {
                        frame_guard.setLineNumber( 90 );
                        _python_var_args.assign1( TO_TUPLE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_exc_value.asObject(), _python_str_plain_args ) ).asObject() ) );
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
                            frame_guard.setLineNumber( 92 );
                            _python_var_args.assign1( MAKE_TUPLE1( _python_var_exc_value.asObject() ) );
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
                    frame_guard.setLineNumber( 93 );
                    {
                        PyObjectTempKeeper0 call_tmp13;
                        _python_var_dj_exc_value.assign1( ( call_tmp13.assign( _python_var_dj_exc_type.asObject() ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp13.asObject(), _python_var_args.asObject1() ) ) );
                    }
                    frame_guard.setLineNumber( 94 );
                    {
                            PyObject *tmp_identifier = _python_var_exc_value.asObject();
                            SET_ATTRIBUTE( tmp_identifier, _python_var_dj_exc_value.asObject(), _python_str_plain___cause__ );
                    }
                    frame_guard.setLineNumber( 97 );
                    {
                        PyObjectTempKeeper0 cmp17;
                        PyObjectTempKeeper0 make_tuple15;
                        if ( ( cmp17.assign( _python_var_dj_exc_type.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp17.asObject0(), PyObjectTemporary( ( make_tuple15.assign( _mvar_django__db__utils_DataError.asObject0() ), MAKE_TUPLE2( make_tuple15.asObject0(), _mvar_django__db__utils_IntegrityError.asObject0() ) ) ).asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 98 );
                        SET_ATTRIBUTE( Py_True, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_wrapper ) ).asObject(), _python_str_plain_errors_occurred );
                    }
                    }
                    frame_guard.setLineNumber( 99 );
                    {
                        PyObjectTempKeeper1 call19;
                        PyObjectTempKeeper0 call20;
                        PyObjectTempKeeper0 call21;
                        DECREASE_REFCOUNT( ( call19.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__utils_six.asObject0(), _python_str_plain_reraise ) ), call20.assign( _python_var_dj_exc_type.asObject() ), call21.assign( _python_var_dj_exc_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), call20.asObject0(), call21.asObject0(), _python_var_traceback.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_traceback.updateLocalsDict( _python_var_exc_value.updateLocalsDict( _python_var_exc_type.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_dj_exc_value.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_db_exc_type.updateLocalsDict( _python_var_dj_exc_type.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils );
           frame_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_exc_type = NULL;
    PyObject *_python_par_exc_value = NULL;
    PyObject *_python_par_traceback = NULL;
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
                PyErr_Format( PyExc_TypeError, "__exit__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exc_type == key )
            {
                if (unlikely( _python_par_exc_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_type'" );
                    goto error_exit;
                }

                _python_par_exc_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exc_value == key )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_traceback == key )
            {
                if (unlikely( _python_par_traceback ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'traceback'" );
                    goto error_exit;
                }

                _python_par_traceback = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_type, key ) )
            {
                if (unlikely( _python_par_exc_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_type'" );
                    goto error_exit;
                }

                _python_par_exc_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_value, key ) )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_traceback, key ) )
            {
                if (unlikely( _python_par_traceback ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'traceback'" );
                    goto error_exit;
                }

                _python_par_traceback = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__exit__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__exit__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__exit__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__exit__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__exit__() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__exit__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_type'" );
             goto error_exit;
         }

        _python_par_exc_type = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_value'" );
             goto error_exit;
         }

        _python_par_exc_value = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_traceback != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'traceback'" );
             goto error_exit;
         }

        _python_par_traceback = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, _python_par_self, _python_par_exc_type, _python_par_exc_value, _python_par_traceback );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_exc_type );
    Py_XDECREF( _python_par_exc_value );
    Py_XDECREF( _python_par_traceback );

    return NULL;
}

static PyObject *dparse_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_func )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectSharedLocalVariable _python_var_func( _python_str_plain_func, _python_par_func );
    PyObjectLocalVariable _python_var_inner( _python_str_plain_inner );

    // Actual function code.
    static PyFrameObject *frame_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils ) )
    {
        if ( frame_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils );
        }

        frame_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils = MAKE_FRAME( _codeobj_91a28efea428a18e0dc80fa02e2a1faf, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 102 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_inner.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( ( call1.assign( _mvar_django__db__utils_wraps.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_func.asObject() ) ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( _python_var_func, _python_var_self ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 106 );
        return _python_var_inner.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_func.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_inner.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils );
           frame_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
            if ( found == false && _python_str_plain_func == key )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_func, key ) )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'func'" );
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
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__call__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_func != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'func'" );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, _python_par_self, _python_par_func );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_func );

    return NULL;
}

static PyObject *dparse_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // The context of the function.
    struct _context_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils_t *_python_context = (struct _context_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils ) )
    {
        if ( frame_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils );
        }

        frame_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils = MAKE_FRAME( _codeobj_d7b683a375e67f6e321ae8e721abd668, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 104 );
            PyObject *_python_tmp_with_source = _python_context->python_closure_self.asObject();
            PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source, _python_str_plain___exit__ ) );
            PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source, _python_str_plain___enter__ ) ).asObject() ) );
            PyObject *_python_tmp_indicator = Py_True;
            PythonExceptionKeeper _caught_1;

            PyObjectTempKeeper1 _return_value_1;

            try
            {
                try
                {
                    frame_guard.setLineNumber( 105 );
                    {
                        PyObjectTempKeeper0 call_tmp1;
                        PyObjectTempKeeper0 call_tmp2;
                        throw ReturnValueException( ( call_tmp1.assign( _python_context->python_closure_func.asObject() ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) ) );
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
            catch ( ReturnValueException &e )
            {
                _return_value_1.assign( e.getValue() );
            }

            // Final code:
            if ( ( _python_tmp_indicator == Py_True ) )
            {
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), Py_None, Py_None, Py_None ) );
            }
            _caught_1.rethrow();
            if ( _return_value_1.isKeeping() )
            {
                return _return_value_1.asObject();
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_context->python_closure_func.updateLocalsDict( _python_context->python_closure_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils );
           frame_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kwargs = NULL;

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
                        PyErr_Format( PyExc_TypeError, "inner() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "inner() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "inner() keywords must be strings" );
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

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 0 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "inner() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "inner() takes at least %d non-keyword arguments (%zd given)", 0, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "inner() takes at least %d arguments (%zd given)", 0, args_given + kw_found );
            }
        }

        goto error_exit;
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 0 )
    {
        _python_par_args = PyTuple_New( args_size - 0 );

        for( Py_ssize_t i = 0; i < args_size - 0; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[0+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, MAKE_TUPLE( &args[ 0 ], size > 0 ? size-0 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_load_backend_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_backend_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_backend_name( _python_str_plain_backend_name, _python_par_backend_name );
    PyObjectLocalVariable _python_var_e_user( _python_str_plain_e_user );
    PyObjectLocalVariable _python_var_backend_dir( _python_str_plain_backend_dir );
    PyObjectLocalVariable _python_var_builtin_backends( _python_str_plain_builtin_backends );
    PyObjectLocalVariable _python_var_backend_reprs( _python_str_plain_backend_reprs );
    PyObjectLocalVariable _python_var_error_msg( _python_str_plain_error_msg );
    PyObjectLocalVariable _python_var__( _python_str_plain__ );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );
    PyObjectLocalVariable _python_var_ispkg( _python_str_plain_ispkg );
    PyObjectLocalVariable _python_var_b( _python_str_plain_b );

    // Actual function code.
    static PyFrameObject *frame_function_11_load_backend_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_11_load_backend_of_module_django__db__utils ) )
    {
        if ( frame_function_11_load_backend_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_load_backend_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_11_load_backend_of_module_django__db__utils );
        }

        frame_function_11_load_backend_of_module_django__db__utils = MAKE_FRAME( _codeobj_2077161bfc558f5d13a4917d7b415907, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_11_load_backend_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_11_load_backend_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 111 );
        try
        {
            frame_guard.setLineNumber( 112 );
            {
                PyObjectTempKeeper0 call19;
                return ( call19.assign( _mvar_django__db__utils_import_module.asObject0() ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), _python_str_digest_860c9c439b00f108740ab4c3f0ba6caa, _python_var_backend_name.asObject() ) );
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

            if ( _exception.matches( PyExc_ImportError ) )
            {
                frame_guard.detachFrame();
                _python_var_e_user.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 116 );
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper1 call3;
                    PyObjectTempKeeper1 call5;
                    _python_var_backend_dir.assign1( ( call5.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__utils_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__utils_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_dirname ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__db__utils_upath.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _mvar_django__db__utils___file__.asObject0() ) ) ).asObject() ) ) ).asObject(), _python_str_plain_backends ) ) );
                }
                frame_guard.setLineNumber( 117 );
                try
                {
                    frame_guard.setLineNumber( 118 );
                    {
                        PyObjectTempKeeper1 call8;
                        _python_var_builtin_backends.assign1( impl_listcontr_1_of_function_11_load_backend_of_module_django__db__utils( MAKE_ITERATOR( PyObjectTemporary( ( call8.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__utils_pkgutil.asObject0(), _python_str_plain_iter_modules ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( MAKE_LIST1( _python_var_backend_dir.asObject1() ) ).asObject() ) ) ).asObject() ), _python_var__, _python_var_ispkg, _python_var_name ) );
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

                    if ( _exception.matches( PyExc_EnvironmentError ) )
                    {
                        frame_guard.detachFrame();
                        _python_var_builtin_backends.assign1( PyList_New( 0 ) );
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
                frame_guard.setLineNumber( 123 );
                {
                    PyObjectTempKeeper0 cmp17;
                    if ( ( cmp17.assign( _python_var_backend_name.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp17.asObject0(), PyObjectTemporary( impl_listcontr_2_of_function_11_load_backend_of_module_django__db__utils( MAKE_ITERATOR( _python_var_builtin_backends.asObject() ), _python_var_b ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 125 );
                    _python_var_backend_reprs.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_map ), LOOKUP_BUILTIN( _python_str_plain_repr ), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_sorted ), _python_var_builtin_backends.asObject() ) ).asObject() ) );
                    frame_guard.setLineNumber( 126 );
                    {
                        PyObjectTempKeeper1 call10;
                        PyObjectTempKeeper0 make_tuple12;
                        PyObjectTempKeeper1 make_tuple13;
                        _python_var_error_msg.assign1( BINARY_OPERATION_REMAINDER( _python_str_digest_61fd9b2bf32ec03e8a9d5fa2ffffd890, PyObjectTemporary( ( make_tuple12.assign( _python_var_backend_name.asObject() ), make_tuple13.assign( ( call10.assign( LOOKUP_ATTRIBUTE( _python_str_digest_fc763cb31e9938f37737394681228f83, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_backend_reprs.asObject() ) ) ), MAKE_TUPLE3( make_tuple12.asObject0(), make_tuple13.asObject0(), _python_var_e_user.asObject() ) ) ).asObject() ) );
                    }
                    frame_guard.setLineNumber( 130 );
                    {
                        PyObjectTempKeeper0 call15;
                        {
                            PyObjectTemporary tmp_exception_type( ( call15.assign( _mvar_django__db__utils_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_var_error_msg.asObject() ) ) );
                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                    }
                    }
                }
                else
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
        frame_guard.getFrame0()->f_locals = _python_var_backend_name.updateLocalsDict( _python_var_b.updateLocalsDict( _python_var_ispkg.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var__.updateLocalsDict( _python_var_error_msg.updateLocalsDict( _python_var_backend_reprs.updateLocalsDict( _python_var_builtin_backends.updateLocalsDict( _python_var_backend_dir.updateLocalsDict( _python_var_e_user.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_11_load_backend_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_11_load_backend_of_module_django__db__utils );
           frame_function_11_load_backend_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_11_load_backend_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_backend_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "load_backend() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_backend_name == key )
            {
                if (unlikely( _python_par_backend_name ))
                {
                    PyErr_Format( PyExc_TypeError, "load_backend() got multiple values for keyword argument 'backend_name'" );
                    goto error_exit;
                }

                _python_par_backend_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_backend_name, key ) )
            {
                if (unlikely( _python_par_backend_name ))
                {
                    PyErr_Format( PyExc_TypeError, "load_backend() got multiple values for keyword argument 'backend_name'" );
                    goto error_exit;
                }

                _python_par_backend_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "load_backend() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "load_backend() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "load_backend() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "load_backend() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "load_backend() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "load_backend() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "load_backend() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "load_backend() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "load_backend() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "load_backend() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "load_backend() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "load_backend() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "load_backend() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_backend_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "load_backend() got multiple values for keyword argument 'backend_name'" );
             goto error_exit;
         }

        _python_par_backend_name = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_11_load_backend_of_module_django__db__utils( self, _python_par_backend_name );

error_exit:;

    Py_XDECREF( _python_par_backend_name );

    return NULL;
}

static PyObject *dparse_function_11_load_backend_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_11_load_backend_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_load_backend_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_11_load_backend_of_module_django__db__utils( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure__,PyObjectLocalVariable &python_closure_ispkg,PyObjectLocalVariable &python_closure_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 119 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 119 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                {
                    frame_guard.setLineNumber( 119 );
                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                    python_closure__.assign0( _python_tmp_element_1.asObject() );
                    python_closure_name.assign0( _python_tmp_element_2.asObject() );
                    python_closure_ispkg.assign0( _python_tmp_element_3.asObject() );
                }
                if ( ( CHECK_IF_TRUE( python_closure_ispkg.asObject() ) && RICH_COMPARE_BOOL_NE( python_closure_name.asObject(), _python_str_plain_dummy ) ) )
                {
                    frame_guard.setLineNumber( 119 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_name.asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_11_load_backend_of_module_django__db__utils( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_b )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 123 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 123 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_b.assign0( _python_tmp_iter_value.asObject() );
                APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_6654e9a627ad060b8ce08826518699b5, python_closure_b.asObject() ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_class_12_ConnectionDoesNotExist_of_module_django__db__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_13_ConnectionHandler_of_module_django__db__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_databases( _python_str_plain_databases );
    PyObjectLocalVariable _python_var_ensure_defaults( _python_str_plain_ensure_defaults );
    PyObjectLocalVariable _python_var___getitem__( _python_str_plain___getitem__ );
    PyObjectLocalVariable _python_var___setitem__( _python_str_plain___setitem__ );
    PyObjectLocalVariable _python_var___delitem__( _python_str_plain___delitem__ );
    PyObjectLocalVariable _python_var___iter__( _python_str_plain___iter__ );
    PyObjectLocalVariable _python_var_all( _python_str_plain_all );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils(  ) );
    static PyFrameObject *frame_class_13_ConnectionHandler_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_class_13_ConnectionHandler_of_module_django__db__utils ) )
    {
        if ( frame_class_13_ConnectionHandler_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_13_ConnectionHandler_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_class_13_ConnectionHandler_of_module_django__db__utils );
        }

        frame_class_13_ConnectionHandler_of_module_django__db__utils = MAKE_FRAME( _codeobj_37a8a804b5ccef59511bddb57235a9a4, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_class_13_ConnectionHandler_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_class_13_ConnectionHandler_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 149 );
        _python_var_databases.assign1( CALL_FUNCTION_WITH_ARGS( _mvar_django__db__utils_cached_property.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils(  ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_all.updateLocalsDict( _python_var___iter__.updateLocalsDict( _python_var___delitem__.updateLocalsDict( _python_var___setitem__.updateLocalsDict( _python_var___getitem__.updateLocalsDict( _python_var_ensure_defaults.updateLocalsDict( _python_var_databases.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_13_ConnectionHandler_of_module_django__db__utils )
        {
           Py_DECREF( frame_class_13_ConnectionHandler_of_module_django__db__utils );
           frame_class_13_ConnectionHandler_of_module_django__db__utils = NULL;
        }

        throw;
    }
    _python_var_ensure_defaults.assign1( MAKE_FUNCTION_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils(  ) );
    _python_var___getitem__.assign1( MAKE_FUNCTION_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils(  ) );
    _python_var___setitem__.assign1( MAKE_FUNCTION_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils(  ) );
    _python_var___delitem__.assign1( MAKE_FUNCTION_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils(  ) );
    _python_var___iter__.assign1( MAKE_FUNCTION_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils(  ) );
    _python_var_all.assign1( MAKE_FUNCTION_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils(  ) );
    return _python_var_all.updateLocalsDict( _python_var___iter__.updateLocalsDict( _python_var___delitem__.updateLocalsDict( _python_var___setitem__.updateLocalsDict( _python_var___getitem__.updateLocalsDict( _python_var_ensure_defaults.updateLocalsDict( _python_var_databases.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_databases )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_databases( _python_str_plain_databases, _python_par_databases );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils ) )
    {
        if ( frame_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils );
        }

        frame_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils = MAKE_FRAME( _codeobj_89875690e75a57b2945eb458f3b05f0d, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 146 );
        {
                PyObject *tmp_identifier = _python_var_databases.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__databases );
        }
        frame_guard.setLineNumber( 147 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( _mvar_django__db__utils_local.asObject0() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__connections );
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
        frame_guard.getFrame0()->f_locals = _python_var_databases.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils );
           frame_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_databases = NULL;
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
            if ( found == false && _python_str_plain_databases == key )
            {
                if (unlikely( _python_par_databases ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'databases'" );
                    goto error_exit;
                }

                _python_par_databases = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_databases, key ) )
            {
                if (unlikely( _python_par_databases ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'databases'" );
                    goto error_exit;
                }

                _python_par_databases = value;

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
         if (unlikely( _python_par_databases != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'databases'" );
             goto error_exit;
         }

        _python_par_databases = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_databases == NULL )
    {
        _python_par_databases = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_databases );
    }


    return impl_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils( self, _python_par_self, _python_par_databases );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_databases );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils ) )
    {
        if ( frame_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils );
        }

        frame_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils = MAKE_FRAME( _codeobj_1b6a21bb350badc3d888be8894e0ac0b, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 151 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__databases ) ).asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 152 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _mvar_django__db__utils_settings.asObject0(), _python_str_plain_DATABASES ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__databases );
            }
        }
        frame_guard.setLineNumber( 153 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__databases ) ).asObject(), PyObjectTemporary( PyDict_New() ).asObject() ) )
        {
            frame_guard.setLineNumber( 154 );
            {
                    PyObjectTemporary tmp_identifier( MAKE_DICT1( PyObjectTemporary( PyDict_Copy( _python_dict_09bec973361aa565e39f85159ab90214 ) ).asObject(), _mvar_django__db__utils_DEFAULT_DB_ALIAS.asObject0() ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__databases );
            }
        }
        frame_guard.setLineNumber( 159 );
        {
            PyObjectTempKeeper0 cmp3;
            if ( ( cmp3.assign( _mvar_django__db__utils_DEFAULT_DB_ALIAS.asObject0() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__databases ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 160 );
            {
                PyObjectTempKeeper0 call1;
                {
                    PyObjectTemporary tmp_exception_type( ( call1.assign( _mvar_django__db__utils_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_f2a47d88ba03c2baccba0987e18f9648, _mvar_django__db__utils_DEFAULT_DB_ALIAS.asObject0() ) ).asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        }
        frame_guard.setLineNumber( 161 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__databases );
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

        if ( frame_guard.getFrame0() == frame_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils );
           frame_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "databases() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "databases() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "databases() got multiple values for keyword argument 'self'" );
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
                   "databases() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "databases() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "databases() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "databases() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "databases() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "databases() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "databases() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "databases() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "databases() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "databases() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "databases() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "databases() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "databases() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "databases() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_alias )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_alias( _python_str_plain_alias, _python_par_alias );
    PyObjectLocalVariable _python_var_conn( _python_str_plain_conn );
    PyObjectLocalVariable _python_var_setting( _python_str_plain_setting );

    // Actual function code.
    static PyFrameObject *frame_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils ) )
    {
        if ( frame_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils );
        }

        frame_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils = MAKE_FRAME( _codeobj_2259aacc8c575ad118c0f75e8e6a2cb1, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 168 );
        try
        {
            frame_guard.setLineNumber( 169 );
            {
                PyObjectTempKeeper1 subscr3;
                _python_var_conn.assign1( ( subscr3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_databases ) ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _python_var_alias.asObject() ) ) );
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
                frame_guard.setLineNumber( 171 );
                {
                    PyObjectTempKeeper0 call1;
                    {
                        PyObjectTemporary tmp_exception_type( ( call1.assign( _mvar_django__db__utils_ConnectionDoesNotExist.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_f190d1ac57002feaaf17cc9d5d84c71d, _python_var_alias.asObject() ) ).asObject() ) ) );
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
        frame_guard.setLineNumber( 173 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_conn.asObject(), _python_str_plain_setdefault ) ).asObject(), _python_str_plain_ATOMIC_REQUESTS, Py_False ) );
        frame_guard.setLineNumber( 174 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__utils_settings.asObject0(), _python_str_plain_TRANSACTIONS_MANAGED ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 175 );
            {
                PyObjectTempKeeper1 call5;
                DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__utils_warnings.asObject0(), _python_str_plain_warn ) ), CALL_FUNCTION( call5.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_str_digest_d533262b1d5950a6aee76bc7c76bcd19, _mvar_django__db__utils_PendingDeprecationWarning.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_f154c9a58c9419d7e391901d7b7fe49e ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 178 );
            DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_conn.asObject(), _python_str_plain_setdefault ) ).asObject(), _python_str_plain_AUTOCOMMIT, Py_False ) );
        }
        frame_guard.setLineNumber( 179 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_conn.asObject(), _python_str_plain_setdefault ) ).asObject(), _python_str_plain_AUTOCOMMIT, Py_True ) );
        frame_guard.setLineNumber( 180 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_conn.asObject(), _python_str_plain_setdefault ) ).asObject(), _python_str_plain_ENGINE, _python_str_digest_07224cc54351102432430b8c06349f2d ) );
        frame_guard.setLineNumber( 181 );
        if ( ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_conn.asObject(), _python_str_plain_ENGINE ) ).asObject(), _python_str_digest_5f9a07b8064a14c9f0cf6a389347b476 ) || (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_conn.asObject(), _python_str_plain_ENGINE ) ).asObject() ) )) ) )
        {
            frame_guard.setLineNumber( 182 );
            SET_SUBSCRIPT( _python_str_digest_07224cc54351102432430b8c06349f2d, _python_var_conn.asObject(), _python_str_plain_ENGINE );
        }
        frame_guard.setLineNumber( 183 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_conn.asObject(), _python_str_plain_setdefault ) ).asObject(), _python_str_plain_CONN_MAX_AGE, _python_int_0 ) );
        frame_guard.setLineNumber( 184 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_conn.asObject(), _python_str_plain_setdefault ) ).asObject(), _python_str_plain_OPTIONS, PyObjectTemporary( PyDict_New() ).asObject() ) );
        frame_guard.setLineNumber( 185 );
        {
            PyObjectTempKeeper1 call8;
            DECREASE_REFCOUNT( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_conn.asObject(), _python_str_plain_setdefault ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_str_plain_TIME_ZONE, PyObjectTemporary( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__utils_settings.asObject0(), _python_str_plain_USE_TZ ) ).asObject() ) ? INCREASE_REFCOUNT( _python_str_plain_UTC ) : LOOKUP_ATTRIBUTE( _mvar_django__db__utils_settings.asObject0(), _python_str_plain_TIME_ZONE ) ) ).asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 186 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LIST_COPY( _python_list_5e1d3cf533648c07816da34ea39acec6_list ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 186 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_setting.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 187 );
                {
                    PyObjectTempKeeper1 call11;
                    DECREASE_REFCOUNT( ( call11.assign( LOOKUP_ATTRIBUTE( _python_var_conn.asObject(), _python_str_plain_setdefault ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_setting.asObject(), _python_str_empty ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        {
            frame_guard.setLineNumber( 188 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LIST_COPY( _python_list_ffc740bbaa28a60bf9b5666dbfc42b11_list ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 188 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    _python_var_setting.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 189 );
                {
                    PyObjectTempKeeper1 call14;
                    DECREASE_REFCOUNT( ( call14.assign( LOOKUP_ATTRIBUTE( _python_var_conn.asObject(), _python_str_plain_setdefault ) ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), _python_var_setting.asObject(), Py_None ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_alias.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_setting.updateLocalsDict( _python_var_conn.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils );
           frame_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_alias = NULL;
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
                PyErr_Format( PyExc_TypeError, "ensure_defaults() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "ensure_defaults() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_alias == key )
            {
                if (unlikely( _python_par_alias ))
                {
                    PyErr_Format( PyExc_TypeError, "ensure_defaults() got multiple values for keyword argument 'alias'" );
                    goto error_exit;
                }

                _python_par_alias = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "ensure_defaults() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_alias, key ) )
            {
                if (unlikely( _python_par_alias ))
                {
                    PyErr_Format( PyExc_TypeError, "ensure_defaults() got multiple values for keyword argument 'alias'" );
                    goto error_exit;
                }

                _python_par_alias = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "ensure_defaults() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "ensure_defaults() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "ensure_defaults() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "ensure_defaults() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "ensure_defaults() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "ensure_defaults() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ensure_defaults() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "ensure_defaults() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ensure_defaults() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "ensure_defaults() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "ensure_defaults() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "ensure_defaults() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "ensure_defaults() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "ensure_defaults() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_alias != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ensure_defaults() got multiple values for keyword argument 'alias'" );
             goto error_exit;
         }

        _python_par_alias = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils( self, _python_par_self, _python_par_alias );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_alias );

    return NULL;
}

static PyObject *dparse_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_alias )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_alias( _python_str_plain_alias, _python_par_alias );
    PyObjectLocalVariable _python_var_db( _python_str_plain_db );
    PyObjectLocalVariable _python_var_backend( _python_str_plain_backend );
    PyObjectLocalVariable _python_var_conn( _python_str_plain_conn );

    // Actual function code.
    static PyFrameObject *frame_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils ) )
    {
        if ( frame_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils );
        }

        frame_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils = MAKE_FRAME( _codeobj_4e250e8a161b371c42ef91e89b8feb91, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 192 );
        {
            PyObjectTempKeeper1 hasattr4;
            if ( ( hasattr4.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__connections ) ), HAS_ATTRIBUTE( hasattr4.asObject0(), _python_var_alias.asObject() ) ) )
        {
            frame_guard.setLineNumber( 193 );
            {
                PyObjectTempKeeper1 getattr1;
                return ( getattr1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__connections ) ), BUILTIN_GETATTR( getattr1.asObject0(), _python_var_alias.asObject(), NULL ) );
            }
        }
        }
        frame_guard.setLineNumber( 195 );
        {
            PyObjectTempKeeper1 call6;
            DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_ensure_defaults ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_alias.asObject() ) ) );
        }
        frame_guard.setLineNumber( 196 );
        {
            PyObjectTempKeeper1 subscr8;
            _python_var_db.assign1( ( subscr8.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_databases ) ), LOOKUP_SUBSCRIPT( subscr8.asObject0(), _python_var_alias.asObject() ) ) );
        }
        frame_guard.setLineNumber( 197 );
        {
            PyObjectTempKeeper0 call10;
            _python_var_backend.assign1( ( call10.assign( _mvar_django__db__utils_load_backend.asObject0() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_db.asObject(), _python_str_plain_ENGINE ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 198 );
        {
            PyObjectTempKeeper1 call12;
            PyObjectTempKeeper0 call13;
            _python_var_conn.assign1( ( call12.assign( LOOKUP_ATTRIBUTE( _python_var_backend.asObject(), _python_str_plain_DatabaseWrapper ) ), call13.assign( _python_var_db.asObject() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), call13.asObject0(), _python_var_alias.asObject() ) ) );
        }
        frame_guard.setLineNumber( 199 );
        {
            PyObjectTempKeeper1 setattr15;
            PyObjectTempKeeper0 setattr16;
            ( ( setattr15.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__connections ) ), setattr16.assign( _python_var_alias.asObject() ), BUILTIN_SETATTR( setattr15.asObject0(), setattr16.asObject0(), _python_var_conn.asObject() ) ), Py_None );
        }
        frame_guard.setLineNumber( 200 );
        return _python_var_conn.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_alias.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_conn.updateLocalsDict( _python_var_backend.updateLocalsDict( _python_var_db.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils );
           frame_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_alias = NULL;
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
                PyErr_Format( PyExc_TypeError, "__getitem__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__getitem__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_alias == key )
            {
                if (unlikely( _python_par_alias ))
                {
                    PyErr_Format( PyExc_TypeError, "__getitem__() got multiple values for keyword argument 'alias'" );
                    goto error_exit;
                }

                _python_par_alias = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__getitem__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_alias, key ) )
            {
                if (unlikely( _python_par_alias ))
                {
                    PyErr_Format( PyExc_TypeError, "__getitem__() got multiple values for keyword argument 'alias'" );
                    goto error_exit;
                }

                _python_par_alias = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__getitem__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__getitem__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getitem__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__getitem__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getitem__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__getitem__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__getitem__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_alias != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__getitem__() got multiple values for keyword argument 'alias'" );
             goto error_exit;
         }

        _python_par_alias = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils( self, _python_par_self, _python_par_alias );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_alias );

    return NULL;
}

static PyObject *dparse_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils ) )
    {
        if ( frame_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils );
        }

        frame_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils = MAKE_FRAME( _codeobj_941140e84caad39031e9e4f00e8225eb, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 203 );
        {
            PyObjectTempKeeper1 setattr1;
            PyObjectTempKeeper0 setattr2;
            ( ( setattr1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__connections ) ), setattr2.assign( _python_var_key.asObject() ), BUILTIN_SETATTR( setattr1.asObject0(), setattr2.asObject0(), _python_var_value.asObject() ) ), Py_None );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils );
           frame_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_key = NULL;
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
                PyErr_Format( PyExc_TypeError, "__setitem__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'value'" );
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
                   "__setitem__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__setitem__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils( self, _python_par_self, _python_par_key, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );

    // Actual function code.
    static PyFrameObject *frame_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils ) )
    {
        if ( frame_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils );
        }

        frame_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils = MAKE_FRAME( _codeobj_365f3f04c239680301910c7ad89f2aaf, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 206 );
        {
            PyObjectTempKeeper1 call2;
            DECREASE_REFCOUNT( ( call2.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__connections ) ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_delattr ), call2.asObject0(), _python_var_key.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils );
           frame_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_key = NULL;
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
                PyErr_Format( PyExc_TypeError, "__delitem__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__delitem__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "__delitem__() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__delitem__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "__delitem__() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__delitem__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__delitem__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__delitem__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__delitem__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__delitem__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__delitem__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__delitem__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__delitem__() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils( self, _python_par_self, _python_par_key );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );

    return NULL;
}

static PyObject *dparse_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils ) )
    {
        if ( frame_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils );
        }

        frame_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils = MAKE_FRAME( _codeobj_ebe9fe91fd0b02d679957eef91f07e87, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 209 );
        return MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_databases ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils );
           frame_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__iter__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                   "__iter__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__iter__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_alias( _python_str_plain_alias );

    // Actual function code.
    static PyFrameObject *frame_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils ) )
    {
        if ( frame_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils );
        }

        frame_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils = MAKE_FRAME( _codeobj_93e3c60c09a712a6d63d6d29122e4ca6, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 212 );
        return impl_listcontr_1_of_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils( MAKE_ITERATOR( _python_var_self.asObject() ), _python_var_alias, _python_var_self );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_alias.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils );
           frame_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_alias,PyObjectLocalParameterVariableNoDel &python_closure_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 212 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 212 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_alias.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 subscr1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( subscr1.assign( python_closure_self.asObject() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), python_closure_alias.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_class_14_ConnectionRouter_of_module_django__db__utils(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_routers( _python_str_plain_routers );
    PyObjectLocalVariable _python_var__router_func( _python_str_plain__router_func );
    PyObjectLocalVariable _python_var_db_for_read( _python_str_plain_db_for_read );
    PyObjectLocalVariable _python_var_db_for_write( _python_str_plain_db_for_write );
    PyObjectLocalVariable _python_var_allow_relation( _python_str_plain_allow_relation );
    PyObjectLocalVariable _python_var_allow_syncdb( _python_str_plain_allow_syncdb );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_utils );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils(  ) );
    static PyFrameObject *frame_class_14_ConnectionRouter_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_class_14_ConnectionRouter_of_module_django__db__utils ) )
    {
        if ( frame_class_14_ConnectionRouter_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_14_ConnectionRouter_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_class_14_ConnectionRouter_of_module_django__db__utils );
        }

        frame_class_14_ConnectionRouter_of_module_django__db__utils = MAKE_FRAME( _codeobj_0b1ea37a29546b93084957b5bd061fd7, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_class_14_ConnectionRouter_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_class_14_ConnectionRouter_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 222 );
        _python_var_routers.assign1( CALL_FUNCTION_WITH_ARGS( _mvar_django__db__utils_cached_property.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils(  ) ).asObject() ) );
        _python_var__router_func.assign1( MAKE_FUNCTION_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils(  ) );
        frame_guard.setLineNumber( 254 );
        _python_var_db_for_read.assign1( CALL_FUNCTION_WITH_ARGS( _python_var__router_func.asObject(), _python_str_plain_db_for_read ) );
        frame_guard.setLineNumber( 255 );
        _python_var_db_for_write.assign1( CALL_FUNCTION_WITH_ARGS( _python_var__router_func.asObject(), _python_str_plain_db_for_write ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_allow_syncdb.updateLocalsDict( _python_var_allow_relation.updateLocalsDict( _python_var_db_for_write.updateLocalsDict( _python_var_db_for_read.updateLocalsDict( _python_var__router_func.updateLocalsDict( _python_var_routers.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_14_ConnectionRouter_of_module_django__db__utils )
        {
           Py_DECREF( frame_class_14_ConnectionRouter_of_module_django__db__utils );
           frame_class_14_ConnectionRouter_of_module_django__db__utils = NULL;
        }

        throw;
    }
    _python_var_allow_relation.assign1( MAKE_FUNCTION_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils(  ) );
    _python_var_allow_syncdb.assign1( MAKE_FUNCTION_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils(  ) );
    return _python_var_allow_syncdb.updateLocalsDict( _python_var_allow_relation.updateLocalsDict( _python_var_db_for_write.updateLocalsDict( _python_var_db_for_read.updateLocalsDict( _python_var__router_func.updateLocalsDict( _python_var_routers.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_routers )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_routers( _python_str_plain_routers, _python_par_routers );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils ) )
    {
        if ( frame_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils );
        }

        frame_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils = MAKE_FRAME( _codeobj_420c6a748b39c5bbea15ce2d725d07bf, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 220 );
        {
                PyObject *tmp_identifier = _python_var_routers.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__routers );
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
        frame_guard.getFrame0()->f_locals = _python_var_routers.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils );
           frame_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_routers = NULL;
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
            if ( found == false && _python_str_plain_routers == key )
            {
                if (unlikely( _python_par_routers ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'routers'" );
                    goto error_exit;
                }

                _python_par_routers = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_routers, key ) )
            {
                if (unlikely( _python_par_routers ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'routers'" );
                    goto error_exit;
                }

                _python_par_routers = value;

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
         if (unlikely( _python_par_routers != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'routers'" );
             goto error_exit;
         }

        _python_par_routers = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_routers == NULL )
    {
        _python_par_routers = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_routers );
    }


    return impl_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils( self, _python_par_self, _python_par_routers );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_routers );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_routers( _python_str_plain_routers );
    PyObjectLocalVariable _python_var_r( _python_str_plain_r );
    PyObjectLocalVariable _python_var_router( _python_str_plain_router );

    // Actual function code.
    static PyFrameObject *frame_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils ) )
    {
        if ( frame_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils );
        }

        frame_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils = MAKE_FRAME( _codeobj_dab71f2574d2e3a7a6c3cb00e138a9a3, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 224 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__routers ) ).asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 225 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _mvar_django__db__utils_settings.asObject0(), _python_str_plain_DATABASE_ROUTERS ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__routers );
            }
        }
        _python_var_routers.assign1( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 227 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__routers ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 227 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_r.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 228 );
                {
                    PyObjectTempKeeper0 isinstance3;
                    if ( ( isinstance3.assign( _python_var_r.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__utils_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 229 );
                    {
                        PyObjectTempKeeper0 call1;
                        _python_var_router.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( ( call1.assign( _mvar_django__db__utils_import_by_path.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_r.asObject() ) ) ).asObject() ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 231 );
                    _python_var_router.assign0( _python_var_r.asObject() );
                }
                }
                frame_guard.setLineNumber( 232 );
                {
                    PyObjectTempKeeper1 call5;
                    DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_routers.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_router.asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 233 );
        return _python_var_routers.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_router.updateLocalsDict( _python_var_r.updateLocalsDict( _python_var_routers.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils );
           frame_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "routers() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "routers() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "routers() got multiple values for keyword argument 'self'" );
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
                   "routers() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "routers() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "routers() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "routers() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "routers() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "routers() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "routers() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "routers() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "routers() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "routers() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "routers() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "routers() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "routers() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "routers() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_action )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_action( _python_str_plain_action, _python_par_action );
    PyObjectLocalVariable _python_var__route_db( _python_str_plain__route_db );

    // Actual function code.
    _python_var__route_db.assign1( MAKE_FUNCTION_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( _python_var_action ) );
    static PyFrameObject *frame_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils ) )
    {
        if ( frame_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils );
        }

        frame_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils = MAKE_FRAME( _codeobj_463e253831301537e591a49dfce9ba26, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 252 );
        return _python_var__route_db.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_action.updateLocalsDict( _python_var__route_db.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils );
           frame_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_action = NULL;
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
                PyErr_Format( PyExc_TypeError, "_router_func() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_action == key )
            {
                if (unlikely( _python_par_action ))
                {
                    PyErr_Format( PyExc_TypeError, "_router_func() got multiple values for keyword argument 'action'" );
                    goto error_exit;
                }

                _python_par_action = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_action, key ) )
            {
                if (unlikely( _python_par_action ))
                {
                    PyErr_Format( PyExc_TypeError, "_router_func() got multiple values for keyword argument 'action'" );
                    goto error_exit;
                }

                _python_par_action = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_router_func() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_router_func() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_router_func() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_router_func() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_router_func() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_router_func() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_router_func() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_router_func() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_router_func() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_router_func() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_router_func() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_router_func() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_router_func() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_action != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_router_func() got multiple values for keyword argument 'action'" );
             goto error_exit;
         }

        _python_par_action = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( self, _python_par_action );

error_exit:;

    Py_XDECREF( _python_par_action );

    return NULL;
}

static PyObject *dparse_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_model, PyObject *_python_par_hints )
{
    // The context of the function.
    struct _context_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils_t *_python_context = (struct _context_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_model( _python_str_plain_model, _python_par_model );
    PyObjectLocalParameterVariableNoDel _python_var_hints( _python_str_plain_hints, _python_par_hints );
    PyObjectLocalVariable _python_var_chosen_db( _python_str_plain_chosen_db );
    PyObjectLocalVariable _python_var_router( _python_str_plain_router );
    PyObjectLocalVariable _python_var_method( _python_str_plain_method );

    // Actual function code.
    _python_var_chosen_db.assign0( Py_None );
    static PyFrameObject *frame_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils ) )
    {
        if ( frame_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils );
        }

        frame_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils = MAKE_FRAME( _codeobj_85ac3fc01965b7203abbc011461306e1, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 238 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_routers ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 238 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_router.assign0( _python_tmp_iter_value.asObject() );
                }
                {
                    PyObject *_python_tmp_unhandled_indicator = Py_True;
                    frame_guard.setLineNumber( 239 );
                    try
                    {
                        frame_guard.setLineNumber( 240 );
                        {
                            PyObjectTempKeeper0 getattr1;
                            _python_var_method.assign1( ( getattr1.assign( _python_var_router.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), _python_context->python_closure_action.asObject(), NULL ) ) );
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
                            frame_guard.detachFrame();
                            _python_tmp_unhandled_indicator = Py_False;
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
                        frame_guard.setLineNumber( 245 );
                        {
                            PyObjectTempKeeper0 call_tmp4;
                            PyObjectTempKeeper1 call_tmp5;
                            _python_var_chosen_db.assign1( ( call_tmp4.assign( _python_var_method.asObject() ), call_tmp5.assign( MAKE_TUPLE1( _python_var_model.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp4.asObject(), call_tmp5.asObject(), _python_var_hints.asObject1() ) ) );
                        }
                        frame_guard.setLineNumber( 246 );
                        if ( CHECK_IF_TRUE( _python_var_chosen_db.asObject() ) )
                        {
                            frame_guard.setLineNumber( 247 );
                            return _python_var_chosen_db.asObject1();
                        }
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 248 );
        try
        {
            frame_guard.setLineNumber( 249 );
            {
                PyObjectTempKeeper1 keeper_0;
                return INCREASE_REFCOUNT( ( CHECK_IF_TRUE( keeper_0.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_hints.asObject(), _python_str_plain_instance ) ).asObject(), _python_str_plain__state ) ).asObject(), _python_str_plain_db ) ) ) ? PyObjectTemporary( keeper_0.asObject() ).asObject() : _mvar_django__db__utils_DEFAULT_DB_ALIAS.asObject0() ) );
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
                frame_guard.setLineNumber( 251 );
                return _mvar_django__db__utils_DEFAULT_DB_ALIAS.asObject();
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
        frame_guard.getFrame0()->f_locals = _python_var_hints.updateLocalsDict( _python_var_model.updateLocalsDict( _python_var_self.updateLocalsDict( _python_context->python_closure_action.updateLocalsDict( _python_var_method.updateLocalsDict( _python_var_router.updateLocalsDict( _python_var_chosen_db.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils );
           frame_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_model = NULL;
    PyObject *_python_par_hints = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_hints = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_hints = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "_route_db() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_hints, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "_route_db() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_hints = (PyObject *)split_copy;
        }
        else
        {
            _python_par_hints = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "_route_db() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_hints, entry->me_key, value );

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
            _python_par_hints = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_hints, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_hints, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument model was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_hints, _python_str_plain_model );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_model == NULL );

            _python_par_model = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_hints, _python_str_plain_model );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_route_db() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_route_db() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_route_db() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_route_db() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_route_db() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_route_db() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_route_db() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_route_db() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_route_db() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_route_db() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_route_db() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_route_db() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_route_db() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_model != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_route_db() got multiple values for keyword argument 'model'" );
             goto error_exit;
         }

        _python_par_model = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( self, _python_par_self, _python_par_model, _python_par_hints );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_model );
    Py_XDECREF( _python_par_hints );

    return NULL;
}

static PyObject *dparse_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_obj1, PyObject *_python_par_obj2, PyObject *_python_par_hints )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_obj1( _python_str_plain_obj1, _python_par_obj1 );
    PyObjectLocalParameterVariableNoDel _python_var_obj2( _python_str_plain_obj2, _python_par_obj2 );
    PyObjectLocalParameterVariableNoDel _python_var_hints( _python_str_plain_hints, _python_par_hints );
    PyObjectLocalVariable _python_var_router( _python_str_plain_router );
    PyObjectLocalVariable _python_var_method( _python_str_plain_method );
    PyObjectLocalVariable _python_var_allow( _python_str_plain_allow );

    // Actual function code.
    static PyFrameObject *frame_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils ) )
    {
        if ( frame_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils );
        }

        frame_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils = MAKE_FRAME( _codeobj_cc4f6cbdb2a2ddf0f691172a23569f81, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 258 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_routers ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 258 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_router.assign0( _python_tmp_iter_value.asObject() );
                }
                {
                    PyObject *_python_tmp_unhandled_indicator = Py_True;
                    frame_guard.setLineNumber( 259 );
                    try
                    {
                        frame_guard.setLineNumber( 260 );
                        _python_var_method.assign1( LOOKUP_ATTRIBUTE( _python_var_router.asObject(), _python_str_plain_allow_relation ) );
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
                            _python_tmp_unhandled_indicator = Py_False;
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
                        frame_guard.setLineNumber( 265 );
                        {
                            PyObjectTempKeeper0 call_tmp3;
                            PyObjectTempKeeper1 call_tmp4;
                            PyObjectTempKeeper0 make_tuple1;
                            _python_var_allow.assign1( ( call_tmp3.assign( _python_var_method.asObject() ), call_tmp4.assign( ( make_tuple1.assign( _python_var_obj1.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), _python_var_obj2.asObject() ) ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), _python_var_hints.asObject1() ) ) );
                        }
                        frame_guard.setLineNumber( 266 );
                        if ( ( _python_var_allow.asObject() != Py_None ) )
                        {
                            frame_guard.setLineNumber( 267 );
                            return _python_var_allow.asObject1();
                        }
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 268 );
        {
            PyObjectTempKeeper1 cmp6;
            return ( cmp6.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_obj1.asObject(), _python_str_plain__state ) ).asObject(), _python_str_plain_db ) ), RICH_COMPARE_EQ( cmp6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_obj2.asObject(), _python_str_plain__state ) ).asObject(), _python_str_plain_db ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_hints.updateLocalsDict( _python_var_obj2.updateLocalsDict( _python_var_obj1.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_allow.updateLocalsDict( _python_var_method.updateLocalsDict( _python_var_router.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils );
           frame_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_obj1 = NULL;
    PyObject *_python_par_obj2 = NULL;
    PyObject *_python_par_hints = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_hints = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_hints = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "allow_relation() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_hints, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "allow_relation() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_hints = (PyObject *)split_copy;
        }
        else
        {
            _python_par_hints = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "allow_relation() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_hints, entry->me_key, value );

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
            _python_par_hints = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_hints, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_hints, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument obj1 was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_hints, _python_str_plain_obj1 );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_obj1 == NULL );

            _python_par_obj1 = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_hints, _python_str_plain_obj1 );

            kw_found += 1;
        }
    }

    // Check if argument obj2 was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_hints, _python_str_plain_obj2 );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_obj2 == NULL );

            _python_par_obj2 = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_hints, _python_str_plain_obj2 );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "allow_relation() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "allow_relation() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "allow_relation() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "allow_relation() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "allow_relation() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "allow_relation() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "allow_relation() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "allow_relation() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "allow_relation() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "allow_relation() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "allow_relation() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "allow_relation() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "allow_relation() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_obj1 != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "allow_relation() got multiple values for keyword argument 'obj1'" );
             goto error_exit;
         }

        _python_par_obj1 = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_obj2 != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "allow_relation() got multiple values for keyword argument 'obj2'" );
             goto error_exit;
         }

        _python_par_obj2 = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils( self, _python_par_self, _python_par_obj1, _python_par_obj2, _python_par_hints );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_obj1 );
    Py_XDECREF( _python_par_obj2 );
    Py_XDECREF( _python_par_hints );

    return NULL;
}

static PyObject *dparse_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_db, PyObject *_python_par_model )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_db( _python_str_plain_db, _python_par_db );
    PyObjectLocalParameterVariableNoDel _python_var_model( _python_str_plain_model, _python_par_model );
    PyObjectLocalVariable _python_var_router( _python_str_plain_router );
    PyObjectLocalVariable _python_var_method( _python_str_plain_method );
    PyObjectLocalVariable _python_var_allow( _python_str_plain_allow );

    // Actual function code.
    static PyFrameObject *frame_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils = NULL;

    if ( isFrameUnusable( frame_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils ) )
    {
        if ( frame_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils" );
#endif
            Py_DECREF( frame_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils );
        }

        frame_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils = MAKE_FRAME( _codeobj_9b33fc873121aa1a25b4bae00183afe6, _module_django__db__utils );
    }

    FrameGuard frame_guard( frame_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 271 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_routers ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 271 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_router.assign0( _python_tmp_iter_value.asObject() );
                }
                {
                    PyObject *_python_tmp_unhandled_indicator = Py_True;
                    frame_guard.setLineNumber( 272 );
                    try
                    {
                        frame_guard.setLineNumber( 273 );
                        _python_var_method.assign1( LOOKUP_ATTRIBUTE( _python_var_router.asObject(), _python_str_plain_allow_syncdb ) );
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
                            _python_tmp_unhandled_indicator = Py_False;
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
                        frame_guard.setLineNumber( 278 );
                        {
                            PyObjectTempKeeper0 call1;
                            PyObjectTempKeeper0 call2;
                            _python_var_allow.assign1( ( call1.assign( _python_var_method.asObject() ), call2.assign( _python_var_db.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_model.asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 279 );
                        if ( ( _python_var_allow.asObject() != Py_None ) )
                        {
                            frame_guard.setLineNumber( 280 );
                            return _python_var_allow.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_model.updateLocalsDict( _python_var_db.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_allow.updateLocalsDict( _python_var_method.updateLocalsDict( _python_var_router.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils )
        {
           Py_DECREF( frame_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils );
           frame_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_True );
}
static PyObject *fparse_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_db = NULL;
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
                PyErr_Format( PyExc_TypeError, "allow_syncdb() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "allow_syncdb() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "allow_syncdb() got multiple values for keyword argument 'db'" );
                    goto error_exit;
                }

                _python_par_db = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_model == key )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "allow_syncdb() got multiple values for keyword argument 'model'" );
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
                    PyErr_Format( PyExc_TypeError, "allow_syncdb() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "allow_syncdb() got multiple values for keyword argument 'db'" );
                    goto error_exit;
                }

                _python_par_db = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_model, key ) )
            {
                if (unlikely( _python_par_model ))
                {
                    PyErr_Format( PyExc_TypeError, "allow_syncdb() got multiple values for keyword argument 'model'" );
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
                   "allow_syncdb() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "allow_syncdb() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "allow_syncdb() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "allow_syncdb() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "allow_syncdb() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "allow_syncdb() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "allow_syncdb() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "allow_syncdb() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "allow_syncdb() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "allow_syncdb() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "allow_syncdb() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "allow_syncdb() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "allow_syncdb() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "allow_syncdb() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_db != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "allow_syncdb() got multiple values for keyword argument 'db'" );
             goto error_exit;
         }

        _python_par_db = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_model != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "allow_syncdb() got multiple values for keyword argument 'model'" );
             goto error_exit;
         }

        _python_par_model = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils( self, _python_par_self, _python_par_db, _python_par_model );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_db );
    Py_XDECREF( _python_par_model );

    return NULL;
}

static PyObject *dparse_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_11_load_backend_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_load_backend_of_module_django__db__utils,
        dparse_function_11_load_backend_of_module_django__db__utils,
        _python_str_plain_load_backend,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2077161bfc558f5d13a4917d7b415907,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils,
        dparse_function_1___init___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fa36ae136fd25225b4d59949ace54867,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        _python_str_digest_a55f75b7505e4b81a76d55ad69e53343
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils,
        dparse_function_1___init___of_class_13_ConnectionHandler_of_module_django__db__utils,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_89875690e75a57b2945eb458f3b05f0d,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        _python_str_digest_f24bda81398eb53dfb69ef82c8d3d8f2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils,
        dparse_function_1___init___of_class_14_ConnectionRouter_of_module_django__db__utils,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_420c6a748b39c5bbea15ce2d725d07bf,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        _python_str_digest_ec23f161ebf71c265060cd9f496481a5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils( PyObjectSharedLocalVariable &python_closure_action )
{
    struct _context_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils_t *_python_context = new _context_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_action.shareWith( python_closure_action );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils,
        dparse_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils,
        _python_str_plain__route_db,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_85ac3fc01965b7203abbc011461306e1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None,
        _python_context,
        _context_function_1__route_db_of_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils( PyObjectSharedLocalVariable &python_closure_func, PyObjectSharedLocalVariable &python_closure_self )
{
    struct _context_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils_t *_python_context = new _context_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_func.shareWith( python_closure_func );
    _python_context->python_closure_self.shareWith( python_closure_self );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils,
        dparse_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils,
        _python_str_plain_inner,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d7b683a375e67f6e321ae8e721abd668,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None,
        _python_context,
        _context_function_1_inner_of_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___enter___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___enter___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils,
        dparse_function_2___enter___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils,
        _python_str_plain___enter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_84401ddc9789ad640390ebdb5fbbd52a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils,
        dparse_function_2_databases_of_class_13_ConnectionHandler_of_module_django__db__utils,
        _python_str_plain_databases,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1b6a21bb350badc3d888be8894e0ac0b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils,
        dparse_function_2_routers_of_class_14_ConnectionRouter_of_module_django__db__utils,
        _python_str_plain_routers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_dab71f2574d2e3a7a6c3cb00e138a9a3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils,
        dparse_function_3___exit___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils,
        _python_str_plain___exit__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3a84e2e4d4076ba956e8079db505b0c8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils,
        dparse_function_3__router_func_of_class_14_ConnectionRouter_of_module_django__db__utils,
        _python_str_plain__router_func,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_463e253831301537e591a49dfce9ba26,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils,
        dparse_function_3_ensure_defaults_of_class_13_ConnectionHandler_of_module_django__db__utils,
        _python_str_plain_ensure_defaults,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2259aacc8c575ad118c0f75e8e6a2cb1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        _python_str_digest_05db583cd70c2dca8a4b2c3ab2473b4d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils,
        dparse_function_4___call___of_class_10_DatabaseErrorWrapper_of_module_django__db__utils,
        _python_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_91a28efea428a18e0dc80fa02e2a1faf,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils,
        dparse_function_4___getitem___of_class_13_ConnectionHandler_of_module_django__db__utils,
        _python_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4e250e8a161b371c42ef91e89b8feb91,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils,
        dparse_function_4_allow_relation_of_class_14_ConnectionRouter_of_module_django__db__utils,
        _python_str_plain_allow_relation,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cc4f6cbdb2a2ddf0f691172a23569f81,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils,
        dparse_function_5___setitem___of_class_13_ConnectionHandler_of_module_django__db__utils,
        _python_str_plain___setitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_941140e84caad39031e9e4f00e8225eb,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils,
        dparse_function_5_allow_syncdb_of_class_14_ConnectionRouter_of_module_django__db__utils,
        _python_str_plain_allow_syncdb,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9b33fc873121aa1a25b4bae00183afe6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils,
        dparse_function_6___delitem___of_class_13_ConnectionHandler_of_module_django__db__utils,
        _python_str_plain___delitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_365f3f04c239680301910c7ad89f2aaf,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils,
        dparse_function_7___iter___of_class_13_ConnectionHandler_of_module_django__db__utils,
        _python_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ebe9fe91fd0b02d679957eef91f07e87,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils,
        dparse_function_8_all_of_class_13_ConnectionHandler_of_module_django__db__utils,
        _python_str_plain_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_93e3c60c09a712a6d63d6d29122e4ca6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__utils,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db.utils",   /* m_name */
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

MOD_INIT_DECL( django__db__utils )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db__utils );
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

    // puts( "in initdjango__db__utils" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db__utils = Py_InitModule4(
        "django.db.utils",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db__utils = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db__utils = (PyDictObject *)((PyModuleObject *)_module_django__db__utils)->md_dict;

    assertObject( _module_django__db__utils );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_3d07a776757bf1a03cf12370baf54363, _module_django__db__utils );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db__utils );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db__utils != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_5c49b9338ee02d5f3dd12e4161857a66 );
    PyFrameObject *frame_module_django__db__utils = MAKE_FRAME( _codeobj_7c4b1ca1b1ce9239c8737eb2873f62a8, _module_django__db__utils );

    FrameGuard frame_guard( frame_module_django__db__utils );
    try
    {
        assert( Py_REFCNT( frame_module_django__db__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_wraps, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_functools, ((PyModuleObject *)_module_django__db__utils)->md_dict, ((PyModuleObject *)_module_django__db__utils)->md_dict, _python_list_str_plain_wraps_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_wraps ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__db__utils)->md_dict, ((PyModuleObject *)_module_django__db__utils)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_pkgutil, IMPORT_MODULE( _python_str_plain_pkgutil, ((PyModuleObject *)_module_django__db__utils)->md_dict, ((PyModuleObject *)_module_django__db__utils)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_local, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_threading, ((PyModuleObject *)_module_django__db__utils)->md_dict, ((PyModuleObject *)_module_django__db__utils)->md_dict, _python_list_str_plain_local_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_local ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_warnings, IMPORT_MODULE( _python_str_plain_warnings, ((PyModuleObject *)_module_django__db__utils)->md_dict, ((PyModuleObject *)_module_django__db__utils)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__db__utils)->md_dict, ((PyModuleObject *)_module_django__db__utils)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_ImproperlyConfigured, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__db__utils)->md_dict, ((PyModuleObject *)_module_django__db__utils)->md_dict, _python_list_str_plain_ImproperlyConfigured_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImproperlyConfigured ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_cached_property, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__db__utils)->md_dict, ((PyModuleObject *)_module_django__db__utils)->md_dict, _python_list_str_plain_cached_property_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_cached_property ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_import_module, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_4fc502edf9b4c184659c220d993c01d3, ((PyModuleObject *)_module_django__db__utils)->md_dict, ((PyModuleObject *)_module_django__db__utils)->md_dict, _python_list_str_plain_import_module_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_module ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_import_by_path, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_03bb9f131d782ff4dbd31e0966379285, ((PyModuleObject *)_module_django__db__utils)->md_dict, ((PyModuleObject *)_module_django__db__utils)->md_dict, _python_list_str_plain_import_by_path_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_by_path ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_upath, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_88846ba615a71fb6c28246da44176ee3, ((PyModuleObject *)_module_django__db__utils)->md_dict, ((PyModuleObject *)_module_django__db__utils)->md_dict, _python_list_str_plain_upath_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_upath ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__db__utils)->md_dict, ((PyModuleObject *)_module_django__db__utils)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_DEFAULT_DB_ALIAS, _python_str_plain_default );
        {
            frame_guard.setLineNumber( 19 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__utils_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) ? PyExc_Exception : PyExc_StandardError ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_Error_of_module_django__db__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__utils___metaclass__.isInitialized( false ) ? _mvar_django__db__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_Error, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_Error, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 23 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__utils_Error.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_InterfaceError_of_module_django__db__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__utils___metaclass__.isInitialized( false ) ? _mvar_django__db__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_InterfaceError, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_InterfaceError, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 27 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__utils_Error.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_DatabaseError_of_module_django__db__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__utils___metaclass__.isInitialized( false ) ? _mvar_django__db__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_DatabaseError, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_DatabaseError, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 31 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__utils_DatabaseError.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_DataError_of_module_django__db__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__utils___metaclass__.isInitialized( false ) ? _mvar_django__db__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call15;
                _tmp_python_tmp_class = ( call13.assign( _python_tmp_metaclass.asObject() ), call15.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_str_plain_DataError, call15.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_DataError, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 35 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__utils_DatabaseError.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_5_OperationalError_of_module_django__db__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__utils___metaclass__.isInitialized( false ) ? _mvar_django__db__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call17;
                PyObjectTempKeeper0 call19;
                _tmp_python_tmp_class = ( call17.assign( _python_tmp_metaclass.asObject() ), call19.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_str_plain_OperationalError, call19.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_OperationalError, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 39 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__utils_DatabaseError.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_6_IntegrityError_of_module_django__db__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__utils___metaclass__.isInitialized( false ) ? _mvar_django__db__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call21;
                PyObjectTempKeeper0 call23;
                _tmp_python_tmp_class = ( call21.assign( _python_tmp_metaclass.asObject() ), call23.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), _python_str_plain_IntegrityError, call23.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_IntegrityError, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 43 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__utils_DatabaseError.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_7_InternalError_of_module_django__db__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__utils___metaclass__.isInitialized( false ) ? _mvar_django__db__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call25;
                PyObjectTempKeeper0 call27;
                _tmp_python_tmp_class = ( call25.assign( _python_tmp_metaclass.asObject() ), call27.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), _python_str_plain_InternalError, call27.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_InternalError, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 47 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__utils_DatabaseError.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_8_ProgrammingError_of_module_django__db__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__utils___metaclass__.isInitialized( false ) ? _mvar_django__db__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call29;
                PyObjectTempKeeper0 call31;
                _tmp_python_tmp_class = ( call29.assign( _python_tmp_metaclass.asObject() ), call31.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), _python_str_plain_ProgrammingError, call31.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_ProgrammingError, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 51 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__utils_DatabaseError.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_9_NotSupportedError_of_module_django__db__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__utils___metaclass__.isInitialized( false ) ? _mvar_django__db__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call33;
                PyObjectTempKeeper0 call35;
                _tmp_python_tmp_class = ( call33.assign( _python_tmp_metaclass.asObject() ), call35.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call33.asObject0(), _python_str_plain_NotSupportedError, call35.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_NotSupportedError, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 55 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_10_DatabaseErrorWrapper_of_module_django__db__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__utils___metaclass__.isInitialized( false ) ? _mvar_django__db__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call37;
                PyObjectTempKeeper0 call39;
                _tmp_python_tmp_class = ( call37.assign( _python_tmp_metaclass.asObject() ), call39.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call37.asObject0(), _python_str_plain_DatabaseErrorWrapper, call39.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_DatabaseErrorWrapper, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_load_backend, MAKE_FUNCTION_function_11_load_backend_of_module_django__db__utils(  ) );
        {
            frame_guard.setLineNumber( 136 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyExc_Exception ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_12_ConnectionDoesNotExist_of_module_django__db__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__utils___metaclass__.isInitialized( false ) ? _mvar_django__db__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call41;
                PyObjectTempKeeper0 call43;
                _tmp_python_tmp_class = ( call41.assign( _python_tmp_metaclass.asObject() ), call43.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call41.asObject0(), _python_str_plain_ConnectionDoesNotExist, call43.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_ConnectionDoesNotExist, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 140 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_13_ConnectionHandler_of_module_django__db__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__utils___metaclass__.isInitialized( false ) ? _mvar_django__db__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call45;
                PyObjectTempKeeper0 call47;
                _tmp_python_tmp_class = ( call45.assign( _python_tmp_metaclass.asObject() ), call47.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call45.asObject0(), _python_str_plain_ConnectionHandler, call47.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_ConnectionHandler, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 215 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_14_ConnectionRouter_of_module_django__db__utils(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__utils___metaclass__.isInitialized( false ) ? _mvar_django__db__utils___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call49;
                PyObjectTempKeeper0 call51;
                _tmp_python_tmp_class = ( call49.assign( _python_tmp_metaclass.asObject() ), call51.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call49.asObject0(), _python_str_plain_ConnectionRouter, call51.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__utils, (Nuitka_StringObject *)_python_str_plain_ConnectionRouter, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db__utils)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__db__utils );
}
