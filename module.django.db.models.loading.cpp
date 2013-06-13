// Generated code for Python source for module 'django.db.models.loading'
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

// The _module_django__db__models__loading is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db__models__loading;
PyDictObject *_moduledict_django__db__models__loading;

// The module level variables.
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading_AppCache( &_module_django__db__models__loading, &_python_str_plain_AppCache );
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading_ImproperlyConfigured( &_module_django__db__models__loading, &_python_str_plain_ImproperlyConfigured );
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading_SortedDict( &_module_django__db__models__loading, &_python_str_plain_SortedDict );
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading_UnavailableApp( &_module_django__db__models__loading, &_python_str_plain_UnavailableApp );
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading___metaclass__( &_module_django__db__models__loading, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading_cache( &_module_django__db__models__loading, &_python_str_plain_cache );
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading_imp( &_module_django__db__models__loading, &_python_str_plain_imp );
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading_import_module( &_module_django__db__models__loading, &_python_str_plain_import_module );
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading_module_has_submodule( &_module_django__db__models__loading, &_python_str_plain_module_has_submodule );
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading_os( &_module_django__db__models__loading, &_python_str_plain_os );
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading_settings( &_module_django__db__models__loading, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading_six( &_module_django__db__models__loading, &_python_str_plain_six );
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading_sys( &_module_django__db__models__loading, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__db__models__loading _mvar_django__db__models__loading_upath( &_module_django__db__models__loading, &_python_str_plain_upath );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_UnavailableApp_of_module_django__db__models__loading(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_AppCache_of_module_django__db__models__loading(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_elt, PyObjectLocalParameterVariableNoDel &python_closure_self );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_3_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_elt );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_path );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_m, PyObjectLocalParameterVariableNoDel &python_closure_self );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_app_label, PyObjectLocalParameterVariableNoDel &python_closure_self );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator, PyObjectSharedLocalVariable &python_closure_include_auto_created, PyObjectSharedLocalVariable &python_closure_include_deferred, PyObjectSharedLocalVariable &python_closure_include_swapped );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_4_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_m, PyObjectLocalParameterVariableNoDel &python_closure_self );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator );


static PyObject *MAKE_FUNCTION_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading(  );


static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_UnavailableApp_of_module_django__db__models__loading(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_loading );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_2_AppCache_of_module_django__db__models__loading(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___shared_state( _python_str_plain__AppCache__shared_state );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var__populate( _python_str_plain__populate );
    PyObjectLocalVariable _python_var__label_for( _python_str_plain__label_for );
    PyObjectLocalVariable _python_var_load_app( _python_str_plain_load_app );
    PyObjectLocalVariable _python_var_app_cache_ready( _python_str_plain_app_cache_ready );
    PyObjectLocalVariable _python_var_get_apps( _python_str_plain_get_apps );
    PyObjectLocalVariable _python_var_get_app_paths( _python_str_plain_get_app_paths );
    PyObjectLocalVariable _python_var_get_app( _python_str_plain_get_app );
    PyObjectLocalVariable _python_var_get_app_errors( _python_str_plain_get_app_errors );
    PyObjectLocalVariable _python_var_get_models( _python_str_plain_get_models );
    PyObjectLocalVariable _python_var_get_model( _python_str_plain_get_model );
    PyObjectLocalVariable _python_var_register_models( _python_str_plain_register_models );
    PyObjectLocalVariable _python_var_set_available_apps( _python_str_plain_set_available_apps );
    PyObjectLocalVariable _python_var_unset_available_apps( _python_str_plain_unset_available_apps );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_loading );
    _python_var___doc__.assign0( _python_str_digest_8c40f07033f22ae7c48158a6fc1a4351 );
    static PyFrameObject *frame_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_4f065c498c345274d5d7f6f0b74143ac, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 28 );
        {
            PyObjectTempKeeper1 make_dict1;
            PyObjectTempKeeper1 make_dict5;
            _python_var___shared_state.assign1( ( make_dict1.assign( CALL_FUNCTION_NO_ARGS( _mvar_django__db__models__loading_SortedDict.asObject0() ) ), make_dict5.assign( CALL_FUNCTION_NO_ARGS( _mvar_django__db__models__loading_SortedDict.asObject0() ) ), MAKE_DICT10( make_dict1.asObject0(), _python_str_plain_app_store, PyObjectTemporary( PyDict_New() ).asObject(), _python_str_plain_app_labels, make_dict5.asObject0(), _python_str_plain_app_models, PyObjectTemporary( PyDict_New() ).asObject(), _python_str_plain_app_errors, Py_False, _python_str_plain_loaded, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ) ) ).asObject(), _python_str_plain_handled, PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_str_plain_postponed, _python_int_0, _python_str_plain_nesting_level, PyObjectTemporary( PyDict_New() ).asObject(), _python_str_plain__get_models_cache, Py_None, _python_str_plain_available_apps ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_unset_available_apps.updateLocalsDict( _python_var_set_available_apps.updateLocalsDict( _python_var_register_models.updateLocalsDict( _python_var_get_model.updateLocalsDict( _python_var_get_models.updateLocalsDict( _python_var_get_app_errors.updateLocalsDict( _python_var_get_app.updateLocalsDict( _python_var_get_app_paths.updateLocalsDict( _python_var_get_apps.updateLocalsDict( _python_var_app_cache_ready.updateLocalsDict( _python_var_load_app.updateLocalsDict( _python_var__label_for.updateLocalsDict( _python_var__populate.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___shared_state.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_class_2_AppCache_of_module_django__db__models__loading );
           frame_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        throw;
    }
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    _python_var__populate.assign1( MAKE_FUNCTION_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    _python_var__label_for.assign1( MAKE_FUNCTION_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    _python_var_load_app.assign1( MAKE_FUNCTION_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    _python_var_app_cache_ready.assign1( MAKE_FUNCTION_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    _python_var_get_apps.assign1( MAKE_FUNCTION_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    _python_var_get_app_paths.assign1( MAKE_FUNCTION_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    _python_var_get_app.assign1( MAKE_FUNCTION_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    _python_var_get_app_errors.assign1( MAKE_FUNCTION_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    _python_var_get_models.assign1( MAKE_FUNCTION_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    _python_var_get_model.assign1( MAKE_FUNCTION_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    _python_var_register_models.assign1( MAKE_FUNCTION_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    _python_var_set_available_apps.assign1( MAKE_FUNCTION_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    _python_var_unset_available_apps.assign1( MAKE_FUNCTION_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading(  ) );
    return _python_var_unset_available_apps.updateLocalsDict( _python_var_set_available_apps.updateLocalsDict( _python_var_register_models.updateLocalsDict( _python_var_get_model.updateLocalsDict( _python_var_get_models.updateLocalsDict( _python_var_get_app_errors.updateLocalsDict( _python_var_get_app.updateLocalsDict( _python_var_get_app_paths.updateLocalsDict( _python_var_get_apps.updateLocalsDict( _python_var_app_cache_ready.updateLocalsDict( _python_var_load_app.updateLocalsDict( _python_var__label_for.updateLocalsDict( _python_var__populate.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___shared_state.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_bb7e73474b58a0962851c1e28ddce2f0, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 52 );
        {
                PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__AppCache__shared_state ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain___dict__ );
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

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
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


    return impl_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_app_name( _python_str_plain_app_name );

    // Actual function code.
    static PyFrameObject *frame_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_b551f8528fe3ba707e40883b87f79b67, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 60 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_loaded ) ).asObject() ) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 68 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_imp.asObject0(), _python_str_plain_acquire_lock ) ).asObject() ) );
        frame_guard.setLineNumber( 69 );
        PythonExceptionKeeper _caught_1;

        PyObjectTempKeeper1 _return_value_1;

        try
        {
            frame_guard.setLineNumber( 70 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_loaded ) ).asObject() ) )
            {
                throw ReturnValueException( INCREASE_REFCOUNT( Py_None ) );
            }
            {
                frame_guard.setLineNumber( 72 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_settings.asObject0(), _python_str_plain_INSTALLED_APPS ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 72 );
                        PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_2 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                        _python_var_app_name.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 73 );
                    {
                        PyObjectTempKeeper0 cmp1;
                        if ( ( cmp1.assign( _python_var_app_name.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handled ) ).asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 74 );
                        CONSIDER_THREADING(); continue;
                    }
                    }
                    frame_guard.setLineNumber( 75 );
                    {
                        PyObjectTempKeeper1 call3;
                        DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_load_app ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_app_name.asObject(), Py_True ) ) );
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 76 );
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_nesting_level ) ).asObject() ) )) )
            {
                {
                    frame_guard.setLineNumber( 77 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_postponed ) ).asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 77 );
                            PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_3 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                            _python_var_app_name.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 78 );
                        {
                            PyObjectTempKeeper1 call6;
                            DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_load_app ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_app_name.asObject() ) ) );
                        }

                       CONSIDER_THREADING();
                    }
                }
                frame_guard.setLineNumber( 79 );
                SET_ATTRIBUTE( Py_True, _python_var_self.asObject(), _python_str_plain_loaded );
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
        frame_guard.setLineNumber( 81 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_imp.asObject0(), _python_str_plain_release_lock ) ).asObject() ) );
        _caught_1.rethrow();
        if ( _return_value_1.isKeeping() )
        {
            return _return_value_1.asObject();
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_app_name.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_populate() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_populate() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_populate() got multiple values for keyword argument 'self'" );
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
                   "_populate() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_populate() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_populate() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_populate() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_populate() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_populate() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_populate() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_populate() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_populate() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_populate() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_populate() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_populate() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_populate() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_populate() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_app_mod )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_app_mod( _python_str_plain_app_mod, _python_par_app_mod );

    // Actual function code.
    static PyFrameObject *frame_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_543df4e290107229c5860cddd984b4a7, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 88 );
        return LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_app_mod.asObject(), _python_str_plain___name__ ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_str_dot ) ).asObject(), _python_int_neg_2, -2 );
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
        frame_guard.getFrame0()->f_locals = _python_var_app_mod.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_app_mod = NULL;
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
                PyErr_Format( PyExc_TypeError, "_label_for() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_label_for() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_app_mod == key )
            {
                if (unlikely( _python_par_app_mod ))
                {
                    PyErr_Format( PyExc_TypeError, "_label_for() got multiple values for keyword argument 'app_mod'" );
                    goto error_exit;
                }

                _python_par_app_mod = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_label_for() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_app_mod, key ) )
            {
                if (unlikely( _python_par_app_mod ))
                {
                    PyErr_Format( PyExc_TypeError, "_label_for() got multiple values for keyword argument 'app_mod'" );
                    goto error_exit;
                }

                _python_par_app_mod = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_label_for() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_label_for() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_label_for() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_label_for() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_label_for() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_label_for() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_label_for() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_label_for() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_label_for() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_label_for() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_label_for() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_label_for() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_label_for() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_label_for() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_app_mod != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_label_for() got multiple values for keyword argument 'app_mod'" );
             goto error_exit;
         }

        _python_par_app_mod = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self, _python_par_app_mod );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_app_mod );

    return NULL;
}

