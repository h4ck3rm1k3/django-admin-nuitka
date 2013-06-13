// Generated code for Python source for module 'django.utils.deprecation'
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

// The _module_django__utils__deprecation is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__deprecation;
PyDictObject *_moduledict_django__utils__deprecation;

// The module level variables.
static PyObjectGlobalVariable_django__utils__deprecation _mvar_django__utils__deprecation_RenameMethodsBase( &_module_django__utils__deprecation, &_python_str_plain_RenameMethodsBase );
static PyObjectGlobalVariable_django__utils__deprecation _mvar_django__utils__deprecation___metaclass__( &_module_django__utils__deprecation, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__deprecation _mvar_django__utils__deprecation_inspect( &_module_django__utils__deprecation, &_python_str_plain_inspect );
static PyObjectGlobalVariable_django__utils__deprecation _mvar_django__utils__deprecation_warn_about_renamed_method( &_module_django__utils__deprecation, &_python_str_plain_warn_about_renamed_method );
static PyObjectGlobalVariable_django__utils__deprecation _mvar_django__utils__deprecation_warnings( &_module_django__utils__deprecation, &_python_str_plain_warnings );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_warn_about_renamed_method_of_module_django__utils__deprecation(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_RenameMethodsBase_of_module_django__utils__deprecation(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation(  );


static PyObject *MAKE_FUNCTION_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation(  );


static PyObject *MAKE_FUNCTION_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( PyObjectSharedLocalVariable &python_closure_f, PyObjectSharedLocalVariable &python_closure_self );


// This structure is for attachment as self of function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation.
// It is allocated at the time the function object is created.
struct _context_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_f;
    PyObjectClosureVariable python_closure_self;
};

static void _context_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation_destructor( void *context_voidptr )
{
    _context_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation_t *_python_context = (_context_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_warn_about_renamed_method_of_module_django__utils__deprecation(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___call__( _python_str_plain___call__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_deprecation );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation(  ) );
    _python_var___call__.assign1( MAKE_FUNCTION_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation(  ) );
    return _python_var___call__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_class_name, PyObject *_python_par_old_method_name, PyObject *_python_par_new_method_name, PyObject *_python_par_deprecation_warning )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_class_name( _python_str_plain_class_name, _python_par_class_name );
    PyObjectLocalParameterVariableNoDel _python_var_old_method_name( _python_str_plain_old_method_name, _python_par_old_method_name );
    PyObjectLocalParameterVariableNoDel _python_var_new_method_name( _python_str_plain_new_method_name, _python_par_new_method_name );
    PyObjectLocalParameterVariableNoDel _python_var_deprecation_warning( _python_str_plain_deprecation_warning, _python_par_deprecation_warning );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation ) )
    {
        if ( frame_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation );
        }

        frame_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation = MAKE_FRAME( _codeobj_e5f08746804febc098766e70ac091275, _module_django__utils__deprecation );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 7 );
        {
                PyObject *tmp_identifier = _python_var_class_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_class_name );
        }
        frame_guard.setLineNumber( 8 );
        {
                PyObject *tmp_identifier = _python_var_old_method_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_old_method_name );
        }
        frame_guard.setLineNumber( 9 );
        {
                PyObject *tmp_identifier = _python_var_new_method_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_new_method_name );
        }
        frame_guard.setLineNumber( 10 );
        {
                PyObject *tmp_identifier = _python_var_deprecation_warning.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_deprecation_warning );
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
        frame_guard.getFrame0()->f_locals = _python_var_deprecation_warning.updateLocalsDict( _python_var_new_method_name.updateLocalsDict( _python_var_old_method_name.updateLocalsDict( _python_var_class_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation )
        {
           Py_DECREF( frame_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation );
           frame_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_class_name = NULL;
    PyObject *_python_par_old_method_name = NULL;
    PyObject *_python_par_new_method_name = NULL;
    PyObject *_python_par_deprecation_warning = NULL;
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
            if ( found == false && _python_str_plain_class_name == key )
            {
                if (unlikely( _python_par_class_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'class_name'" );
                    goto error_exit;
                }

                _python_par_class_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_old_method_name == key )
            {
                if (unlikely( _python_par_old_method_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'old_method_name'" );
                    goto error_exit;
                }

                _python_par_old_method_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_new_method_name == key )
            {
                if (unlikely( _python_par_new_method_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'new_method_name'" );
                    goto error_exit;
                }

                _python_par_new_method_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_deprecation_warning == key )
            {
                if (unlikely( _python_par_deprecation_warning ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'deprecation_warning'" );
                    goto error_exit;
                }

                _python_par_deprecation_warning = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_class_name, key ) )
            {
                if (unlikely( _python_par_class_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'class_name'" );
                    goto error_exit;
                }

                _python_par_class_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_old_method_name, key ) )
            {
                if (unlikely( _python_par_old_method_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'old_method_name'" );
                    goto error_exit;
                }

                _python_par_old_method_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_new_method_name, key ) )
            {
                if (unlikely( _python_par_new_method_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'new_method_name'" );
                    goto error_exit;
                }

                _python_par_new_method_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_deprecation_warning, key ) )
            {
                if (unlikely( _python_par_deprecation_warning ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'deprecation_warning'" );
                    goto error_exit;
                }

                _python_par_deprecation_warning = value;

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
            if ( 5 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 5 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 5 ))
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
                if ( 5 == 5 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
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
         if (unlikely( _python_par_class_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'class_name'" );
             goto error_exit;
         }

        _python_par_class_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_old_method_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'old_method_name'" );
             goto error_exit;
         }

        _python_par_old_method_name = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_new_method_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'new_method_name'" );
             goto error_exit;
         }

        _python_par_new_method_name = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_deprecation_warning != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'deprecation_warning'" );
             goto error_exit;
         }

        _python_par_deprecation_warning = INCREASE_REFCOUNT( args[ 4 ] );
    }


    return impl_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( self, _python_par_self, _python_par_class_name, _python_par_old_method_name, _python_par_new_method_name, _python_par_deprecation_warning );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_class_name );
    Py_XDECREF( _python_par_old_method_name );
    Py_XDECREF( _python_par_new_method_name );
    Py_XDECREF( _python_par_deprecation_warning );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_f )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectSharedLocalVariable _python_var_f( _python_str_plain_f, _python_par_f );
    PyObjectLocalVariable _python_var_wrapped( _python_str_plain_wrapped );

    // Actual function code.
    _python_var_wrapped.assign1( MAKE_FUNCTION_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( _python_var_f, _python_var_self ) );
    static PyFrameObject *frame_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation = NULL;

    if ( isFrameUnusable( frame_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation ) )
    {
        if ( frame_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation" );
#endif
            Py_DECREF( frame_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation );
        }

        frame_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation = MAKE_FRAME( _codeobj_df271bd3cbcb47c9fde48bd235c675f6, _module_django__utils__deprecation );
    }

    FrameGuard frame_guard( frame_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation );
    try
    {
        assert( Py_REFCNT( frame_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 19 );
        return _python_var_wrapped.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_f.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_wrapped.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation )
        {
           Py_DECREF( frame_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation );
           frame_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_f = NULL;
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
            if ( found == false && _python_str_plain_f == key )
            {
                if (unlikely( _python_par_f ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'f'" );
                    goto error_exit;
                }

                _python_par_f = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_f, key ) )
            {
                if (unlikely( _python_par_f ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'f'" );
                    goto error_exit;
                }

                _python_par_f = value;

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
         if (unlikely( _python_par_f != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'f'" );
             goto error_exit;
         }

        _python_par_f = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( self, _python_par_self, _python_par_f );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_f );

    return NULL;
}

static PyObject *dparse_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( Nuitka_FunctionObject *self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // The context of the function.
    struct _context_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation_t *_python_context = (struct _context_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation = NULL;

    if ( isFrameUnusable( frame_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation ) )
    {
        if ( frame_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation" );
#endif
            Py_DECREF( frame_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation );
        }

        frame_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation = MAKE_FRAME( _codeobj_f8cdf82674ce06cb9cdb79ac66e3c3d2, _module_django__utils__deprecation );
    }

    FrameGuard frame_guard( frame_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation );
    try
    {
        assert( Py_REFCNT( frame_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 14 );
        {
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple2;
            DECREASE_REFCOUNT( ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__deprecation_warnings.asObject0(), _python_str_plain_warn ) ), call5.assign( BINARY_OPERATION_REMAINDER( _python_str_digest_ba0428cae5427aed2ab53aeddc3c7559, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _python_context->python_closure_self.asObject(), _python_str_plain_class_name ) ), make_tuple2.assign( LOOKUP_ATTRIBUTE( _python_context->python_closure_self.asObject(), _python_str_plain_old_method_name ) ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_closure_self.asObject(), _python_str_plain_new_method_name ) ).asObject() ) ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_closure_self.asObject(), _python_str_plain_deprecation_warning ) ).asObject(), _python_int_pos_2 ) ) );
        }
        frame_guard.setLineNumber( 18 );
        {
            PyObjectTempKeeper0 call_tmp8;
            PyObjectTempKeeper0 call_tmp9;
            return ( call_tmp8.assign( _python_context->python_closure_f.asObject() ), call_tmp9.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp8.asObject(), call_tmp9.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_context->python_closure_f.updateLocalsDict( _python_context->python_closure_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation )
        {
           Py_DECREF( frame_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation );
           frame_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                        PyErr_Format( PyExc_TypeError, "wrapped() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "wrapped() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "wrapped() keywords must be strings" );
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
            PyErr_Format( PyExc_TypeError, "wrapped() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "wrapped() takes at least %d non-keyword arguments (%zd given)", 0, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "wrapped() takes at least %d arguments (%zd given)", 0, args_given + kw_found );
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


    return impl_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( self, MAKE_TUPLE( &args[ 0 ], size > 0 ? size-0 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_RenameMethodsBase_of_module_django__utils__deprecation(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_renamed_methods( _python_str_plain_renamed_methods );
    PyObjectLocalVariable _python_var___new__( _python_str_plain___new__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_deprecation );
    _python_var___doc__.assign0( _python_str_digest_cee9970e74f0ef12772efb6d731ef20c );
    _python_var_renamed_methods.assign0( _python_tuple_empty );
    static PyFrameObject *frame_class_2_RenameMethodsBase_of_module_django__utils__deprecation = NULL;

    if ( isFrameUnusable( frame_class_2_RenameMethodsBase_of_module_django__utils__deprecation ) )
    {
        if ( frame_class_2_RenameMethodsBase_of_module_django__utils__deprecation )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_2_RenameMethodsBase_of_module_django__utils__deprecation" );
#endif
            Py_DECREF( frame_class_2_RenameMethodsBase_of_module_django__utils__deprecation );
        }

        frame_class_2_RenameMethodsBase_of_module_django__utils__deprecation = MAKE_FRAME( _codeobj_78678064fccb4ee9f2048f3a3025048f, _module_django__utils__deprecation );
    }

    FrameGuard frame_guard( frame_class_2_RenameMethodsBase_of_module_django__utils__deprecation );
    try
    {
        assert( Py_REFCNT( frame_class_2_RenameMethodsBase_of_module_django__utils__deprecation ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 36 );
        _python_var___new__.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_staticmethod ), PyObjectTemporary( MAKE_FUNCTION_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation(  ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var___new__.updateLocalsDict( _python_var_renamed_methods.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_2_RenameMethodsBase_of_module_django__utils__deprecation )
        {
           Py_DECREF( frame_class_2_RenameMethodsBase_of_module_django__utils__deprecation );
           frame_class_2_RenameMethodsBase_of_module_django__utils__deprecation = NULL;
        }

        throw;
    }
    return _python_var___new__.updateLocalsDict( _python_var_renamed_methods.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation( Nuitka_FunctionObject *self, PyObject *_python_par_cls, PyObject *_python_par_name, PyObject *_python_par_bases, PyObject *_python_par_attrs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_bases( _python_str_plain_bases, _python_par_bases );
    PyObjectLocalParameterVariableNoDel _python_var_attrs( _python_str_plain_attrs, _python_par_attrs );
    PyObjectLocalVariable _python_var_new_class( _python_str_plain_new_class );
    PyObjectLocalVariable _python_var_base( _python_str_plain_base );
    PyObjectLocalVariable _python_var_class_name( _python_str_plain_class_name );
    PyObjectLocalVariable _python_var_renamed_method( _python_str_plain_renamed_method );
    PyObjectLocalVariable _python_var_old_method_name( _python_str_plain_old_method_name );
    PyObjectLocalVariable _python_var_old_method( _python_str_plain_old_method );
    PyObjectLocalVariable _python_var_new_method_name( _python_str_plain_new_method_name );
    PyObjectLocalVariable _python_var_new_method( _python_str_plain_new_method );
    PyObjectLocalVariable _python_var_deprecation_warning( _python_str_plain_deprecation_warning );
    PyObjectLocalVariable _python_var_wrapper( _python_str_plain_wrapper );

    // Actual function code.
    static PyFrameObject *frame_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation = NULL;

    if ( isFrameUnusable( frame_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation ) )
    {
        if ( frame_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation" );
#endif
            Py_DECREF( frame_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation );
        }

        frame_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation = MAKE_FRAME( _codeobj_feea0974c77d57587df2d4eaa08f5f7f, _module_django__utils__deprecation );
    }

    FrameGuard frame_guard( frame_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation );
    try
    {
        assert( Py_REFCNT( frame_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 37 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper0 super1;
            _python_var_new_class.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__utils__deprecation_RenameMethodsBase.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_cls.asObject() ) ) ).asObject(), _python_str_plain___new__ ) ), call4.assign( _python_var_cls.asObject() ), call5.assign( _python_var_name.asObject() ), call6.assign( _python_var_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), call5.asObject0(), call6.asObject0(), _python_var_attrs.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 39 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper1 call8;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call8.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__deprecation_inspect.asObject0(), _python_str_plain_getmro ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_new_class.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 39 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_base.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 40 );
                _python_var_class_name.assign1( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain___name__ ) );
                {
                    frame_guard.setLineNumber( 41 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain_renamed_methods ) ).asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 41 );
                            PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_2 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                            _python_var_renamed_method.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 42 );
                        _python_var_old_method_name.assign1( LOOKUP_SUBSCRIPT_CONST( _python_var_renamed_method.asObject(), _python_int_0, 0 ) );
                        frame_guard.setLineNumber( 43 );
                        {
                            PyObjectTempKeeper1 call10;
                            _python_var_old_method.assign1( ( call10.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain___dict__ ) ).asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_old_method_name.asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 44 );
                        _python_var_new_method_name.assign1( LOOKUP_SUBSCRIPT_CONST( _python_var_renamed_method.asObject(), _python_int_pos_1, 1 ) );
                        frame_guard.setLineNumber( 45 );
                        {
                            PyObjectTempKeeper1 call12;
                            _python_var_new_method.assign1( ( call12.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_base.asObject(), _python_str_plain___dict__ ) ).asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_var_new_method_name.asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 46 );
                        _python_var_deprecation_warning.assign1( LOOKUP_SUBSCRIPT_CONST( _python_var_renamed_method.asObject(), _python_int_pos_2, 2 ) );
                        frame_guard.setLineNumber( 47 );
                        {
                            PyObjectTempKeeper0 call_tmp14;
                            PyObjectTempKeeper1 call_tmp15;
                            _python_var_wrapper.assign1( ( call_tmp14.assign( _mvar_django__utils__deprecation_warn_about_renamed_method.asObject0() ), call_tmp15.assign( MAKE_TUPLE1( _python_var_class_name.asObject() ) ), impl_function_5_complex_call_helper_pos_star_list_of_module___internal__( call_tmp14.asObject(), call_tmp15.asObject(), _python_var_renamed_method.asObject1() ) ) );
                        }
                        frame_guard.setLineNumber( 50 );
                        if ( ( (!( CHECK_IF_TRUE( _python_var_new_method.asObject() ) )) && CHECK_IF_TRUE( _python_var_old_method.asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 51 );
                            {
                                PyObjectTempKeeper1 call20;
                                PyObjectTempKeeper1 call21;
                                PyObjectTempKeeper0 make_tuple17;
                                PyObjectTempKeeper0 make_tuple18;
                                DECREASE_REFCOUNT( ( call20.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__deprecation_warnings.asObject0(), _python_str_plain_warn ) ), call21.assign( BINARY_OPERATION_REMAINDER( _python_str_digest_26dea05f8998c3fb3a5c0a290fd40d4a, PyObjectTemporary( ( make_tuple17.assign( _python_var_class_name.asObject() ), make_tuple18.assign( _python_var_old_method_name.asObject() ), MAKE_TUPLE3( make_tuple17.asObject0(), make_tuple18.asObject0(), _python_var_new_method_name.asObject() ) ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), call21.asObject0(), _python_var_deprecation_warning.asObject(), _python_int_pos_2 ) ) );
                            }
                            frame_guard.setLineNumber( 55 );
                            {
                                PyObjectTempKeeper0 setattr24;
                                PyObjectTempKeeper0 setattr25;
                                ( ( setattr24.assign( _python_var_base.asObject() ), setattr25.assign( _python_var_new_method_name.asObject() ), BUILTIN_SETATTR( setattr24.asObject0(), setattr25.asObject0(), _python_var_old_method.asObject() ) ), Py_None );
                            }
                            frame_guard.setLineNumber( 56 );
                            {
                                PyObjectTempKeeper0 call27;
                                PyObjectTempKeeper0 setattr29;
                                PyObjectTempKeeper0 setattr30;
                                ( ( setattr29.assign( _python_var_base.asObject() ), setattr30.assign( _python_var_old_method_name.asObject() ), BUILTIN_SETATTR( setattr29.asObject0(), setattr30.asObject0(), PyObjectTemporary( ( call27.assign( _python_var_wrapper.asObject() ), CALL_FUNCTION_WITH_ARGS( call27.asObject0(), _python_var_old_method.asObject() ) ) ).asObject() ) ), Py_None );
                            }
                        }
                        frame_guard.setLineNumber( 59 );
                        if ( ( (!( CHECK_IF_TRUE( _python_var_old_method.asObject() ) )) && CHECK_IF_TRUE( _python_var_new_method.asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 60 );
                            {
                                PyObjectTempKeeper0 call32;
                                PyObjectTempKeeper0 setattr34;
                                PyObjectTempKeeper0 setattr35;
                                ( ( setattr34.assign( _python_var_base.asObject() ), setattr35.assign( _python_var_old_method_name.asObject() ), BUILTIN_SETATTR( setattr34.asObject0(), setattr35.asObject0(), PyObjectTemporary( ( call32.assign( _python_var_wrapper.asObject() ), CALL_FUNCTION_WITH_ARGS( call32.asObject0(), _python_var_new_method.asObject() ) ) ).asObject() ) ), Py_None );
                            }
                        }

                       CONSIDER_THREADING();
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 62 );
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
        frame_guard.getFrame0()->f_locals = _python_var_attrs.updateLocalsDict( _python_var_bases.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_wrapper.updateLocalsDict( _python_var_deprecation_warning.updateLocalsDict( _python_var_new_method.updateLocalsDict( _python_var_new_method_name.updateLocalsDict( _python_var_old_method.updateLocalsDict( _python_var_old_method_name.updateLocalsDict( _python_var_renamed_method.updateLocalsDict( _python_var_class_name.updateLocalsDict( _python_var_base.updateLocalsDict( _python_var_new_class.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation )
        {
           Py_DECREF( frame_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation );
           frame_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation( self, _python_par_cls, _python_par_name, _python_par_bases, _python_par_attrs );

error_exit:;

    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_bases );
    Py_XDECREF( _python_par_attrs );

    return NULL;
}

static PyObject *dparse_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation,
        dparse_function_1___init___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e5f08746804febc098766e70ac091275,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__deprecation,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation,
        dparse_function_1___new___of_class_2_RenameMethodsBase_of_module_django__utils__deprecation,
        _python_str_plain___new__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_feea0974c77d57587df2d4eaa08f5f7f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__deprecation,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation( PyObjectSharedLocalVariable &python_closure_f, PyObjectSharedLocalVariable &python_closure_self )
{
    struct _context_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation_t *_python_context = new _context_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_f.shareWith( python_closure_f );
    _python_context->python_closure_self.shareWith( python_closure_self );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation,
        dparse_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation,
        _python_str_plain_wrapped,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f8cdf82674ce06cb9cdb79ac66e3c3d2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__deprecation,
        Py_None,
        _python_context,
        _context_function_1_wrapped_of_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation,
        dparse_function_2___call___of_class_1_warn_about_renamed_method_of_module_django__utils__deprecation,
        _python_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_df271bd3cbcb47c9fde48bd235c675f6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__deprecation,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.deprecation",   /* m_name */
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

MOD_INIT_DECL( django__utils__deprecation )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__deprecation );
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

    // puts( "in initdjango__utils__deprecation" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__deprecation = Py_InitModule4(
        "django.utils.deprecation",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__deprecation = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__deprecation = (PyDictObject *)((PyModuleObject *)_module_django__utils__deprecation)->md_dict;

    assertObject( _module_django__utils__deprecation );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_82e2052e97d6975cbf1c3e3aad670491, _module_django__utils__deprecation );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__deprecation );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__deprecation != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__deprecation, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__deprecation, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_a40d914ede2a2efa3915a9c4a9e2c2a3 );
    PyFrameObject *frame_module_django__utils__deprecation = MAKE_FRAME( _codeobj_e2b3318a7bd2e3b90faec092b967cfea, _module_django__utils__deprecation );

    FrameGuard frame_guard( frame_module_django__utils__deprecation );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__deprecation ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__deprecation, (Nuitka_StringObject *)_python_str_plain_inspect, IMPORT_MODULE( _python_str_plain_inspect, ((PyModuleObject *)_module_django__utils__deprecation)->md_dict, ((PyModuleObject *)_module_django__utils__deprecation)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__deprecation, (Nuitka_StringObject *)_python_str_plain_warnings, IMPORT_MODULE( _python_str_plain_warnings, ((PyModuleObject *)_module_django__utils__deprecation)->md_dict, ((PyModuleObject *)_module_django__utils__deprecation)->md_dict, Py_None, _python_int_neg_1 ) );
        {
            frame_guard.setLineNumber( 5 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_warn_about_renamed_method_of_module_django__utils__deprecation(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__deprecation___metaclass__.isInitialized( false ) ? _mvar_django__utils__deprecation___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_warn_about_renamed_method, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__deprecation, (Nuitka_StringObject *)_python_str_plain_warn_about_renamed_method, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 22 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_type ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_RenameMethodsBase_of_module_django__utils__deprecation(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__deprecation___metaclass__.isInitialized( false ) ? _mvar_django__utils__deprecation___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_RenameMethodsBase, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__deprecation, (Nuitka_StringObject *)_python_str_plain_RenameMethodsBase, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__deprecation)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__utils__deprecation );
}
