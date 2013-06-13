// Generated code for Python source for module 'django.http'
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

// The _module_django__http is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__http;
PyDictObject *_moduledict_django__http;

// The module level variables.


// The module function declarations.


// The module function definitions.


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.http",   /* m_name */
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

MOD_INIT_DECL( django__http )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__http );
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

    // puts( "in initdjango__http" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__http = Py_InitModule4(
        "django.http",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__http = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__http = (PyDictObject *)((PyModuleObject *)_module_django__http)->md_dict;

    assertObject( _module_django__http );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_0086d976470a512ed29688abea23aec5, _module_django__http );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__http );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__http != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_5beab2fb97b9f66f92c4afee8ab12ab7 );
    UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain___path__, LIST_COPY( _python_list_str_digest_580a55b04b3e1dc1f695b1477b24ee6e_list ) );
    PyFrameObject *frame_module_django__http = MAKE_FRAME( _codeobj_adafdfc9ff124ed2601ee6aee6bc4324, _module_django__http );

    FrameGuard frame_guard( frame_module_django__http );
    try
    {
        assert( Py_REFCNT( frame_module_django__http ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_SimpleCookie, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_2ee87dfeb85457305bdd85e4ee04df60, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_str_plain_SimpleCookie_str_plain_parse_cookie_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SimpleCookie ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_parse_cookie, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_2ee87dfeb85457305bdd85e4ee04df60, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_str_plain_SimpleCookie_str_plain_parse_cookie_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_parse_cookie ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_HttpRequest, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_ccb3912ba37742f334666d2e1ef8d0fd, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_a03fcbb7a87a56f8a06f394143d0a163_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpRequest ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_QueryDict, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_ccb3912ba37742f334666d2e1ef8d0fd, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_a03fcbb7a87a56f8a06f394143d0a163_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_QueryDict ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_UnreadablePostError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_ccb3912ba37742f334666d2e1ef8d0fd, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_a03fcbb7a87a56f8a06f394143d0a163_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_UnreadablePostError ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_build_request_repr, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_ccb3912ba37742f334666d2e1ef8d0fd, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_a03fcbb7a87a56f8a06f394143d0a163_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_build_request_repr ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_HttpResponse, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpResponse ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_StreamingHttpResponse, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_StreamingHttpResponse ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_CompatibleStreamingHttpResponse, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_CompatibleStreamingHttpResponse ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_HttpResponsePermanentRedirect, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpResponsePermanentRedirect ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_HttpResponseRedirect, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpResponseRedirect ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_HttpResponseNotModified, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpResponseNotModified ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_HttpResponseBadRequest, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpResponseBadRequest ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_HttpResponseForbidden, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpResponseForbidden ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_HttpResponseNotFound, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpResponseNotFound ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_HttpResponseNotAllowed, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpResponseNotAllowed ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_HttpResponseGone, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpResponseGone ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_HttpResponseServerError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpResponseServerError ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_Http404, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Http404 ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_BadHeaderError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_582a8f61b990b3dc3da792da63dc14be, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_d46b7b371aa8a96f2cf24d27a88aaf7c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_BadHeaderError ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_fix_location_header, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_6933cf8b490800fa3e9ba6a44929bef4, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_895f50b215a982f91b7532f7202464c0_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_fix_location_header ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_conditional_content_removal, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_6933cf8b490800fa3e9ba6a44929bef4, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_895f50b215a982f91b7532f7202464c0_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_conditional_content_removal ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_fix_IE_for_attach, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_6933cf8b490800fa3e9ba6a44929bef4, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_895f50b215a982f91b7532f7202464c0_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_fix_IE_for_attach ) );
        UPDATE_STRING_DICT1( _moduledict_django__http, (Nuitka_StringObject *)_python_str_plain_fix_IE_for_vary, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_6933cf8b490800fa3e9ba6a44929bef4, ((PyModuleObject *)_module_django__http)->md_dict, ((PyModuleObject *)_module_django__http)->md_dict, _python_list_895f50b215a982f91b7532f7202464c0_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_fix_IE_for_vary ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__http)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__http );
}