static PyObject *dparse_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_app_name, PyObject *_python_par_can_postpone )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_app_name( _python_str_plain_app_name, _python_par_app_name );
    PyObjectLocalParameterVariableNoDel _python_var_can_postpone( _python_str_plain_can_postpone, _python_par_can_postpone );
    PyObjectLocalVariable _python_var_app_module( _python_str_plain_app_module );
    PyObjectLocalVariable _python_var_models( _python_str_plain_models );

    // Actual function code.
    static PyFrameObject *frame_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_2ad6ae6da73dd34bc0ae0826b2a0d4db, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 95 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handled ) ).asObject(), _python_str_plain_add ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_app_name.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 96 );
            PyObjectTemporary _python_tmp_inplace_start( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_nesting_level ) );
            PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start.asObject(), _python_int_pos_1 ) );
            if ( ( _python_tmp_inplace_start.asObject() != _python_tmp_inplace_end.asObject() ) )
            {
                frame_guard.setLineNumber( 96 );
                {
                        PyObject *tmp_identifier = _python_tmp_inplace_end.asObject();
                        SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_nesting_level );
                }
            }
        }
        frame_guard.setLineNumber( 97 );
        {
            PyObjectTempKeeper0 call3;
            _python_var_app_module.assign1( ( call3.assign( _mvar_django__db__models__loading_import_module.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_app_name.asObject() ) ) );
        }
        frame_guard.setLineNumber( 98 );
        try
        {
            frame_guard.setLineNumber( 99 );
            {
                PyObjectTempKeeper0 call10;
                _python_var_models.assign1( ( call10.assign( _mvar_django__db__models__loading_import_module.asObject0() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_str_digest_9d035aa4ca2d9d9302028aa6e0c32b55, _python_var_app_name.asObject() ) ) );
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
                {
                    frame_guard.setLineNumber( 101 );
                    PyObjectTemporary _python_tmp_inplace_start( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_nesting_level ) );
                    PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceSubtract, _python_tmp_inplace_start.asObject(), _python_int_pos_1 ) );
                    if ( ( _python_tmp_inplace_start.asObject() != _python_tmp_inplace_end.asObject() ) )
                    {
                        frame_guard.setLineNumber( 101 );
                        {
                                PyObject *tmp_identifier = _python_tmp_inplace_end.asObject();
                                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_nesting_level );
                        }
                    }
                }
                frame_guard.setLineNumber( 104 );
                {
                    PyObjectTempKeeper0 call7;
                    if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call7.assign( _mvar_django__db__models__loading_module_has_submodule.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_app_module.asObject(), _python_str_plain_models ) ) ).asObject() ) )) )
                {
                    return INCREASE_REFCOUNT( Py_None );
                }
                else
                {
                    frame_guard.setLineNumber( 114 );
                    if ( CHECK_IF_TRUE( _python_var_can_postpone.asObject() ) )
                    {
                        frame_guard.setLineNumber( 115 );
                        {
                            PyObjectTempKeeper1 call5;
                            DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_postponed ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_app_name.asObject() ) ) );
                        }
                        return INCREASE_REFCOUNT( Py_None );
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
            frame_guard.setLineNumber( 120 );
            PyObjectTemporary _python_tmp_inplace_start( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_nesting_level ) );
            PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceSubtract, _python_tmp_inplace_start.asObject(), _python_int_pos_1 ) );
            if ( ( _python_tmp_inplace_start.asObject() != _python_tmp_inplace_end.asObject() ) )
            {
                frame_guard.setLineNumber( 120 );
                {
                        PyObject *tmp_identifier = _python_tmp_inplace_end.asObject();
                        SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_nesting_level );
                }
            }
        }
        frame_guard.setLineNumber( 121 );
        {
            PyObjectTempKeeper0 cmp15;
            if ( ( cmp15.assign( _python_var_models.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp15.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_store ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 122 );
            {
                    PyObjectTemporary tmp_identifier( BUILTIN_LEN( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_store ) ).asObject() ) );
                    PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_store ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed.asObject(), _python_var_models.asObject() );
            }
            frame_guard.setLineNumber( 123 );
            {
                PyObjectTempKeeper1 call13;
                {
                    PyObject *tmp_identifier = _python_var_models.asObject();
                    PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_labels ) );
                    SET_SUBSCRIPT( tmp_identifier, tmp_subscribed.asObject(), PyObjectTemporary( ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__label_for ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_var_models.asObject() ) ) ).asObject() );
            }
            }
        }
        }
        frame_guard.setLineNumber( 124 );
        return _python_var_models.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_can_postpone.updateLocalsDict( _python_var_app_name.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_models.updateLocalsDict( _python_var_app_module.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_app_name = NULL;
    PyObject *_python_par_can_postpone = NULL;
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
                PyErr_Format( PyExc_TypeError, "load_app() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "load_app() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_app_name == key )
            {
                if (unlikely( _python_par_app_name ))
                {
                    PyErr_Format( PyExc_TypeError, "load_app() got multiple values for keyword argument 'app_name'" );
                    goto error_exit;
                }

                _python_par_app_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_can_postpone == key )
            {
                if (unlikely( _python_par_can_postpone ))
                {
                    PyErr_Format( PyExc_TypeError, "load_app() got multiple values for keyword argument 'can_postpone'" );
                    goto error_exit;
                }

                _python_par_can_postpone = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "load_app() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_app_name, key ) )
            {
                if (unlikely( _python_par_app_name ))
                {
                    PyErr_Format( PyExc_TypeError, "load_app() got multiple values for keyword argument 'app_name'" );
                    goto error_exit;
                }

                _python_par_app_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_can_postpone, key ) )
            {
                if (unlikely( _python_par_can_postpone ))
                {
                    PyErr_Format( PyExc_TypeError, "load_app() got multiple values for keyword argument 'can_postpone'" );
                    goto error_exit;
                }

                _python_par_can_postpone = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "load_app() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "load_app() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "load_app() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "load_app() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "load_app() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "load_app() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "load_app() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "load_app() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "load_app() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "load_app() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "load_app() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "load_app() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "load_app() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "load_app() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_app_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "load_app() got multiple values for keyword argument 'app_name'" );
             goto error_exit;
         }

        _python_par_app_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_can_postpone != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "load_app() got multiple values for keyword argument 'can_postpone'" );
             goto error_exit;
         }

        _python_par_can_postpone = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_can_postpone == NULL )
    {
        _python_par_can_postpone = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_can_postpone );
    }


    return impl_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self, _python_par_app_name, _python_par_can_postpone );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_app_name );
    Py_XDECREF( _python_par_can_postpone );

    return NULL;
}

