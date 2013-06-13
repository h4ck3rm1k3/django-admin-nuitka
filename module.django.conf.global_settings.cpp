// Generated code for Python source for module 'django.conf.global_settings'
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

// The _module_django__conf__global_settings is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__conf__global_settings;
PyDictObject *_moduledict_django__conf__global_settings;

// The module level variables.
static PyObjectGlobalVariable_django__conf__global_settings _mvar_django__conf__global_settings_ADMINS( &_module_django__conf__global_settings, &_python_str_plain_ADMINS );
static PyObjectGlobalVariable_django__conf__global_settings _mvar_django__conf__global_settings_gettext_noop( &_module_django__conf__global_settings, &_python_str_plain_gettext_noop );

// The module function declarations.
static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_module_django__conf__global_settings(  );


// The module function definitions.
static PyObject *impl_lambda_1_lambda_of_module_django__conf__global_settings( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_module_django__conf__global_settings = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_module_django__conf__global_settings ) )
    {
        if ( frame_lambda_1_lambda_of_module_django__conf__global_settings )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_module_django__conf__global_settings" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_module_django__conf__global_settings );
        }

        frame_lambda_1_lambda_of_module_django__conf__global_settings = MAKE_FRAME( _codeobj_f784e59322926dda0809cdcae79a75e6, _module_django__conf__global_settings );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_module_django__conf__global_settings );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_module_django__conf__global_settings ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 6 );
        return _python_var_s.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_s.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_module_django__conf__global_settings )
        {
           Py_DECREF( frame_lambda_1_lambda_of_module_django__conf__global_settings );
           frame_lambda_1_lambda_of_module_django__conf__global_settings = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_module_django__conf__global_settings( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_s = NULL;
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
            if ( found == false && _python_str_plain_s == key )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_s, key ) )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

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
         if (unlikely( _python_par_s != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_lambda_1_lambda_of_module_django__conf__global_settings( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_module_django__conf__global_settings( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_1_lambda_of_module_django__conf__global_settings( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_module_django__conf__global_settings( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_module_django__conf__global_settings(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_module_django__conf__global_settings,
        dparse_lambda_1_lambda_of_module_django__conf__global_settings,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f784e59322926dda0809cdcae79a75e6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf__global_settings,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.conf.global_settings",   /* m_name */
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

MOD_INIT_DECL( django__conf__global_settings )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__conf__global_settings );
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

    // puts( "in initdjango__conf__global_settings" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__conf__global_settings = Py_InitModule4(
        "django.conf.global_settings",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__conf__global_settings = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__conf__global_settings = (PyDictObject *)((PyModuleObject *)_module_django__conf__global_settings)->md_dict;

    assertObject( _module_django__conf__global_settings );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_35e492d9ed4bfc2fac491540a7d298c3, _module_django__conf__global_settings );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__conf__global_settings );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__conf__global_settings != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_755c0d4038a6523ca8a06c027307f2f6 );
    UPDATE_STRING_DICT1( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_gettext_noop, MAKE_FUNCTION_lambda_1_lambda_of_module_django__conf__global_settings(  ) );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DEBUG, Py_False );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_TEMPLATE_DEBUG, Py_False );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DEBUG_PROPAGATE_EXCEPTIONS, Py_False );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_USE_ETAGS, Py_False );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_ADMINS, _python_tuple_empty );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_INTERNAL_IPS, _python_tuple_empty );
    UPDATE_STRING_DICT1( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_ALLOWED_HOSTS, PyList_New( 0 ) );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_TIME_ZONE, _python_str_digest_f4b3b4fc343702ec1387c90fb45dfad4 );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_USE_TZ, Py_False );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_LANGUAGE_CODE, _python_str_digest_40d704470259297f93bee626c12b71fb );
    PyFrameObject *frame_module_django__conf__global_settings = MAKE_FRAME( _codeobj_f1963e4c27a5d0841f52b1881011c089, _module_django__conf__global_settings );

    FrameGuard frame_guard( frame_module_django__conf__global_settings );
    try
    {
        assert( Py_REFCNT( frame_module_django__conf__global_settings ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 50 );
        {
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple10;
            PyObjectTempKeeper1 make_tuple11;
            PyObjectTempKeeper1 make_tuple12;
            PyObjectTempKeeper1 make_tuple13;
            PyObjectTempKeeper1 make_tuple14;
            PyObjectTempKeeper1 make_tuple15;
            PyObjectTempKeeper1 make_tuple16;
            PyObjectTempKeeper1 make_tuple17;
            PyObjectTempKeeper1 make_tuple18;
            PyObjectTempKeeper1 make_tuple19;
            PyObjectTempKeeper1 make_tuple2;
            PyObjectTempKeeper1 make_tuple20;
            PyObjectTempKeeper1 make_tuple21;
            PyObjectTempKeeper1 make_tuple22;
            PyObjectTempKeeper1 make_tuple23;
            PyObjectTempKeeper1 make_tuple24;
            PyObjectTempKeeper1 make_tuple25;
            PyObjectTempKeeper1 make_tuple26;
            PyObjectTempKeeper1 make_tuple27;
            PyObjectTempKeeper1 make_tuple28;
            PyObjectTempKeeper1 make_tuple29;
            PyObjectTempKeeper1 make_tuple3;
            PyObjectTempKeeper1 make_tuple30;
            PyObjectTempKeeper1 make_tuple31;
            PyObjectTempKeeper1 make_tuple32;
            PyObjectTempKeeper1 make_tuple33;
            PyObjectTempKeeper1 make_tuple34;
            PyObjectTempKeeper1 make_tuple35;
            PyObjectTempKeeper1 make_tuple36;
            PyObjectTempKeeper1 make_tuple37;
            PyObjectTempKeeper1 make_tuple38;
            PyObjectTempKeeper1 make_tuple39;
            PyObjectTempKeeper1 make_tuple4;
            PyObjectTempKeeper1 make_tuple40;
            PyObjectTempKeeper1 make_tuple41;
            PyObjectTempKeeper1 make_tuple42;
            PyObjectTempKeeper1 make_tuple43;
            PyObjectTempKeeper1 make_tuple44;
            PyObjectTempKeeper1 make_tuple45;
            PyObjectTempKeeper1 make_tuple46;
            PyObjectTempKeeper1 make_tuple47;
            PyObjectTempKeeper1 make_tuple48;
            PyObjectTempKeeper1 make_tuple49;
            PyObjectTempKeeper1 make_tuple5;
            PyObjectTempKeeper1 make_tuple50;
            PyObjectTempKeeper1 make_tuple51;
            PyObjectTempKeeper1 make_tuple52;
            PyObjectTempKeeper1 make_tuple53;
            PyObjectTempKeeper1 make_tuple54;
            PyObjectTempKeeper1 make_tuple55;
            PyObjectTempKeeper1 make_tuple56;
            PyObjectTempKeeper1 make_tuple57;
            PyObjectTempKeeper1 make_tuple58;
            PyObjectTempKeeper1 make_tuple59;
            PyObjectTempKeeper1 make_tuple6;
            PyObjectTempKeeper1 make_tuple60;
            PyObjectTempKeeper1 make_tuple61;
            PyObjectTempKeeper1 make_tuple62;
            PyObjectTempKeeper1 make_tuple63;
            PyObjectTempKeeper1 make_tuple64;
            PyObjectTempKeeper1 make_tuple65;
            PyObjectTempKeeper1 make_tuple66;
            PyObjectTempKeeper1 make_tuple67;
            PyObjectTempKeeper1 make_tuple68;
            PyObjectTempKeeper1 make_tuple69;
            PyObjectTempKeeper1 make_tuple7;
            PyObjectTempKeeper1 make_tuple70;
            PyObjectTempKeeper1 make_tuple71;
            PyObjectTempKeeper1 make_tuple72;
            PyObjectTempKeeper1 make_tuple73;
            PyObjectTempKeeper1 make_tuple74;
            PyObjectTempKeeper1 make_tuple75;
            PyObjectTempKeeper1 make_tuple76;
            PyObjectTempKeeper1 make_tuple77;
            PyObjectTempKeeper1 make_tuple78;
            PyObjectTempKeeper1 make_tuple79;
            PyObjectTempKeeper1 make_tuple8;
            PyObjectTempKeeper1 make_tuple9;
            UPDATE_STRING_DICT1( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_LANGUAGES, ( make_tuple1.assign( MAKE_TUPLE2( _python_str_plain_af, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Afrikaans ) ).asObject() ) ), make_tuple2.assign( MAKE_TUPLE2( _python_str_plain_ar, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Arabic ) ).asObject() ) ), make_tuple3.assign( MAKE_TUPLE2( _python_str_plain_az, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Azerbaijani ) ).asObject() ) ), make_tuple4.assign( MAKE_TUPLE2( _python_str_plain_bg, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Bulgarian ) ).asObject() ) ), make_tuple5.assign( MAKE_TUPLE2( _python_str_plain_be, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Belarusian ) ).asObject() ) ), make_tuple6.assign( MAKE_TUPLE2( _python_str_plain_bn, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Bengali ) ).asObject() ) ), make_tuple7.assign( MAKE_TUPLE2( _python_str_plain_br, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Breton ) ).asObject() ) ), make_tuple8.assign( MAKE_TUPLE2( _python_str_plain_bs, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Bosnian ) ).asObject() ) ), make_tuple9.assign( MAKE_TUPLE2( _python_str_plain_ca, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Catalan ) ).asObject() ) ), make_tuple10.assign( MAKE_TUPLE2( _python_str_plain_cs, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Czech ) ).asObject() ) ), make_tuple11.assign( MAKE_TUPLE2( _python_str_plain_cy, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Welsh ) ).asObject() ) ), make_tuple12.assign( MAKE_TUPLE2( _python_str_plain_da, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Danish ) ).asObject() ) ), make_tuple13.assign( MAKE_TUPLE2( _python_str_plain_de, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_German ) ).asObject() ) ), make_tuple14.assign( MAKE_TUPLE2( _python_str_plain_el, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Greek ) ).asObject() ) ), make_tuple15.assign( MAKE_TUPLE2( _python_str_plain_en, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_English ) ).asObject() ) ), make_tuple16.assign( MAKE_TUPLE2( _python_str_digest_d5998a6a8a398619237df806506c6b31, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_digest_cce196ee016c01540ba8baf072949f80 ) ).asObject() ) ), make_tuple17.assign( MAKE_TUPLE2( _python_str_plain_eo, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Esperanto ) ).asObject() ) ), make_tuple18.assign( MAKE_TUPLE2( _python_str_plain_es, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Spanish ) ).asObject() ) ), make_tuple19.assign( MAKE_TUPLE2( _python_str_digest_a02d2bdb0958ba1c10f3917505ab94ff, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_digest_415f43c7112993505e567606bb37183b ) ).asObject() ) ), make_tuple20.assign( MAKE_TUPLE2( _python_str_digest_72a789269bfada1377d45b0afcc376f8, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_digest_8d431cd9da04969c240451d1ac190c89 ) ).asObject() ) ), make_tuple21.assign( MAKE_TUPLE2( _python_str_digest_14d0c78b35c6006787b3cafd7efff4a6, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_digest_72a021baf4d5393768aab03b109d3cf1 ) ).asObject() ) ), make_tuple22.assign( MAKE_TUPLE2( _python_str_digest_717197585c015ae604532b160e22acd8, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_digest_8b0741f044b88681088b24d7882cc526 ) ).asObject() ) ), make_tuple23.assign( MAKE_TUPLE2( _python_str_plain_et, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Estonian ) ).asObject() ) ), make_tuple24.assign( MAKE_TUPLE2( _python_str_plain_eu, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Basque ) ).asObject() ) ), make_tuple25.assign( MAKE_TUPLE2( _python_str_plain_fa, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Persian ) ).asObject() ) ), make_tuple26.assign( MAKE_TUPLE2( _python_str_plain_fi, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Finnish ) ).asObject() ) ), make_tuple27.assign( MAKE_TUPLE2( _python_str_plain_fr, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_French ) ).asObject() ) ), make_tuple28.assign( MAKE_TUPLE2( _python_str_digest_dd72dd8b85996ba473156c6dea5bd583, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Frisian ) ).asObject() ) ), make_tuple29.assign( MAKE_TUPLE2( _python_str_plain_ga, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Irish ) ).asObject() ) ), make_tuple30.assign( MAKE_TUPLE2( _python_str_plain_gl, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Galician ) ).asObject() ) ), make_tuple31.assign( MAKE_TUPLE2( _python_str_plain_he, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Hebrew ) ).asObject() ) ), make_tuple32.assign( MAKE_TUPLE2( _python_str_plain_hi, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Hindi ) ).asObject() ) ), make_tuple33.assign( MAKE_TUPLE2( _python_str_plain_hr, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Croatian ) ).asObject() ) ), make_tuple34.assign( MAKE_TUPLE2( _python_str_plain_hu, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Hungarian ) ).asObject() ) ), make_tuple35.assign( MAKE_TUPLE2( _python_str_plain_ia, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Interlingua ) ).asObject() ) ), make_tuple36.assign( MAKE_TUPLE2( _python_str_plain_id, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Indonesian ) ).asObject() ) ), make_tuple37.assign( MAKE_TUPLE2( _python_str_plain_is, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Icelandic ) ).asObject() ) ), make_tuple38.assign( MAKE_TUPLE2( _python_str_plain_it, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Italian ) ).asObject() ) ), make_tuple39.assign( MAKE_TUPLE2( _python_str_plain_ja, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Japanese ) ).asObject() ) ), make_tuple40.assign( MAKE_TUPLE2( _python_str_plain_ka, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Georgian ) ).asObject() ) ), make_tuple41.assign( MAKE_TUPLE2( _python_str_plain_kk, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Kazakh ) ).asObject() ) ), make_tuple42.assign( MAKE_TUPLE2( _python_str_plain_km, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Khmer ) ).asObject() ) ), make_tuple43.assign( MAKE_TUPLE2( _python_str_plain_kn, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Kannada ) ).asObject() ) ), make_tuple44.assign( MAKE_TUPLE2( _python_str_plain_ko, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Korean ) ).asObject() ) ), make_tuple45.assign( MAKE_TUPLE2( _python_str_plain_lb, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Luxembourgish ) ).asObject() ) ), make_tuple46.assign( MAKE_TUPLE2( _python_str_plain_lt, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Lithuanian ) ).asObject() ) ), make_tuple47.assign( MAKE_TUPLE2( _python_str_plain_lv, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Latvian ) ).asObject() ) ), make_tuple48.assign( MAKE_TUPLE2( _python_str_plain_mk, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Macedonian ) ).asObject() ) ), make_tuple49.assign( MAKE_TUPLE2( _python_str_plain_ml, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Malayalam ) ).asObject() ) ), make_tuple50.assign( MAKE_TUPLE2( _python_str_plain_mn, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Mongolian ) ).asObject() ) ), make_tuple51.assign( MAKE_TUPLE2( _python_str_plain_my, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Burmese ) ).asObject() ) ), make_tuple52.assign( MAKE_TUPLE2( _python_str_plain_nb, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_digest_4aa29a01f07202985520b34c0116e676 ) ).asObject() ) ), make_tuple53.assign( MAKE_TUPLE2( _python_str_plain_ne, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Nepali ) ).asObject() ) ), make_tuple54.assign( MAKE_TUPLE2( _python_str_plain_nl, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Dutch ) ).asObject() ) ), make_tuple55.assign( MAKE_TUPLE2( _python_str_plain_nn, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_digest_bf9bb1c7f7e4da4ee62f64029b462e21 ) ).asObject() ) ), make_tuple56.assign( MAKE_TUPLE2( _python_str_plain_os, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Ossetic ) ).asObject() ) ), make_tuple57.assign( MAKE_TUPLE2( _python_str_plain_pa, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Punjabi ) ).asObject() ) ), make_tuple58.assign( MAKE_TUPLE2( _python_str_plain_pl, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Polish ) ).asObject() ) ), make_tuple59.assign( MAKE_TUPLE2( _python_str_plain_pt, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Portuguese ) ).asObject() ) ), make_tuple60.assign( MAKE_TUPLE2( _python_str_digest_c6397fdbd08f902f9afdde3b068a0b38, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_digest_61e9d8195629932bff75e40f321d35c0 ) ).asObject() ) ), make_tuple61.assign( MAKE_TUPLE2( _python_str_plain_ro, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Romanian ) ).asObject() ) ), make_tuple62.assign( MAKE_TUPLE2( _python_str_plain_ru, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Russian ) ).asObject() ) ), make_tuple63.assign( MAKE_TUPLE2( _python_str_plain_sk, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Slovak ) ).asObject() ) ), make_tuple64.assign( MAKE_TUPLE2( _python_str_plain_sl, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Slovenian ) ).asObject() ) ), make_tuple65.assign( MAKE_TUPLE2( _python_str_plain_sq, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Albanian ) ).asObject() ) ), make_tuple66.assign( MAKE_TUPLE2( _python_str_plain_sr, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Serbian ) ).asObject() ) ), make_tuple67.assign( MAKE_TUPLE2( _python_str_digest_07280a658d9fcff43637693e0788c611, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_digest_a4c85d7e263e5c56d576cfb47515a216 ) ).asObject() ) ), make_tuple68.assign( MAKE_TUPLE2( _python_str_plain_sv, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Swedish ) ).asObject() ) ), make_tuple69.assign( MAKE_TUPLE2( _python_str_plain_sw, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Swahili ) ).asObject() ) ), make_tuple70.assign( MAKE_TUPLE2( _python_str_plain_ta, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Tamil ) ).asObject() ) ), make_tuple71.assign( MAKE_TUPLE2( _python_str_plain_te, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Telugu ) ).asObject() ) ), make_tuple72.assign( MAKE_TUPLE2( _python_str_plain_th, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Thai ) ).asObject() ) ), make_tuple73.assign( MAKE_TUPLE2( _python_str_plain_tr, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Turkish ) ).asObject() ) ), make_tuple74.assign( MAKE_TUPLE2( _python_str_plain_tt, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Tatar ) ).asObject() ) ), make_tuple75.assign( MAKE_TUPLE2( _python_str_plain_udm, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Udmurt ) ).asObject() ) ), make_tuple76.assign( MAKE_TUPLE2( _python_str_plain_uk, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Ukrainian ) ).asObject() ) ), make_tuple77.assign( MAKE_TUPLE2( _python_str_plain_ur, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Urdu ) ).asObject() ) ), make_tuple78.assign( MAKE_TUPLE2( _python_str_plain_vi, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_plain_Vietnamese ) ).asObject() ) ), make_tuple79.assign( MAKE_TUPLE2( _python_str_digest_4c699e783bd388ccf9ce906d551917de, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_digest_1e81fc32fea0e9f3a978661e4b5e484d ) ).asObject() ) ), MAKE_TUPLE80( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), make_tuple4.asObject0(), make_tuple5.asObject0(), make_tuple6.asObject0(), make_tuple7.asObject0(), make_tuple8.asObject0(), make_tuple9.asObject0(), make_tuple10.asObject0(), make_tuple11.asObject0(), make_tuple12.asObject0(), make_tuple13.asObject0(), make_tuple14.asObject0(), make_tuple15.asObject0(), make_tuple16.asObject0(), make_tuple17.asObject0(), make_tuple18.asObject0(), make_tuple19.asObject0(), make_tuple20.asObject0(), make_tuple21.asObject0(), make_tuple22.asObject0(), make_tuple23.asObject0(), make_tuple24.asObject0(), make_tuple25.asObject0(), make_tuple26.asObject0(), make_tuple27.asObject0(), make_tuple28.asObject0(), make_tuple29.asObject0(), make_tuple30.asObject0(), make_tuple31.asObject0(), make_tuple32.asObject0(), make_tuple33.asObject0(), make_tuple34.asObject0(), make_tuple35.asObject0(), make_tuple36.asObject0(), make_tuple37.asObject0(), make_tuple38.asObject0(), make_tuple39.asObject0(), make_tuple40.asObject0(), make_tuple41.asObject0(), make_tuple42.asObject0(), make_tuple43.asObject0(), make_tuple44.asObject0(), make_tuple45.asObject0(), make_tuple46.asObject0(), make_tuple47.asObject0(), make_tuple48.asObject0(), make_tuple49.asObject0(), make_tuple50.asObject0(), make_tuple51.asObject0(), make_tuple52.asObject0(), make_tuple53.asObject0(), make_tuple54.asObject0(), make_tuple55.asObject0(), make_tuple56.asObject0(), make_tuple57.asObject0(), make_tuple58.asObject0(), make_tuple59.asObject0(), make_tuple60.asObject0(), make_tuple61.asObject0(), make_tuple62.asObject0(), make_tuple63.asObject0(), make_tuple64.asObject0(), make_tuple65.asObject0(), make_tuple66.asObject0(), make_tuple67.asObject0(), make_tuple68.asObject0(), make_tuple69.asObject0(), make_tuple70.asObject0(), make_tuple71.asObject0(), make_tuple72.asObject0(), make_tuple73.asObject0(), make_tuple74.asObject0(), make_tuple75.asObject0(), make_tuple76.asObject0(), make_tuple77.asObject0(), make_tuple78.asObject0(), make_tuple79.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_str_digest_78d0cc9c4ce1c7960ec616310f76091a, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__global_settings_gettext_noop.asObject0(), _python_str_digest_d0bb8c23f6e4f8c8037b6774ba912036 ) ).asObject() ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_LANGUAGES_BIDI, _python_tuple_str_plain_he_str_plain_ar_str_plain_fa_str_plain_ur_tuple );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_USE_I18N, Py_True );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_LOCALE_PATHS, _python_tuple_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_LANGUAGE_COOKIE_NAME, _python_str_plain_django_language );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_USE_L10N, Py_False );
        frame_guard.setLineNumber( 148 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_MANAGERS, _mvar_django__conf__global_settings_ADMINS.asObject0() );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DEFAULT_CONTENT_TYPE, _python_str_digest_6ffaad09c30216c38c8888e6d6757d2f );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DEFAULT_CHARSET, _python_str_digest_e9e2aa8136260a22b0b09fdee43ccb8a );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_FILE_CHARSET, _python_str_digest_e9e2aa8136260a22b0b09fdee43ccb8a );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SERVER_EMAIL, _python_str_digest_b1a4b2518dbbdd47dd4a713d5cd1df94 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SEND_BROKEN_LINK_EMAILS, Py_False );
        UPDATE_STRING_DICT1( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DATABASES, PyDict_New() );
        UPDATE_STRING_DICT1( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DATABASE_ROUTERS, PyList_New( 0 ) );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_EMAIL_BACKEND, _python_str_digest_c2022a7eecfca4e10a0c21fe6333f00c );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_EMAIL_HOST, _python_str_plain_localhost );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_EMAIL_PORT, _python_int_pos_25 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_EMAIL_HOST_USER, _python_str_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_EMAIL_HOST_PASSWORD, _python_str_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_EMAIL_USE_TLS, Py_False );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_INSTALLED_APPS, _python_tuple_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_TEMPLATE_DIRS, _python_tuple_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_TEMPLATE_LOADERS, _python_tuple_22c5525c5dc7472f6addfd7860b341ac_tuple );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_TEMPLATE_CONTEXT_PROCESSORS, _python_tuple_aea5499792d519608cf9499296e0d582_tuple );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_TEMPLATE_STRING_IF_INVALID, _python_str_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DEFAULT_FROM_EMAIL, _python_str_digest_4ab5b21a7cd0020c39eb75622cca959d );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_EMAIL_SUBJECT_PREFIX, _python_str_digest_19be1996c067433431a9524f9c94be52 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_APPEND_SLASH, Py_True );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_PREPEND_WWW, Py_False );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_FORCE_SCRIPT_NAME, Py_None );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DISALLOWED_USER_AGENTS, _python_tuple_empty );
        UPDATE_STRING_DICT1( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_ABSOLUTE_URL_OVERRIDES, PyDict_New() );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_ALLOWED_INCLUDE_ROOTS, _python_tuple_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_ADMIN_FOR, _python_tuple_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_IGNORABLE_404_URLS, _python_tuple_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SECRET_KEY, _python_str_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DEFAULT_FILE_STORAGE, _python_str_digest_f9bde26a1556cd667f742bd34ec7c55e );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_MEDIA_ROOT, _python_str_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_MEDIA_URL, _python_str_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_STATIC_ROOT, _python_str_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_STATIC_URL, Py_None );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_FILE_UPLOAD_HANDLERS, _python_tuple_9700961b6757a405c940b2559aeae14d_tuple );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_FILE_UPLOAD_MAX_MEMORY_SIZE, _python_int_pos_2621440 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_FILE_UPLOAD_TEMP_DIR, Py_None );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_FILE_UPLOAD_PERMISSIONS, Py_None );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_FORMAT_MODULE_PATH, Py_None );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DATE_FORMAT, _python_str_digest_1e0ecbb967641b821c661836b61d7ab6 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DATETIME_FORMAT, _python_str_digest_e3f54fea2ebbc9ccba076a3a1e4369bb );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_TIME_FORMAT, _python_str_plain_P );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_YEAR_MONTH_FORMAT, _python_str_digest_519a414c9b087f6572bd8facbcab900f );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_MONTH_DAY_FORMAT, _python_str_digest_f9c359b4688ab5f1926a88139b6910e8 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SHORT_DATE_FORMAT, _python_str_digest_80c12b6b25177b298ddbbff984d8e022 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SHORT_DATETIME_FORMAT, _python_str_digest_f7840773f884fd08ae6066f8a9e0e146 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DATE_INPUT_FORMATS, _python_tuple_bcc69eac8eb18a0d30f498f83b9bc938_tuple );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_TIME_INPUT_FORMATS, _python_tuple_ef158c1c01b5bc77d7e8ea1eb83cc845_tuple );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DATETIME_INPUT_FORMATS, _python_tuple_cc180a576ca9ebc0ebc00d0fe1856c55_tuple );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_FIRST_DAY_OF_WEEK, _python_int_0 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DECIMAL_SEPARATOR, _python_str_dot );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_USE_THOUSAND_SEPARATOR, Py_False );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_NUMBER_GROUPING, _python_int_0 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_THOUSAND_SEPARATOR, _python_str_chr_44 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_TRANSACTIONS_MANAGED, Py_False );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DEFAULT_TABLESPACE, _python_str_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DEFAULT_INDEX_TABLESPACE, _python_str_empty );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_X_FRAME_OPTIONS, _python_str_plain_SAMEORIGIN );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_USE_X_FORWARDED_HOST, Py_False );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_WSGI_APPLICATION, Py_None );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SECURE_PROXY_SSL_HEADER, Py_None );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_MIDDLEWARE_CLASSES, _python_tuple_e5c1e641db183b28d30515902452766d_tuple );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SESSION_CACHE_ALIAS, _python_str_plain_default );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SESSION_COOKIE_NAME, _python_str_plain_sessionid );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SESSION_COOKIE_AGE, _python_int_pos_1209600 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SESSION_COOKIE_DOMAIN, Py_None );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SESSION_COOKIE_SECURE, Py_False );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SESSION_COOKIE_PATH, _python_str_chr_47 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SESSION_COOKIE_HTTPONLY, Py_True );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SESSION_SAVE_EVERY_REQUEST, Py_False );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SESSION_EXPIRE_AT_BROWSER_CLOSE, Py_False );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SESSION_ENGINE, _python_str_digest_a3c5a78eb4adc1515088509994f3a238 );
        UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SESSION_FILE_PATH, Py_None );
        frame_guard.setLineNumber( 478 );
        UPDATE_STRING_DICT1( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_CACHES, MAKE_DICT1( PyObjectTemporary( PyDict_Copy( _python_dict_723aa62ff9d9cefece2a0b480e69e4a1 ) ).asObject(), _python_str_plain_default ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__conf__global_settings)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_CACHE_MIDDLEWARE_KEY_PREFIX, _python_str_empty );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_CACHE_MIDDLEWARE_SECONDS, _python_int_pos_600 );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_CACHE_MIDDLEWARE_ALIAS, _python_str_plain_default );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_COMMENTS_ALLOW_PROFANITIES, Py_False );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_PROFANITIES_LIST, _python_tuple_empty );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_AUTH_USER_MODEL, _python_str_digest_5955cab7237a37c4d7bf2ca83c254661 );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_AUTHENTICATION_BACKENDS, _python_tuple_str_digest_a15bf957bdbce4878ba3aa520fff231e_tuple );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_LOGIN_URL, _python_str_digest_a8704d2c79f18ddf5cc3300b65e2a3a2 );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_LOGOUT_URL, _python_str_digest_e8485f253b3bd46c13018995751dc57e );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_LOGIN_REDIRECT_URL, _python_str_digest_9e4073bcd577996aa07b73c1276692ac );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_PASSWORD_RESET_TIMEOUT_DAYS, _python_int_pos_3 );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_PASSWORD_HASHERS, _python_tuple_5b69f7d86c4399642763467727ac8461_tuple );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_SIGNING_BACKEND, _python_str_digest_14c2ce27127d27fd5975c307454ac53f );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_CSRF_FAILURE_VIEW, _python_str_digest_f89ac16b653d662bed64fbc1fae2417a );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_CSRF_COOKIE_NAME, _python_str_plain_csrftoken );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_CSRF_COOKIE_DOMAIN, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_CSRF_COOKIE_PATH, _python_str_chr_47 );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_CSRF_COOKIE_SECURE, Py_False );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_CSRF_COOKIE_HTTPONLY, Py_False );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_MESSAGE_STORAGE, _python_str_digest_96502c745c9c7439b1661da4f2e611ea );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_LOGGING_CONFIG, _python_str_digest_639a92a8019af89b0579c3db8c6999f8 );
    UPDATE_STRING_DICT1( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_LOGGING, PyDict_New() );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_DEFAULT_EXCEPTION_REPORTER_FILTER, _python_str_digest_b52862b2b048180b7cae0b858575b0e4 );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_TEST_RUNNER, _python_str_digest_3af919d6363002f93ae8d8952971db8d );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_FIXTURE_DIRS, _python_tuple_empty );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_STATICFILES_DIRS, _python_tuple_empty );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_STATICFILES_STORAGE, _python_str_digest_fd6477dc4f2470869a9fa61c73dc531b );
    UPDATE_STRING_DICT0( _moduledict_django__conf__global_settings, (Nuitka_StringObject *)_python_str_plain_STATICFILES_FINDERS, _python_tuple_a19141c7b12a5344e4abd281e42ac408_tuple );

   return MOD_RETURN_VALUE( _module_django__conf__global_settings );
}
