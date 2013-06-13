// Generated code for Python source for module 'django.template'
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

// The _module_django__template is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__template;
PyDictObject *_moduledict_django__template;

// The module level variables.


// The module function declarations.


// The module function definitions.


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.template",   /* m_name */
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

MOD_INIT_DECL( django__template )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__template );
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

    // puts( "in initdjango__template" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__template = Py_InitModule4(
        "django.template",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__template = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__template = (PyDictObject *)((PyModuleObject *)_module_django__template)->md_dict;

    assertObject( _module_django__template );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_2c787db14d44c2e8d2ef6ec28149f0b6, _module_django__template );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__template );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__template != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_7075283be21af87febb8f99021c2981d );
    UPDATE_STRING_DICT0( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_0d148d72d0e821ddb38d14e5e205b7a2 );
    UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain___path__, LIST_COPY( _python_list_str_digest_bf71928398c9a091c3f7e69397226042_list ) );
    PyFrameObject *frame_module_django__template = MAKE_FRAME( _codeobj_4d7643bf36491c15b965df262c466feb, _module_django__template );

    FrameGuard frame_guard( frame_module_django__template );
    try
    {
        assert( Py_REFCNT( frame_module_django__template ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 53 );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_ALLOWED_VARIABLE_CHARS, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ALLOWED_VARIABLE_CHARS ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_BLOCK_TAG_END, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_BLOCK_TAG_END ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_BLOCK_TAG_START, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_BLOCK_TAG_START ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_COMMENT_TAG_END, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_COMMENT_TAG_END ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_COMMENT_TAG_START, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_COMMENT_TAG_START ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_FILTER_ARGUMENT_SEPARATOR, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FILTER_ARGUMENT_SEPARATOR ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_FILTER_SEPARATOR, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FILTER_SEPARATOR ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_SINGLE_BRACE_END, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SINGLE_BRACE_END ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_SINGLE_BRACE_START, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SINGLE_BRACE_START ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_TOKEN_BLOCK, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TOKEN_BLOCK ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_TOKEN_COMMENT, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TOKEN_COMMENT ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_TOKEN_TEXT, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TOKEN_TEXT ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_TOKEN_VAR, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TOKEN_VAR ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_TRANSLATOR_COMMENT_MARK, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TRANSLATOR_COMMENT_MARK ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_UNKNOWN_SOURCE, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_UNKNOWN_SOURCE ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_VARIABLE_ATTRIBUTE_SEPARATOR, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_VARIABLE_ATTRIBUTE_SEPARATOR ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_VARIABLE_TAG_END, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_VARIABLE_TAG_END ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_VARIABLE_TAG_START, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_VARIABLE_TAG_START ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_filter_re, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_filter_re ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_tag_re, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_8c9859fe7b5373eb7476a36f43bb2267_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_tag_re ) );
        frame_guard.setLineNumber( 61 );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_ContextPopException, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_dff59dd2a5e48000ed2d732bdd472151_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ContextPopException ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_InvalidTemplateLibrary, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_dff59dd2a5e48000ed2d732bdd472151_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_InvalidTemplateLibrary ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_TemplateDoesNotExist, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_dff59dd2a5e48000ed2d732bdd472151_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TemplateDoesNotExist ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_TemplateEncodingError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_dff59dd2a5e48000ed2d732bdd472151_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TemplateEncodingError ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_TemplateSyntaxError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_dff59dd2a5e48000ed2d732bdd472151_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TemplateSyntaxError ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_VariableDoesNotExist, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_dff59dd2a5e48000ed2d732bdd472151_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_VariableDoesNotExist ) );
        frame_guard.setLineNumber( 66 );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_Context, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Context ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_FilterExpression, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FilterExpression ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_Lexer, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Lexer ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_Node, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Node ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_NodeList, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_NodeList ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_Parser, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Parser ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_RequestContext, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_RequestContext ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_Origin, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Origin ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_StringOrigin, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_StringOrigin ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_Template, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Template ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_TextNode, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TextNode ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_Token, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Token ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_TokenParser, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TokenParser ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_Variable, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Variable ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_VariableNode, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_VariableNode ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_constant_string, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_constant_string ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_filter_raw_string, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_5aea3035bf646cdf3c76ffd5889744fb_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_filter_raw_string ) );
        frame_guard.setLineNumber( 72 );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_compile_string, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_f11f75b6f7652f26126f49c7a4bdeac2_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_compile_string ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_resolve_variable, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_f11f75b6f7652f26126f49c7a4bdeac2_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_resolve_variable ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_unescape_string_literal, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_f11f75b6f7652f26126f49c7a4bdeac2_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unescape_string_literal ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_generic_tag_compiler, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_f11f75b6f7652f26126f49c7a4bdeac2_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_generic_tag_compiler ) );
        frame_guard.setLineNumber( 76 );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_Library, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_0743379db756dd6be546b4956dfc920d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Library ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_add_to_builtins, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_0743379db756dd6be546b4956dfc920d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_add_to_builtins ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_builtins, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_0743379db756dd6be546b4956dfc920d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_builtins ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_get_library, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_0743379db756dd6be546b4956dfc920d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_library ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_get_templatetags_modules, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_0743379db756dd6be546b4956dfc920d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_templatetags_modules ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_get_text_list, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_0743379db756dd6be546b4956dfc920d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_text_list ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_import_library, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_0743379db756dd6be546b4956dfc920d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_library ) );
        UPDATE_STRING_DICT1( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain_libraries, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template)->md_dict, ((PyModuleObject *)_module_django__template)->md_dict, _python_list_0743379db756dd6be546b4956dfc920d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_libraries ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__template)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT0( _moduledict_django__template, (Nuitka_StringObject *)_python_str_plain___all__, _python_tuple_116fbeb66f8159935c2f1a94bce13c27_tuple );

   return MOD_RETURN_VALUE( _module_django__template );
}