static PyObject *dparse_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_870446cd2b4cddb0b061dc8353ab23fc, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 133 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_loaded );
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

        if ( frame_guard.getFrame0() == frame_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "app_cache_ready() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "app_cache_ready() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "app_cache_ready() got multiple values for keyword argument 'self'" );
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
                   "app_cache_ready() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "app_cache_ready() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "app_cache_ready() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "app_cache_ready() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "app_cache_ready() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "app_cache_ready() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "app_cache_ready() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "app_cache_ready() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "app_cache_ready() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "app_cache_ready() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "app_cache_ready() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "app_cache_ready() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "app_cache_ready() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "app_cache_ready() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_apps( _python_str_plain_apps );
    PyObjectLocalVariable _python_var_elt( _python_str_plain_elt );

    // Actual function code.
    static PyFrameObject *frame_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_28288c1212636bfdb61157d309b05b66, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 139 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__populate ) ).asObject() ) );
        frame_guard.setLineNumber( 141 );
        _python_var_apps.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_store ) ).asObject(), _python_str_plain_items ) ).asObject() ) );
        frame_guard.setLineNumber( 142 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_available_apps ) ).asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 143 );
            _python_var_apps.assign1( impl_listcontr_1_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( MAKE_ITERATOR( _python_var_apps.asObject() ), _python_var_elt, _python_var_self ) );
        }
        frame_guard.setLineNumber( 149 );
        _python_var_apps.assign1( CALL_FUNCTION( LOOKUP_BUILTIN( _python_str_plain_sorted ), PyObjectTemporary( MAKE_TUPLE1( _python_var_apps.asObject() ) ).asObject(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( MAKE_FUNCTION_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading(  ) ).asObject(), _python_str_plain_key ) ).asObject() ) );
        frame_guard.setLineNumber( 151 );
        return impl_listcontr_3_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( MAKE_ITERATOR( _python_var_apps.asObject() ), _python_var_elt );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_elt.updateLocalsDict( _python_var_apps.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_apps() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_apps() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_apps() got multiple values for keyword argument 'self'" );
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
                   "get_apps() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_apps() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_apps() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_apps() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_apps() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_apps() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_apps() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_apps() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_apps() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_apps() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_apps() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_apps() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_apps() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_apps() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_elt,PyObjectLocalParameterVariableNoDel &python_closure_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 143 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 143 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_elt.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper1 cmp3;
                    if ( ( cmp3.assign( ( call1.assign( LOOKUP_ATTRIBUTE( python_closure_self.asObject(), _python_str_plain__label_for ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( python_closure_elt.asObject(), _python_int_0, 0 ) ).asObject() ) ) ), SEQUENCE_CONTAINS_BOOL( cmp3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_self.asObject(), _python_str_plain_available_apps ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 143 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_elt.asObject() ), Py_None;
                }
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_elt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_elt( _python_str_plain_elt, _python_par_elt );

    // Actual function code.
    static PyFrameObject *frame_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_4096b866317eed0c97775f13c26cc700, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 149 );
        return LOOKUP_SUBSCRIPT_CONST( _python_var_elt.asObject(), _python_int_pos_1, 1 );
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
        frame_guard.getFrame0()->f_locals = _python_var_elt.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_elt = NULL;
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
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_elt == key )
            {
                if (unlikely( _python_par_elt ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'elt'" );
                    goto error_exit;
                }

                _python_par_elt = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_elt, key ) )
            {
                if (unlikely( _python_par_elt ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'elt'" );
                    goto error_exit;
                }

                _python_par_elt = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "<lambda>() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "<lambda>() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_elt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'elt'" );
             goto error_exit;
         }

        _python_par_elt = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_elt );

error_exit:;

    Py_XDECREF( _python_par_elt );

    return NULL;
}

