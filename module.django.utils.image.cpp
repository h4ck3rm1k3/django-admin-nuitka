// Generated code for Python source for module 'django.utils.image'
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

// The _module_django__utils__image is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__image;
PyDictObject *_moduledict_django__utils__image;

// The module level variables.
static PyObjectGlobalVariable_django__utils__image _mvar_django__utils__image_Image( &_module_django__utils__image, &_python_str_plain_Image );
static PyObjectGlobalVariable_django__utils__image _mvar_django__utils__image_ImageFile( &_module_django__utils__image, &_python_str_plain_ImageFile );
static PyObjectGlobalVariable_django__utils__image _mvar_django__utils__image_ImproperlyConfigured( &_module_django__utils__image, &_python_str_plain_ImproperlyConfigured );
static PyObjectGlobalVariable_django__utils__image _mvar_django__utils__image_PendingDeprecationWarning( &_module_django__utils__image, &_python_str_plain_PendingDeprecationWarning );
static PyObjectGlobalVariable_django__utils__image _mvar_django__utils__image__( &_module_django__utils__image, &_python_str_plain__ );
static PyObjectGlobalVariable_django__utils__image _mvar_django__utils__image__detect_image_library( &_module_django__utils__image, &_python_str_plain__detect_image_library );
static PyObjectGlobalVariable_django__utils__image _mvar_django__utils__image__imaging( &_module_django__utils__image, &_python_str_plain__imaging );
static PyObjectGlobalVariable_django__utils__image _mvar_django__utils__image_warnings( &_module_django__utils__image, &_python_str_plain_warnings );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1__detect_image_library_of_module_django__utils__image(  );