static PyObject *dparse_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_3_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_elt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 151 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 151 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_elt.assign0( _python_tmp_iter_value.asObject() );
                APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( python_closure_elt.asObject(), _python_int_0, 0 ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_app_paths( _python_str_plain_app_paths );
    PyObjectLocalVariable _python_var_app( _python_str_plain_app );
    PyObjectLocalVariable _python_var_path( _python_str_plain_path );

    // Actual function code.
    static PyFrameObject *frame_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_750cc6049120f9b59286325b82744d46, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 160 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__populate ) ).asObject() ) );
        _python_var_app_paths.assign1( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 163 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_apps ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 163 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_app.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 164 );
                if ( HAS_ATTRIBUTE( _python_var_app.asObject(), _python_str_plain___path__ ) )
                {
                    frame_guard.setLineNumber( 165 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_app_paths.asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( impl_listcontr_1_of_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_app.asObject(), _python_str_plain___path__ ) ).asObject() ), _python_var_path ) ).asObject() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 167 );
                    {
                        PyObjectTempKeeper0 call3;
                        PyObjectTempKeeper1 call5;
                        DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_app_paths.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( _mvar_django__db__models__loading_upath.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_app.asObject(), _python_str_plain___file__ ) ).asObject() ) ) ).asObject() ) ) );
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 168 );
        return _python_var_app_paths.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_path.updateLocalsDict( _python_var_app.updateLocalsDict( _python_var_app_paths.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_app_paths() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_app_paths() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_app_paths() got multiple values for keyword argument 'self'" );
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
                   "get_app_paths() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_app_paths() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_app_paths() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_app_paths() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_app_paths() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_app_paths() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_app_paths() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_app_paths() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_app_paths() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_app_paths() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_app_paths() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_app_paths() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_app_paths() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_app_paths() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 165 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 165 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_path.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( _mvar_django__db__models__loading_upath.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_path.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_app_label, PyObject *_python_par_emptyOK )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_app_label( _python_str_plain_app_label, _python_par_app_label );
    PyObjectLocalParameterVariableNoDel _python_var_emptyOK( _python_str_plain_emptyOK, _python_par_emptyOK );
    PyObjectLocalVariable _python_var_app_name( _python_str_plain_app_name );
    PyObjectLocalVariable _python_var_mod( _python_str_plain_mod );

    // Actual function code.
    static PyFrameObject *frame_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_12cbbc7474e3d7f725c205441d6947c8, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 179 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__populate ) ).asObject() ) );
        frame_guard.setLineNumber( 180 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_imp.asObject0(), _python_str_plain_acquire_lock ) ).asObject() ) );
        frame_guard.setLineNumber( 181 );
        PythonExceptionKeeper _caught_1;

        PyObjectTempKeeper1 _return_value_1;

        try
        {
            {
                frame_guard.setLineNumber( 182 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_settings.asObject0(), _python_str_plain_INSTALLED_APPS ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 182 );
                        PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_2 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                        _python_var_app_name.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 183 );
                    {
                        PyObjectTempKeeper0 cmp10;
                        if ( ( cmp10.assign( _python_var_app_label.asObject() ), RICH_COMPARE_BOOL_EQ( cmp10.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_app_name.asObject(), _python_str_plain_split ) ).asObject(), _python_str_dot ) ).asObject(), _python_int_neg_1, -1 ) ).asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 184 );
                        {
                            PyObjectTempKeeper1 call1;
                            _python_var_mod.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_load_app ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_app_name.asObject(), Py_False ) ) );
                        }
                        frame_guard.setLineNumber( 185 );
                        if ( ( ( _python_var_mod.asObject() == Py_None ) && (!( CHECK_IF_TRUE( _python_var_emptyOK.asObject() ) )) ) )
                        {
                            frame_guard.setLineNumber( 186 );
                            {
                                PyObjectTempKeeper0 call4;
                                {
                                    PyObjectTemporary tmp_exception_type( ( call4.assign( _mvar_django__db__models__loading_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_486bb3a184220d237c7ebc1d0ad934e3, _python_var_app_label.asObject() ) ).asObject() ) ) );
                                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                            }
                            }
                        }
                        frame_guard.setLineNumber( 187 );
                        {
                            PyObjectTempKeeper0 cmp8;
                            if ( ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_available_apps ) ).asObject() != Py_None ) && ( cmp8.assign( _python_var_app_label.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp8.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_available_apps ) ).asObject() ) ) ) )
                        {
                            frame_guard.setLineNumber( 188 );
                            {
                                PyObjectTempKeeper0 call6;
                                {
                                    PyObjectTemporary tmp_exception_type( ( call6.assign( _mvar_django__db__models__loading_UnavailableApp.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_becd6ba109c533a61d9e4215533e8346, _python_var_app_label.asObject() ) ).asObject() ) ) );
                                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                            }
                            }
                        }
                        }
                        frame_guard.setLineNumber( 189 );
                        throw ReturnValueException( _python_var_mod.asObject1() );
                    }
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 190 );
            {
                PyObjectTempKeeper0 call12;
                {
                    PyObjectTemporary tmp_exception_type( ( call12.assign( _mvar_django__db__models__loading_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_afd65f6da0fd50d0d2d8169fdd5cd0e7, _python_var_app_label.asObject() ) ).asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.setLineNumber( 192 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_imp.asObject0(), _python_str_plain_release_lock ) ).asObject() ) );
        _caught_1.rethrow();
        assert( _return_value_1.isKeeping() ); // Must be true as this is last.
        return _return_value_1.asObject();
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
        frame_guard.getFrame0()->f_locals = _python_var_emptyOK.updateLocalsDict( _python_var_app_label.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_mod.updateLocalsDict( _python_var_app_name.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_app_label = NULL;
    PyObject *_python_par_emptyOK = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_app() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_app() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_app_label == key )
            {
                if (unlikely( _python_par_app_label ))
                {
                    PyErr_Format( PyExc_TypeError, "get_app() got multiple values for keyword argument 'app_label'" );
                    goto error_exit;
                }

                _python_par_app_label = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_emptyOK == key )
            {
                if (unlikely( _python_par_emptyOK ))
                {
                    PyErr_Format( PyExc_TypeError, "get_app() got multiple values for keyword argument 'emptyOK'" );
                    goto error_exit;
                }

                _python_par_emptyOK = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "get_app() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_app_label, key ) )
            {
                if (unlikely( _python_par_app_label ))
                {
                    PyErr_Format( PyExc_TypeError, "get_app() got multiple values for keyword argument 'app_label'" );
                    goto error_exit;
                }

                _python_par_app_label = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_emptyOK, key ) )
            {
                if (unlikely( _python_par_emptyOK ))
                {
                    PyErr_Format( PyExc_TypeError, "get_app() got multiple values for keyword argument 'emptyOK'" );
                    goto error_exit;
                }

                _python_par_emptyOK = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_app() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_app() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_app() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_app() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_app() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_app() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_app() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_app() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_app() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_app() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_app() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "get_app() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_app() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_app() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_app_label != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_app() got multiple values for keyword argument 'app_label'" );
             goto error_exit;
         }

        _python_par_app_label = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_emptyOK != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_app() got multiple values for keyword argument 'emptyOK'" );
             goto error_exit;
         }

        _python_par_emptyOK = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_emptyOK == NULL )
    {
        _python_par_emptyOK = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_emptyOK );
    }


    return impl_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self, _python_par_app_label, _python_par_emptyOK );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_app_label );
    Py_XDECREF( _python_par_emptyOK );

    return NULL;
}