// The module function definitions.
static PyObject *impl_function_1__detect_image_library_of_module_django__utils__image( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var_PIL_imaging( _python_str_plain_PIL_imaging );
    PyObjectLocalVariable _python_var_PILImage( _python_str_plain_PILImage );
    PyObjectLocalVariable _python_var_err( _python_str_plain_err );
    PyObjectLocalVariable _python_var_platform( _python_str_plain_platform );
    PyObjectLocalVariable _python_var_PILImageFile( _python_str_plain_PILImageFile );

    // Actual function code.
    static PyFrameObject *frame_function_1__detect_image_library_of_module_django__utils__image = NULL;

    if ( isFrameUnusable( frame_function_1__detect_image_library_of_module_django__utils__image ) )
    {
        if ( frame_function_1__detect_image_library_of_module_django__utils__image )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1__detect_image_library_of_module_django__utils__image" );
#endif
            Py_DECREF( frame_function_1__detect_image_library_of_module_django__utils__image );
        }

        frame_function_1__detect_image_library_of_module_django__utils__image = MAKE_FRAME( _codeobj_1709ee9bc1f98d51bec9927a6b6f386b, _module_django__utils__image );
    }

    FrameGuard frame_guard( frame_function_1__detect_image_library_of_module_django__utils__image );
    try
    {
        assert( Py_REFCNT( frame_function_1__detect_image_library_of_module_django__utils__image ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 89 );
        if ( ( _mvar_django__utils__image_Image.asObject0() != Py_None ) )
        {
            frame_guard.setLineNumber( 90 );
            {
                PyObjectTempKeeper0 make_tuple1;
                PyObjectTempKeeper0 make_tuple2;
                return ( make_tuple1.assign( _mvar_django__utils__image_Image.asObject0() ), make_tuple2.assign( _mvar_django__utils__image__imaging.asObject0() ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), _mvar_django__utils__image_ImageFile.asObject0() ) );
            }
        }
        _python_var_PIL_imaging.assign0( Py_False );
        frame_guard.setLineNumber( 95 );
        try
        {
            frame_guard.setLineNumber( 97 );
            _python_var_PILImage.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_PIL, ((PyModuleObject *)_module_django__utils__image)->md_dict, PyObjectTemporary( _python_var_PILImageFile.updateLocalsDict( _python_var_platform.updateLocalsDict( _python_var_err.updateLocalsDict( _python_var_PILImage.updateLocalsDict( _python_var_PIL_imaging.updateLocalsDict( PyDict_New() ) ) ) ) ) ).asObject(), _python_list_str_plain_Image_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Image ) );
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
                _python_var_err.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 99 );
                try
                {
                    frame_guard.setLineNumber( 101 );
                    _python_var_PILImage.assign1( IMPORT_MODULE( _python_str_plain_Image, ((PyModuleObject *)_module_django__utils__image)->md_dict, PyObjectTemporary( _python_var_PILImageFile.updateLocalsDict( _python_var_platform.updateLocalsDict( _python_var_err.updateLocalsDict( _python_var_PILImage.updateLocalsDict( _python_var_PIL_imaging.updateLocalsDict( PyDict_New() ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
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
                        _python_var_err.assign0( _exception.getValue() );
                        frame_guard.setLineNumber( 104 );
                        {
                            PyObjectTempKeeper0 call4;
                            PyObjectTempKeeper0 call6;
                            {
                                PyObjectTemporary tmp_exception_type( ( call6.assign( _mvar_django__utils__image_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( ( call4.assign( _mvar_django__utils__image__.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_f70dd1b91b21d5068002da0a922d626d, _python_var_err.asObject() ) ).asObject() ) ) ).asObject() ) ) );
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
            else
            {
                PyTracebackObject *tb = _exception.getTraceback();
                frame_guard.setLineNumber( tb->tb_lineno );
                _exception.setTraceback( tb->tb_next );
                tb->tb_next = NULL;

                throw;
            }
        }
        frame_guard.setLineNumber( 110 );
        if ( HAS_ATTRIBUTE( _python_var_PILImage.asObject(), _python_unicode_plain_alpha_composite ) )
        {
            _python_var_PIL_imaging.assign0( Py_False );
        }
        else
        {
            frame_guard.setLineNumber( 115 );
            _python_var_platform.assign1( IMPORT_MODULE( _python_str_plain_platform, ((PyModuleObject *)_module_django__utils__image)->md_dict, PyObjectTemporary( _python_var_PILImageFile.updateLocalsDict( _python_var_platform.updateLocalsDict( _python_var_err.updateLocalsDict( _python_var_PILImage.updateLocalsDict( _python_var_PIL_imaging.updateLocalsDict( PyDict_New() ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
            frame_guard.setLineNumber( 119 );
            if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_platform.asObject(), _python_str_plain_python_implementation ) ).asObject() ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_unicode_plain_cpython ) )
            {
                frame_guard.setLineNumber( 123 );
                try
                {
                    frame_guard.setLineNumber( 124 );
                    _python_var_PIL_imaging.assign1( IMPORT_MODULE( _python_str_plain__imaging, ((PyModuleObject *)_module_django__utils__image)->md_dict, PyObjectTemporary( _python_var_PILImageFile.updateLocalsDict( _python_var_platform.updateLocalsDict( _python_var_err.updateLocalsDict( _python_var_PILImage.updateLocalsDict( _python_var_PIL_imaging.updateLocalsDict( PyDict_New() ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
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
                        _python_var_err.assign0( _exception.getValue() );
                        frame_guard.setLineNumber( 126 );
                        {
                            PyObjectTempKeeper0 call10;
                            PyObjectTempKeeper0 call8;
                            {
                                PyObjectTemporary tmp_exception_type( ( call10.assign( _mvar_django__utils__image_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), PyObjectTemporary( ( call8.assign( _mvar_django__utils__image__.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_49ee22143a0557c41ef53dfc9c635b93, _python_var_err.asObject() ) ).asObject() ) ) ).asObject() ) ) );
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
        frame_guard.setLineNumber( 132 );
        try
        {
            frame_guard.setLineNumber( 133 );
            _python_var_PILImageFile.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_PIL, ((PyModuleObject *)_module_django__utils__image)->md_dict, PyObjectTemporary( _python_var_PILImageFile.updateLocalsDict( _python_var_platform.updateLocalsDict( _python_var_err.updateLocalsDict( _python_var_PILImage.updateLocalsDict( _python_var_PIL_imaging.updateLocalsDict( PyDict_New() ) ) ) ) ) ).asObject(), _python_list_str_plain_ImageFile_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImageFile ) );
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
                frame_guard.setLineNumber( 135 );
                _python_var_PILImageFile.assign1( IMPORT_MODULE( _python_str_plain_ImageFile, ((PyModuleObject *)_module_django__utils__image)->md_dict, PyObjectTemporary( _python_var_PILImageFile.updateLocalsDict( _python_var_platform.updateLocalsDict( _python_var_err.updateLocalsDict( _python_var_PILImage.updateLocalsDict( _python_var_PIL_imaging.updateLocalsDict( PyDict_New() ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
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
        frame_guard.setLineNumber( 138 );
        if ( ( _python_var_PIL_imaging.asObject() != Py_False ) )
        {
            frame_guard.setLineNumber( 139 );
            {
                PyObjectTempKeeper1 call12;
                DECREASE_REFCOUNT( ( call12.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__image_warnings.asObject0(), _python_str_plain_warn ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_unicode_digest_436741effb319a8f74e172c863106f42, _mvar_django__utils__image_PendingDeprecationWarning.asObject0() ) ) );
            }
        }
        frame_guard.setLineNumber( 145 );
        {
            PyObjectTempKeeper0 make_tuple15;
            PyObjectTempKeeper0 make_tuple16;
            return ( make_tuple15.assign( _python_var_PILImage.asObject() ), make_tuple16.assign( _python_var_PIL_imaging.asObject() ), MAKE_TUPLE3( make_tuple15.asObject0(), make_tuple16.asObject0(), _python_var_PILImageFile.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_PILImageFile.updateLocalsDict( _python_var_platform.updateLocalsDict( _python_var_err.updateLocalsDict( _python_var_PILImage.updateLocalsDict( _python_var_PIL_imaging.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1__detect_image_library_of_module_django__utils__image )
        {
           Py_DECREF( frame_function_1__detect_image_library_of_module_django__utils__image );
           frame_function_1__detect_image_library_of_module_django__utils__image = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1__detect_image_library_of_module_django__utils__image( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "_detect_image_library() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "_detect_image_library() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "_detect_image_library() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_1__detect_image_library_of_module_django__utils__image( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1__detect_image_library_of_module_django__utils__image( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_1__detect_image_library_of_module_django__utils__image( self );
    }
    else
    {
        PyObject *result = fparse_function_1__detect_image_library_of_module_django__utils__image( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1__detect_image_library_of_module_django__utils__image(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__detect_image_library_of_module_django__utils__image,
        dparse_function_1__detect_image_library_of_module_django__utils__image,
        _python_str_plain__detect_image_library,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1709ee9bc1f98d51bec9927a6b6f386b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__image,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.image",   /* m_name */
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

MOD_INIT_DECL( django__utils__image )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__image );
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

    // puts( "in initdjango__utils__image" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__image = Py_InitModule4(
        "django.utils.image",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__image = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__image = (PyDictObject *)((PyModuleObject *)_module_django__utils__image)->md_dict;

    assertObject( _module_django__utils__image );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_e738cb01fb9731f7df53867340473848, _module_django__utils__image );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__image );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__image != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__image, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_cd1dd17fa836344a61bd72ec6cdc7955 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__image, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_dd21af0d52cc031e02a050264196dcd2 );
    PyFrameObject *frame_module_django__utils__image = MAKE_FRAME( _codeobj_fe714b3e798ad0cfa81b4f0b8f68eaad, _module_django__utils__image );

    FrameGuard frame_guard( frame_module_django__utils__image );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__image ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 70 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__image, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__utils__image)->md_dict, ((PyModuleObject *)_module_django__utils__image)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 72 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__image, (Nuitka_StringObject *)_python_str_plain_warnings, IMPORT_MODULE( _python_str_plain_warnings, ((PyModuleObject *)_module_django__utils__image)->md_dict, ((PyModuleObject *)_module_django__utils__image)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 74 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__image, (Nuitka_StringObject *)_python_str_plain_ImproperlyConfigured, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__utils__image)->md_dict, ((PyModuleObject *)_module_django__utils__image)->md_dict, _python_list_str_plain_ImproperlyConfigured_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImproperlyConfigured ) );
        frame_guard.setLineNumber( 75 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__image, (Nuitka_StringObject *)_python_str_plain__, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__utils__image)->md_dict, ((PyModuleObject *)_module_django__utils__image)->md_dict, _python_list_str_plain_ugettext_lazy_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ugettext_lazy ) );
        UPDATE_STRING_DICT0( _moduledict_django__utils__image, (Nuitka_StringObject *)_python_str_plain_Image, Py_None );
        UPDATE_STRING_DICT0( _moduledict_django__utils__image, (Nuitka_StringObject *)_python_str_plain__imaging, Py_None );
        UPDATE_STRING_DICT0( _moduledict_django__utils__image, (Nuitka_StringObject *)_python_str_plain_ImageFile, Py_None );
        UPDATE_STRING_DICT1( _moduledict_django__utils__image, (Nuitka_StringObject *)_python_str_plain__detect_image_library, MAKE_FUNCTION_function_1__detect_image_library_of_module_django__utils__image(  ) );
        {
            frame_guard.setLineNumber( 148 );
            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__image__detect_image_library.asObject0() ) ).asObject() ) );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
            UPDATE_STRING_DICT0( _moduledict_django__utils__image, (Nuitka_StringObject *)_python_str_plain_Image, _python_tmp_element_1.asObject() );
            UPDATE_STRING_DICT0( _moduledict_django__utils__image, (Nuitka_StringObject *)_python_str_plain__imaging, _python_tmp_element_2.asObject() );
            UPDATE_STRING_DICT0( _moduledict_django__utils__image, (Nuitka_StringObject *)_python_str_plain_ImageFile, _python_tmp_element_3.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__image)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__utils__image );
}