static PyObject *dparse_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_9d5ecfb05363dc4d710ca939e28be6c0, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 196 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__populate ) ).asObject() ) );
        frame_guard.setLineNumber( 197 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_errors );
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

        if ( frame_guard.getFrame0() == frame_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_app_errors() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_app_errors() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_app_errors() got multiple values for keyword argument 'self'" );
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
                   "get_app_errors() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_app_errors() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_app_errors() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_app_errors() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_app_errors() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_app_errors() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_app_errors() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_app_errors() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_app_errors() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_app_errors() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_app_errors() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_app_errors() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_app_errors() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_app_errors() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_app_mod, PyObject *_python_par_include_auto_created, PyObject *_python_par_include_deferred, PyObject *_python_par_only_installed, PyObject *_python_par_include_swapped )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_app_mod( _python_str_plain_app_mod, _python_par_app_mod );
    PyObjectSharedLocalVariable _python_var_include_auto_created( _python_str_plain_include_auto_created, _python_par_include_auto_created );
    PyObjectSharedLocalVariable _python_var_include_deferred( _python_str_plain_include_deferred, _python_par_include_deferred );
    PyObjectLocalParameterVariableNoDel _python_var_only_installed( _python_str_plain_only_installed, _python_par_only_installed );
    PyObjectSharedLocalVariable _python_var_include_swapped( _python_str_plain_include_swapped, _python_par_include_swapped );
    PyObjectLocalVariable _python_var_cache_key( _python_str_plain_cache_key );
    PyObjectLocalVariable _python_var_model_list( _python_str_plain_model_list );
    PyObjectLocalVariable _python_var_app_list( _python_str_plain_app_list );
    PyObjectLocalVariable _python_var_app( _python_str_plain_app );
    PyObjectLocalVariable _python_var_m( _python_str_plain_m );
    PyObjectLocalVariable _python_var_app_label( _python_str_plain_app_label );

    // Actual function code.
    static PyFrameObject *frame_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_b98a425449a40a02361b0df1e5b8e719, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 222 );
        {
            PyObjectTempKeeper0 make_tuple1;
            PyObjectTempKeeper0 make_tuple2;
            PyObjectTempKeeper0 make_tuple3;
            PyObjectTempKeeper0 make_tuple4;
            _python_var_cache_key.assign1( ( make_tuple1.assign( _python_var_app_mod.asObject() ), make_tuple2.assign( _python_var_include_auto_created.asObject() ), make_tuple3.assign( _python_var_include_deferred.asObject() ), make_tuple4.assign( _python_var_only_installed.asObject() ), MAKE_TUPLE5( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), make_tuple4.asObject0(), _python_var_include_swapped.asObject() ) ) );
        }
        _python_var_model_list.assign0( Py_None );
        frame_guard.setLineNumber( 224 );
        try
        {
            frame_guard.setLineNumber( 225 );
            {
                PyObjectTempKeeper1 subscr6;
                _python_var_model_list.assign1( ( subscr6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get_models_cache ) ), LOOKUP_SUBSCRIPT( subscr6.asObject0(), _python_var_cache_key.asObject() ) ) );
            }
            frame_guard.setLineNumber( 226 );
            if ( ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_available_apps ) ).asObject() != Py_None ) && CHECK_IF_TRUE( _python_var_only_installed.asObject() ) ) )
            {
                frame_guard.setLineNumber( 227 );
                _python_var_model_list.assign1( impl_listcontr_1_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( MAKE_ITERATOR( _python_var_model_list.asObject() ), _python_var_m, _python_var_self ) );
            }
            frame_guard.setLineNumber( 229 );
            return _python_var_model_list.asObject1();
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
        frame_guard.setLineNumber( 232 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__populate ) ).asObject() ) );
        frame_guard.setLineNumber( 233 );
        if ( CHECK_IF_TRUE( _python_var_app_mod.asObject() ) )
        {
            frame_guard.setLineNumber( 234 );
            {
                PyObjectTempKeeper0 cmp13;
                if ( ( cmp13.assign( _python_var_app_mod.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp13.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_store ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 235 );
                {
                    PyObjectTempKeeper1 call10;
                    PyObjectTempKeeper1 call11;
                    PyObjectTempKeeper1 call8;
                    _python_var_app_list.assign1( MAKE_LIST1( ( call10.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_models ) ).asObject(), _python_str_plain_get ) ), call11.assign( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__label_for ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_app_mod.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), call11.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__db__models__loading_SortedDict.asObject0() ) ).asObject() ) ) ) );
                }
            }
            else
            {
                _python_var_app_list.assign1( PyList_New( 0 ) );
            }
            }
        }
        else
        {
            frame_guard.setLineNumber( 240 );
            if ( CHECK_IF_TRUE( _python_var_only_installed.asObject() ) )
            {
                frame_guard.setLineNumber( 241 );
                {
                    PyObjectTempKeeper1 call15;
                    _python_var_app_list.assign1( impl_listcontr_2_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( MAKE_ITERATOR( PyObjectTemporary( ( call15.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_six.asObject0(), _python_str_plain_iterkeys ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_labels ) ).asObject() ) ) ).asObject() ), _python_var_app_label, _python_var_self ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 244 );
                {
                    PyObjectTempKeeper1 call17;
                    _python_var_app_list.assign1( ( call17.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_six.asObject0(), _python_str_plain_itervalues ) ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_models ) ).asObject() ) ) );
                }
            }
        }
        _python_var_model_list.assign1( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 246 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_app_list.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 246 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_app.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 247 );
                {
                    PyObjectTempKeeper1 call19;
                    DECREASE_REFCOUNT( ( call19.assign( LOOKUP_ATTRIBUTE( _python_var_model_list.asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), PyObjectTemporary( impl_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_app.asObject(), _python_str_plain_values ) ).asObject() ) ).asObject() ), _python_var_include_auto_created, _python_var_include_deferred, _python_var_include_swapped ) ).asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 253 );
        {
                PyObject *tmp_identifier = _python_var_model_list.asObject();
                PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get_models_cache ) );
                SET_SUBSCRIPT( tmp_identifier, tmp_subscribed.asObject(), _python_var_cache_key.asObject() );
        }
        frame_guard.setLineNumber( 254 );
        if ( ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_available_apps ) ).asObject() != Py_None ) && CHECK_IF_TRUE( _python_var_only_installed.asObject() ) ) )
        {
            frame_guard.setLineNumber( 255 );
            _python_var_model_list.assign1( impl_listcontr_4_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( MAKE_ITERATOR( _python_var_model_list.asObject() ), _python_var_m, _python_var_self ) );
        }
        frame_guard.setLineNumber( 257 );
        return _python_var_model_list.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_include_swapped.updateLocalsDict( _python_var_only_installed.updateLocalsDict( _python_var_include_deferred.updateLocalsDict( _python_var_include_auto_created.updateLocalsDict( _python_var_app_mod.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_app_label.updateLocalsDict( _python_var_m.updateLocalsDict( _python_var_app.updateLocalsDict( _python_var_app_list.updateLocalsDict( _python_var_model_list.updateLocalsDict( _python_var_cache_key.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_app_mod = NULL;
    PyObject *_python_par_include_auto_created = NULL;
    PyObject *_python_par_include_deferred = NULL;
    PyObject *_python_par_only_installed = NULL;
    PyObject *_python_par_include_swapped = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_models() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_app_mod == key )
            {
                if (unlikely( _python_par_app_mod ))
                {
                    PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'app_mod'" );
                    goto error_exit;
                }

                _python_par_app_mod = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_include_auto_created == key )
            {
                if (unlikely( _python_par_include_auto_created ))
                {
                    PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'include_auto_created'" );
                    goto error_exit;
                }

                _python_par_include_auto_created = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_include_deferred == key )
            {
                if (unlikely( _python_par_include_deferred ))
                {
                    PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'include_deferred'" );
                    goto error_exit;
                }

                _python_par_include_deferred = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_only_installed == key )
            {
                if (unlikely( _python_par_only_installed ))
                {
                    PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'only_installed'" );
                    goto error_exit;
                }

                _python_par_only_installed = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_include_swapped == key )
            {
                if (unlikely( _python_par_include_swapped ))
                {
                    PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'include_swapped'" );
                    goto error_exit;
                }

                _python_par_include_swapped = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_app_mod, key ) )
            {
                if (unlikely( _python_par_app_mod ))
                {
                    PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'app_mod'" );
                    goto error_exit;
                }

                _python_par_app_mod = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_include_auto_created, key ) )
            {
                if (unlikely( _python_par_include_auto_created ))
                {
                    PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'include_auto_created'" );
                    goto error_exit;
                }

                _python_par_include_auto_created = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_include_deferred, key ) )
            {
                if (unlikely( _python_par_include_deferred ))
                {
                    PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'include_deferred'" );
                    goto error_exit;
                }

                _python_par_include_deferred = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_only_installed, key ) )
            {
                if (unlikely( _python_par_only_installed ))
                {
                    PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'only_installed'" );
                    goto error_exit;
                }

                _python_par_only_installed = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_include_swapped, key ) )
            {
                if (unlikely( _python_par_include_swapped ))
                {
                    PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'include_swapped'" );
                    goto error_exit;
                }

                _python_par_include_swapped = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_models() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_models() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_models() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_models() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_models() takes exactly %d arguments (%zd given)", 6, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 6 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_models() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_models() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_models() takes %d positional arguments but %zd were given", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_models() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_models() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_models() takes exactly %d non-keyword arguments (%zd given)", 6, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 6 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_models() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_models() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_app_mod != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'app_mod'" );
             goto error_exit;
         }

        _python_par_app_mod = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_include_auto_created != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'include_auto_created'" );
             goto error_exit;
         }

        _python_par_include_auto_created = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_include_deferred != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'include_deferred'" );
             goto error_exit;
         }

        _python_par_include_deferred = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_only_installed != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'only_installed'" );
             goto error_exit;
         }

        _python_par_only_installed = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_include_swapped != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_models() got multiple values for keyword argument 'include_swapped'" );
             goto error_exit;
         }

        _python_par_include_swapped = INCREASE_REFCOUNT( args[ 5 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_app_mod == NULL )
    {
        _python_par_app_mod = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_app_mod );
    }
    if ( _python_par_include_auto_created == NULL )
    {
        _python_par_include_auto_created = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_include_auto_created );
    }
    if ( _python_par_include_deferred == NULL )
    {
        _python_par_include_deferred = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_include_deferred );
    }
    if ( _python_par_only_installed == NULL )
    {
        _python_par_only_installed = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_only_installed );
    }
    if ( _python_par_include_swapped == NULL )
    {
        _python_par_include_swapped = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 4 ) );
        assertObject( _python_par_include_swapped );
    }


    return impl_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self, _python_par_app_mod, _python_par_include_auto_created, _python_par_include_deferred, _python_par_only_installed, _python_par_include_swapped );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_app_mod );
    Py_XDECREF( _python_par_include_auto_created );
    Py_XDECREF( _python_par_include_deferred );
    Py_XDECREF( _python_par_only_installed );
    Py_XDECREF( _python_par_include_swapped );

    return NULL;
}

static PyObject *dparse_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_m,PyObjectLocalParameterVariableNoDel &python_closure_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 227 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 227 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_m.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 cmp1;
                    if ( ( cmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_m.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_app_label ) ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_self.asObject(), _python_str_plain_available_apps ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 227 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_m.asObject() ), Py_None;
                }
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_app_label,PyObjectLocalParameterVariableNoDel &python_closure_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 241 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 241 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_app_label.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 call2;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_self.asObject(), _python_str_plain_app_models ) ).asObject(), _python_str_plain_get ) ), call2.assign( python_closure_app_label.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__db__models__loading_SortedDict.asObject0() ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}



struct _context_generator_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectClosureVariable python_closure_include_auto_created;
    PyObjectClosureVariable python_closure_include_deferred;
    PyObjectClosureVariable python_closure_include_swapped;
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_model;
};

static void _context_generator_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading_destructor( void *context_voidptr )
{
    _context_generator_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading_t *_python_context = (struct _context_generator_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading_t *_python_context = (_context_generator_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_model.setVariableName( _python_str_plain_model );

        // Actual function code.
        static PyFrameObject *frame_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading ) )
        {
            if ( frame_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
                Py_DECREF( frame_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading );
            }

            frame_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_31376dfed84fed6b9f7ff4dbf847cd2a, _module_django__db__models__loading );
        }

        Py_INCREF( frame_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading );
        generator->m_frame = frame_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading;

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
                    frame_guard.setLineNumber( 248 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 248 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_model.assign0( _python_tmp_iter_value.asObject() );
                        if ( ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_model.asObject(), _python_str_plain__deferred ) ).asObject() ) )) || CHECK_IF_TRUE( _python_context->python_closure_include_deferred.asObject() ) ) && ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_model.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_auto_created ) ).asObject() ) )) || CHECK_IF_TRUE( _python_context->python_closure_include_auto_created.asObject() ) ) && ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_model.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_swapped ) ).asObject() ) )) || CHECK_IF_TRUE( _python_context->python_closure_include_swapped.asObject() ) ) ) ) )
                        {
                            frame_guard.setLineNumber( 248 );
                            YIELD_VALUE( generator, _python_context->python_var_model.asObject1() );
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

static PyObject *impl_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator, PyObjectSharedLocalVariable &python_closure_include_auto_created, PyObjectSharedLocalVariable &python_closure_include_deferred, PyObjectSharedLocalVariable &python_closure_include_swapped )
{
    // Create context if any
    struct _context_generator_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading_t *_python_context = new _context_generator_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading_t;
    _python_context->python_closure_include_auto_created.shareWith( python_closure_include_auto_created );
    _python_context->python_closure_include_deferred.shareWith( python_closure_include_deferred );
    _python_context->python_closure_include_swapped.shareWith( python_closure_include_swapped );

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading_context,
            _python_str_angle_genexpr,
            _codeobj_0221810f2da3b1b3c6cec4b0dcf88514,
            _python_context,
            _context_generator_genexpr_3_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading_destructor
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


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_4_of_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_m,PyObjectLocalParameterVariableNoDel &python_closure_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 255 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 255 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_m.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 cmp1;
                    if ( ( cmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_m.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_app_label ) ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_self.asObject(), _python_str_plain_available_apps ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 255 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_m.asObject() ), Py_None;
                }
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_app_label, PyObject *_python_par_model_name, PyObject *_python_par_seed_cache, PyObject *_python_par_only_installed )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_app_label( _python_str_plain_app_label, _python_par_app_label );
    PyObjectLocalParameterVariableNoDel _python_var_model_name( _python_str_plain_model_name, _python_par_model_name );
    PyObjectLocalParameterVariableNoDel _python_var_seed_cache( _python_str_plain_seed_cache, _python_par_seed_cache );
    PyObjectLocalParameterVariableNoDel _python_var_only_installed( _python_str_plain_only_installed, _python_par_only_installed );

    // Actual function code.
    static PyFrameObject *frame_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_0f45e7d86deeed979ed8664c2fceee4d, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 270 );
        if ( CHECK_IF_TRUE( _python_var_seed_cache.asObject() ) )
        {
            frame_guard.setLineNumber( 271 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__populate ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 272 );
        {
            PyObjectTempKeeper0 cmp1;
            if ( ( CHECK_IF_TRUE( _python_var_only_installed.asObject() ) && ( cmp1.assign( _python_var_app_label.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_labels ) ).asObject() ) ) ) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        }
        frame_guard.setLineNumber( 274 );
        {
            PyObjectTempKeeper0 cmp5;
            if ( ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_available_apps ) ).asObject() != Py_None ) && ( CHECK_IF_TRUE( _python_var_only_installed.asObject() ) && ( cmp5.assign( _python_var_app_label.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_available_apps ) ).asObject() ) ) ) ) )
        {
            frame_guard.setLineNumber( 276 );
            {
                PyObjectTempKeeper0 call3;
                {
                    PyObjectTemporary tmp_exception_type( ( call3.assign( _mvar_django__db__models__loading_UnavailableApp.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_becd6ba109c533a61d9e4215533e8346, _python_var_app_label.asObject() ) ).asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        }
        frame_guard.setLineNumber( 277 );
        try
        {
            frame_guard.setLineNumber( 278 );
            {
                PyObjectTempKeeper1 subscr7;
                PyObjectTempKeeper1 subscr9;
                return ( subscr9.assign( ( subscr7.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_models ) ), LOOKUP_SUBSCRIPT( subscr7.asObject0(), _python_var_app_label.asObject() ) ) ), LOOKUP_SUBSCRIPT( subscr9.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_model_name.asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() ) );
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
                return INCREASE_REFCOUNT( Py_None );
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
        frame_guard.getFrame0()->f_locals = _python_var_only_installed.updateLocalsDict( _python_var_seed_cache.updateLocalsDict( _python_var_model_name.updateLocalsDict( _python_var_app_label.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_app_label = NULL;
    PyObject *_python_par_model_name = NULL;
    PyObject *_python_par_seed_cache = NULL;
    PyObject *_python_par_only_installed = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_model() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_app_label == key )
            {
                if (unlikely( _python_par_app_label ))
                {
                    PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'app_label'" );
                    goto error_exit;
                }

                _python_par_app_label = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_model_name == key )
            {
                if (unlikely( _python_par_model_name ))
                {
                    PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'model_name'" );
                    goto error_exit;
                }

                _python_par_model_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_seed_cache == key )
            {
                if (unlikely( _python_par_seed_cache ))
                {
                    PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'seed_cache'" );
                    goto error_exit;
                }

                _python_par_seed_cache = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_only_installed == key )
            {
                if (unlikely( _python_par_only_installed ))
                {
                    PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'only_installed'" );
                    goto error_exit;
                }

                _python_par_only_installed = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_app_label, key ) )
            {
                if (unlikely( _python_par_app_label ))
                {
                    PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'app_label'" );
                    goto error_exit;
                }

                _python_par_app_label = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_model_name, key ) )
            {
                if (unlikely( _python_par_model_name ))
                {
                    PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'model_name'" );
                    goto error_exit;
                }

                _python_par_model_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_seed_cache, key ) )
            {
                if (unlikely( _python_par_seed_cache ))
                {
                    PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'seed_cache'" );
                    goto error_exit;
                }

                _python_par_seed_cache = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_only_installed, key ) )
            {
                if (unlikely( _python_par_only_installed ))
                {
                    PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'only_installed'" );
                    goto error_exit;
                }

                _python_par_only_installed = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_model() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_model() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_model() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_model() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_model() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "get_model() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_model() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "get_model() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_model() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_model() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_model() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "get_model() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_model() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_app_label != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'app_label'" );
             goto error_exit;
         }

        _python_par_app_label = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_model_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'model_name'" );
             goto error_exit;
         }

        _python_par_model_name = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_seed_cache != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'seed_cache'" );
             goto error_exit;
         }

        _python_par_seed_cache = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_only_installed != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_model() got multiple values for keyword argument 'only_installed'" );
             goto error_exit;
         }

        _python_par_only_installed = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_seed_cache == NULL )
    {
        _python_par_seed_cache = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_seed_cache );
    }
    if ( _python_par_only_installed == NULL )
    {
        _python_par_only_installed = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_only_installed );
    }


    return impl_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self, _python_par_app_label, _python_par_model_name, _python_par_seed_cache, _python_par_only_installed );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_app_label );
    Py_XDECREF( _python_par_model_name );
    Py_XDECREF( _python_par_seed_cache );
    Py_XDECREF( _python_par_only_installed );

    return NULL;
}

static PyObject *dparse_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_app_label, PyObject *_python_par_models )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_app_label( _python_str_plain_app_label, _python_par_app_label );
    PyObjectLocalParameterVariableNoDel _python_var_models( _python_str_plain_models, _python_par_models );
    PyObjectLocalVariable _python_var_model( _python_str_plain_model );
    PyObjectLocalVariable _python_var_model_name( _python_str_plain_model_name );
    PyObjectLocalVariable _python_var_model_dict( _python_str_plain_model_dict );
    PyObjectLocalVariable _python_var_fname1( _python_str_plain_fname1 );
    PyObjectLocalVariable _python_var_fname2( _python_str_plain_fname2 );

    // Actual function code.
    static PyFrameObject *frame_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_27b7fe88c8f22e669a1d07dbd0b3fa20, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 286 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_models.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 286 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_model.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 289 );
                _python_var_model_name.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_model.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_model_name ) );
                frame_guard.setLineNumber( 290 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 call2;
                    _python_var_model_dict.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_models ) ).asObject(), _python_str_plain_setdefault ) ), call2.assign( _python_var_app_label.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__db__models__loading_SortedDict.asObject0() ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 291 );
                {
                    PyObjectTempKeeper0 cmp24;
                    if ( ( cmp24.assign( _python_var_model_name.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp24.asObject0(), _python_var_model_dict.asObject() ) ) )
                {
                    frame_guard.setLineNumber( 295 );
                    {
                        PyObjectTempKeeper0 call6;
                        PyObjectTempKeeper1 call8;
                        PyObjectTempKeeper1 subscr4;
                        _python_var_fname1.assign1( ( call8.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_abspath ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( ( call6.assign( _mvar_django__db__models__loading_upath.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( subscr4.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_sys.asObject0(), _python_str_plain_modules ) ), LOOKUP_SUBSCRIPT( subscr4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_model.asObject(), _python_str_plain___module__ ) ).asObject() ) ) ).asObject(), _python_str_plain___file__ ) ).asObject() ) ) ).asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 296 );
                    {
                        PyObjectTempKeeper0 call14;
                        PyObjectTempKeeper1 call16;
                        PyObjectTempKeeper0 subscr10;
                        PyObjectTempKeeper1 subscr12;
                        _python_var_fname2.assign1( ( call16.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_abspath ) ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), PyObjectTemporary( ( call14.assign( _mvar_django__db__models__loading_upath.asObject0() ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( subscr12.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_sys.asObject0(), _python_str_plain_modules ) ), LOOKUP_SUBSCRIPT( subscr12.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( subscr10.assign( _python_var_model_dict.asObject() ), LOOKUP_SUBSCRIPT( subscr10.asObject0(), _python_var_model_name.asObject() ) ) ).asObject(), _python_str_plain___module__ ) ).asObject() ) ) ).asObject(), _python_str_plain___file__ ) ).asObject() ) ) ).asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 300 );
                    {
                        PyObjectTempKeeper1 call18;
                        PyObjectTempKeeper1 call20;
                        PyObjectTempKeeper1 cmp22;
                        if ( ( cmp22.assign( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( ( call18.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_splitext ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), _python_var_fname1.asObject() ) ) ).asObject(), _python_int_0, 0 ) ), RICH_COMPARE_BOOL_EQ( cmp22.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( ( call20.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_splitext ) ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), _python_var_fname2.asObject() ) ) ).asObject(), _python_int_0, 0 ) ).asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 301 );
                        CONSIDER_THREADING(); continue;
                    }
                    }
                }
                }
                frame_guard.setLineNumber( 302 );
                {
                        PyObject *tmp_identifier = _python_var_model.asObject();
                        PyObject *tmp_subscribed = _python_var_model_dict.asObject();
                        SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, _python_var_model_name.asObject() );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 303 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get_models_cache ) ).asObject(), _python_str_plain_clear ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_models.updateLocalsDict( _python_var_app_label.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_fname2.updateLocalsDict( _python_var_fname1.updateLocalsDict( _python_var_model_dict.updateLocalsDict( _python_var_model_name.updateLocalsDict( _python_var_model.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_app_label = NULL;
    PyObject *_python_par_models = NULL;
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
                PyErr_Format( PyExc_TypeError, "register_models() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "register_models() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_app_label == key )
            {
                if (unlikely( _python_par_app_label ))
                {
                    PyErr_Format( PyExc_TypeError, "register_models() got multiple values for keyword argument 'app_label'" );
                    goto error_exit;
                }

                _python_par_app_label = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "register_models() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_app_label, key ) )
            {
                if (unlikely( _python_par_app_label ))
                {
                    PyErr_Format( PyExc_TypeError, "register_models() got multiple values for keyword argument 'app_label'" );
                    goto error_exit;
                }

                _python_par_app_label = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "register_models() got an unexpected keyword argument '%s'",
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

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "register_models() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "register_models() takes at least %d non-keyword arguments (%zd given)", 2, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "register_models() takes at least %d arguments (%zd given)", 2, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "register_models() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_app_label != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "register_models() got multiple values for keyword argument 'app_label'" );
             goto error_exit;
         }

        _python_par_app_label = INCREASE_REFCOUNT( args[ 1 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 2 )
    {
        _python_par_models = PyTuple_New( args_size - 2 );

        for( Py_ssize_t i = 0; i < args_size - 2; i++ )
        {
           PyTuple_SET_ITEM( _python_par_models, i, INCREASE_REFCOUNT( args[2+i] ) );
        }
    }
    else
    {
        _python_par_models = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self, _python_par_app_label, _python_par_models );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_app_label );
    Py_XDECREF( _python_par_models );

    return NULL;
}

static PyObject *dparse_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), MAKE_TUPLE( &args[ 2 ], size > 2 ? size-2 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_available )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_available( _python_str_plain_available, _python_par_available );
    PyObjectLocalVariable _python_var_extra( _python_str_plain_extra );

    // Actual function code.
    static PyFrameObject *frame_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_3ce2676d075a8736ef160f532410ebfb, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 306 );
        {
            PyObjectTempKeeper1 call5;
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call5.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), _python_var_available.asObject() ) ).asObject(), _python_str_plain_issubset ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_settings.asObject0(), _python_str_plain_INSTALLED_APPS ) ).asObject() ) ).asObject() ) ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 307 );
            {
                PyObjectTempKeeper1 op1;
                _python_var_extra.assign1( ( op1.assign( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), _python_var_available.asObject() ) ), BINARY_OPERATION_SUB( op1.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_settings.asObject0(), _python_str_plain_INSTALLED_APPS ) ).asObject() ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 308 );
            {
                PyObjectTempKeeper1 call3;
                {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_ADD( _python_str_digest_b0b7f60da5743a0f6cd1f6725e2e8d7e, PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _python_str_digest_fc763cb31e9938f37737394681228f83, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_extra.asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        }
        frame_guard.setLineNumber( 310 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), PyObjectTemporary( impl_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( MAKE_ITERATOR( _python_var_available.asObject() ) ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_available_apps );
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
        frame_guard.getFrame0()->f_locals = _python_var_available.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_extra.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_available = NULL;
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
                PyErr_Format( PyExc_TypeError, "set_available_apps() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "set_available_apps() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_available == key )
            {
                if (unlikely( _python_par_available ))
                {
                    PyErr_Format( PyExc_TypeError, "set_available_apps() got multiple values for keyword argument 'available'" );
                    goto error_exit;
                }

                _python_par_available = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "set_available_apps() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_available, key ) )
            {
                if (unlikely( _python_par_available ))
                {
                    PyErr_Format( PyExc_TypeError, "set_available_apps() got multiple values for keyword argument 'available'" );
                    goto error_exit;
                }

                _python_par_available = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "set_available_apps() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "set_available_apps() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "set_available_apps() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "set_available_apps() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "set_available_apps() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "set_available_apps() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_available_apps() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "set_available_apps() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_available_apps() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "set_available_apps() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "set_available_apps() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "set_available_apps() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "set_available_apps() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "set_available_apps() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_available != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "set_available_apps() got multiple values for keyword argument 'available'" );
             goto error_exit;
         }

        _python_par_available = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self, _python_par_available );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_available );

    return NULL;
}

static PyObject *dparse_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_app;
};

static void _context_generator_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading_t *_python_context = (struct _context_generator_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading_t *_python_context = (_context_generator_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_app.setVariableName( _python_str_plain_app );

        // Actual function code.
        static PyFrameObject *frame_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading ) )
        {
            if ( frame_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
                Py_DECREF( frame_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading );
            }

            frame_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_67d76378f2d107c990518ea7733698ea, _module_django__db__models__loading );
        }

        Py_INCREF( frame_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading );
        generator->m_frame = frame_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading;

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
                    frame_guard.setLineNumber( 310 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 310 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_app.assign0( _python_tmp_iter_value.asObject() );
                        YIELD_VALUE( generator, LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_app.asObject(), _python_str_plain_rsplit ) ).asObject(), _python_str_dot, _python_int_pos_1 ) ).asObject(), _python_int_neg_1, -1 ) );

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

static PyObject *impl_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading_t *_python_context = new _context_generator_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading_context,
            _python_str_angle_genexpr,
            _codeobj_c36a50fb6e247f4d1ca0d74ba66c56e1,
            _python_context,
            _context_generator_genexpr_1_of_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading_destructor
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


static PyObject *impl_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading = NULL;

    if ( isFrameUnusable( frame_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading ) )
    {
        if ( frame_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading" );
#endif
            Py_DECREF( frame_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading );
        }

        frame_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading = MAKE_FRAME( _codeobj_ecb9bf524800ee16f4fbf46def1567aa, _module_django__db__models__loading );
    }

    FrameGuard frame_guard( frame_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 313 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_available_apps );
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

        if ( frame_guard.getFrame0() == frame_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading )
        {
           Py_DECREF( frame_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading );
           frame_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "unset_available_apps() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "unset_available_apps() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "unset_available_apps() got multiple values for keyword argument 'self'" );
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
                   "unset_available_apps() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "unset_available_apps() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "unset_available_apps() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "unset_available_apps() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "unset_available_apps() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unset_available_apps() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unset_available_apps() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unset_available_apps() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unset_available_apps() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "unset_available_apps() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "unset_available_apps() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "unset_available_apps() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "unset_available_apps() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "unset_available_apps() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_10_get_models_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain_get_models,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b98a425449a40a02361b0df1e5b8e719,
        INCREASE_REFCOUNT( _python_tuple_none_false_false_true_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        _python_str_digest_6520df5e4b4edabe5721d3bc106085d2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_11_get_model_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain_get_model,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0f45e7d86deeed979ed8664c2fceee4d,
        INCREASE_REFCOUNT( _python_tuple_true_true_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        _python_str_digest_dccf6a4f56294b84353a28077f8a8ed8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_12_register_models_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain_register_models,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_27b7fe88c8f22e669a1d07dbd0b3fa20,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        _python_str_digest_30a5624bc80ed7a54380f7d0e800def5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_13_set_available_apps_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain_set_available_apps,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3ce2676d075a8736ef160f532410ebfb,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_14_unset_available_apps_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain_unset_available_apps,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ecb9bf524800ee16f4fbf46def1567aa,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_1___init___of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bb7e73474b58a0962851c1e28ddce2f0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_2__populate_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain__populate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b551f8528fe3ba707e40883b87f79b67,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        _python_str_digest_c134285f6a8526c93546c776bd45fd92
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_3__label_for_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain__label_for,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_543df4e290107229c5860cddd984b4a7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        _python_str_digest_4a043a85f8ca3696576713333b103916
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_4_load_app_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain_load_app,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2ad6ae6da73dd34bc0ae0826b2a0d4db,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        _python_str_digest_d533d73b9d1349d709d9a44d223147b4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_5_app_cache_ready_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain_app_cache_ready,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_870446cd2b4cddb0b061dc8353ab23fc,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        _python_str_digest_dd5601cd4cce0dd56664f6d3cfd45b88
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain_get_apps,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_28288c1212636bfdb61157d309b05b66,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        _python_str_digest_2600af25edacb6f4c2d9feb198289679
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_7_get_app_paths_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain_get_app_paths,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_750cc6049120f9b59286325b82744d46,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        _python_str_digest_38076e32a7bd63b1ed8f340dd0fade30
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_8_get_app_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain_get_app,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_12cbbc7474e3d7f725c205441d6947c8,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        _python_str_digest_8bce931edc075c968ebe42cf1d36d87d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_function_9_get_app_errors_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_plain_get_app_errors,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9d5ecfb05363dc4d710ca939e28be6c0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        _python_str_digest_6f600c24d2648a6f9c6ca52ccc97b42c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading,
        dparse_lambda_2_lambda_of_function_6_get_apps_of_class_2_AppCache_of_module_django__db__models__loading,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4096b866317eed0c97775f13c26cc700,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__loading,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db.models.loading",   /* m_name */
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

MOD_INIT_DECL( django__db__models__loading )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db__models__loading );
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

    // puts( "in initdjango__db__models__loading" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db__models__loading = Py_InitModule4(
        "django.db.models.loading",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db__models__loading = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db__models__loading = (PyDictObject *)((PyModuleObject *)_module_django__db__models__loading)->md_dict;

    assertObject( _module_django__db__models__loading );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_d3499135d88f0bcb0b5db570911dd639, _module_django__db__models__loading );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db__models__loading );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db__models__loading != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_827734fed3eacf0b1e09448b1ce877d4 );
    UPDATE_STRING_DICT0( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_d8c95509fd57704ae76ac95425c6c45a );
    PyFrameObject *frame_module_django__db__models__loading = MAKE_FRAME( _codeobj_2f2daba94abba8313657256edfad7eca, _module_django__db__models__loading );

    FrameGuard frame_guard( frame_module_django__db__models__loading );
    try
    {
        assert( Py_REFCNT( frame_module_django__db__models__loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_ImproperlyConfigured, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, _python_list_str_plain_ImproperlyConfigured_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImproperlyConfigured ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_SortedDict, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_36fff8b06be9a51fbe6af4a1029911c0, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, _python_list_str_plain_SortedDict_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SortedDict ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_import_module, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_4fc502edf9b4c184659c220d993c01d3, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, _python_list_str_plain_import_module_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_module ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_module_has_submodule, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_03bb9f131d782ff4dbd31e0966379285, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, _python_list_str_plain_module_has_submodule_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_module_has_submodule ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_upath, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_88846ba615a71fb6c28246da44176ee3, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, _python_list_str_plain_upath_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_upath ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_imp, IMPORT_MODULE( _python_str_plain_imp, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, ((PyModuleObject *)_module_django__db__models__loading)->md_dict, Py_None, _python_int_neg_1 ) );
        UPDATE_STRING_DICT0( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain___all__, _python_tuple_090eee6f1b2df855317c75770e2e139b_tuple );
        {
            frame_guard.setLineNumber( 18 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyExc_Exception ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_UnavailableApp_of_module_django__db__models__loading(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__loading___metaclass__.isInitialized( false ) ? _mvar_django__db__models__loading___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_UnavailableApp, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_UnavailableApp, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 21 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_AppCache_of_module_django__db__models__loading(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__loading___metaclass__.isInitialized( false ) ? _mvar_django__db__models__loading___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_AppCache, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_AppCache, _python_tmp_class.asObject() );
        }
        frame_guard.setLineNumber( 315 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_cache, CALL_FUNCTION_NO_ARGS( _mvar_django__db__models__loading_AppCache.asObject0() ) );
        frame_guard.setLineNumber( 319 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_get_apps, LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_cache.asObject0(), _python_str_plain_get_apps ) );
        frame_guard.setLineNumber( 320 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_get_app_paths, LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_cache.asObject0(), _python_str_plain_get_app_paths ) );
        frame_guard.setLineNumber( 321 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_get_app, LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_cache.asObject0(), _python_str_plain_get_app ) );
        frame_guard.setLineNumber( 322 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_get_app_errors, LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_cache.asObject0(), _python_str_plain_get_app_errors ) );
        frame_guard.setLineNumber( 323 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_get_models, LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_cache.asObject0(), _python_str_plain_get_models ) );
        frame_guard.setLineNumber( 324 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_get_model, LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_cache.asObject0(), _python_str_plain_get_model ) );
        frame_guard.setLineNumber( 325 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_register_models, LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_cache.asObject0(), _python_str_plain_register_models ) );
        frame_guard.setLineNumber( 326 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_load_app, LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_cache.asObject0(), _python_str_plain_load_app ) );
        frame_guard.setLineNumber( 327 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__loading, (Nuitka_StringObject *)_python_str_plain_app_cache_ready, LOOKUP_ATTRIBUTE( _mvar_django__db__models__loading_cache.asObject0(), _python_str_plain_app_cache_ready ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db__models__loading)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__db__models__loading );
}
