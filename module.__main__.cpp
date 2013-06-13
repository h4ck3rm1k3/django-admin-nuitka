// Generated code for Python source for module '__main__'
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

// The _module___main__ is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module___main__;
PyDictObject *_moduledict___main__;

// The module level variables.
static PyObjectGlobalVariable___main__ _mvar___main___management( &_module___main__, &_python_str_plain_management );

// The module function declarations.


// The module function definitions.


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "__main__",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#define _MODULE_UNFREEZER 1

#if _MODULE_UNFREEZER
// For embedded modules, to be unpacked. Used by main program/package only
extern void registerMetaPathBasedUnfreezer( struct _inittab *_frozen_modules );

// Our own inittab for lookup of "frozen" modules, i.e. the ones included in this binary.
static struct _inittab _frozen_modules[] =
{
    { (char *)"django", MOD_INIT_NAME( django ) },
    { (char *)"django.conf", MOD_INIT_NAME( django__conf ) },
    { (char *)"django.conf.global_settings", MOD_INIT_NAME( django__conf__global_settings ) },
    { (char *)"django.conf.urls", MOD_INIT_NAME( django__conf__urls ) },
    { (char *)"django.core", MOD_INIT_NAME( django__core ) },
    { (char *)"django.core.exceptions", MOD_INIT_NAME( django__core__exceptions ) },
    { (char *)"django.core.files", MOD_INIT_NAME( django__core__files ) },
    { (char *)"django.core.files.base", MOD_INIT_NAME( django__core__files__base ) },
    { (char *)"django.core.files.images", MOD_INIT_NAME( django__core__files__images ) },
    { (char *)"django.core.files.locks", MOD_INIT_NAME( django__core__files__locks ) },
    { (char *)"django.core.files.move", MOD_INIT_NAME( django__core__files__move ) },
    { (char *)"django.core.files.storage", MOD_INIT_NAME( django__core__files__storage ) },
    { (char *)"django.core.files.temp", MOD_INIT_NAME( django__core__files__temp ) },
    { (char *)"django.core.files.uploadedfile", MOD_INIT_NAME( django__core__files__uploadedfile ) },
    { (char *)"django.core.files.uploadhandler", MOD_INIT_NAME( django__core__files__uploadhandler ) },
    { (char *)"django.core.files.utils", MOD_INIT_NAME( django__core__files__utils ) },
    { (char *)"django.core.handlers", MOD_INIT_NAME( django__core__handlers ) },
    { (char *)"django.core.handlers.base", MOD_INIT_NAME( django__core__handlers__base ) },
    { (char *)"django.core.handlers.wsgi", MOD_INIT_NAME( django__core__handlers__wsgi ) },
    { (char *)"django.core.mail", MOD_INIT_NAME( django__core__mail ) },
    { (char *)"django.core.mail.message", MOD_INIT_NAME( django__core__mail__message ) },
    { (char *)"django.core.mail.utils", MOD_INIT_NAME( django__core__mail__utils ) },
    { (char *)"django.core.management", MOD_INIT_NAME( django__core__management ) },
    { (char *)"django.core.management.base", MOD_INIT_NAME( django__core__management__base ) },
    { (char *)"django.core.management.color", MOD_INIT_NAME( django__core__management__color ) },
    { (char *)"django.core.management.validation", MOD_INIT_NAME( django__core__management__validation ) },
    { (char *)"django.core.servers", MOD_INIT_NAME( django__core__servers ) },
    { (char *)"django.core.servers.basehttp", MOD_INIT_NAME( django__core__servers__basehttp ) },
    { (char *)"django.core.servers.fastcgi", MOD_INIT_NAME( django__core__servers__fastcgi ) },
    { (char *)"django.core.signals", MOD_INIT_NAME( django__core__signals ) },
    { (char *)"django.core.signing", MOD_INIT_NAME( django__core__signing ) },
    { (char *)"django.core.urlresolvers", MOD_INIT_NAME( django__core__urlresolvers ) },
    { (char *)"django.core.validators", MOD_INIT_NAME( django__core__validators ) },
    { (char *)"django.core.wsgi", MOD_INIT_NAME( django__core__wsgi ) },
    { (char *)"django.db", MOD_INIT_NAME( django__db ) },
    { (char *)"django.db.backends", MOD_INIT_NAME( django__db__backends ) },
    { (char *)"django.db.backends.signals", MOD_INIT_NAME( django__db__backends__signals ) },
    { (char *)"django.db.backends.util", MOD_INIT_NAME( django__db__backends__util ) },
    { (char *)"django.db.models", MOD_INIT_NAME( django__db__models ) },
    { (char *)"django.db.models.aggregates", MOD_INIT_NAME( django__db__models__aggregates ) },
    { (char *)"django.db.models.base", MOD_INIT_NAME( django__db__models__base ) },
    { (char *)"django.db.models.constants", MOD_INIT_NAME( django__db__models__constants ) },
    { (char *)"django.db.models.deletion", MOD_INIT_NAME( django__db__models__deletion ) },
    { (char *)"django.db.models.expressions", MOD_INIT_NAME( django__db__models__expressions ) },
    { (char *)"django.db.models.fields", MOD_INIT_NAME( django__db__models__fields ) },
    { (char *)"django.db.models.fields.files", MOD_INIT_NAME( django__db__models__fields__files ) },
    { (char *)"django.db.models.fields.proxy", MOD_INIT_NAME( django__db__models__fields__proxy ) },
    { (char *)"django.db.models.fields.related", MOD_INIT_NAME( django__db__models__fields__related ) },
    { (char *)"django.db.models.fields.subclassing", MOD_INIT_NAME( django__db__models__fields__subclassing ) },
    { (char *)"django.db.models.loading", MOD_INIT_NAME( django__db__models__loading ) },
    { (char *)"django.db.models.manager", MOD_INIT_NAME( django__db__models__manager ) },
    { (char *)"django.db.models.options", MOD_INIT_NAME( django__db__models__options ) },
    { (char *)"django.db.models.query", MOD_INIT_NAME( django__db__models__query ) },
    { (char *)"django.db.models.query_utils", MOD_INIT_NAME( django__db__models__query_utils ) },
    { (char *)"django.db.models.related", MOD_INIT_NAME( django__db__models__related ) },
    { (char *)"django.db.models.signals", MOD_INIT_NAME( django__db__models__signals ) },
    { (char *)"django.db.models.sql", MOD_INIT_NAME( django__db__models__sql ) },
    { (char *)"django.db.models.sql.aggregates", MOD_INIT_NAME( django__db__models__sql__aggregates ) },
    { (char *)"django.db.models.sql.constants", MOD_INIT_NAME( django__db__models__sql__constants ) },
    { (char *)"django.db.models.sql.datastructures", MOD_INIT_NAME( django__db__models__sql__datastructures ) },
    { (char *)"django.db.models.sql.expressions", MOD_INIT_NAME( django__db__models__sql__expressions ) },
    { (char *)"django.db.models.sql.query", MOD_INIT_NAME( django__db__models__sql__query ) },
    { (char *)"django.db.models.sql.subqueries", MOD_INIT_NAME( django__db__models__sql__subqueries ) },
    { (char *)"django.db.models.sql.where", MOD_INIT_NAME( django__db__models__sql__where ) },
    { (char *)"django.db.transaction", MOD_INIT_NAME( django__db__transaction ) },
    { (char *)"django.db.utils", MOD_INIT_NAME( django__db__utils ) },
    { (char *)"django.dispatch", MOD_INIT_NAME( django__dispatch ) },
    { (char *)"django.dispatch.dispatcher", MOD_INIT_NAME( django__dispatch__dispatcher ) },
    { (char *)"django.dispatch.saferef", MOD_INIT_NAME( django__dispatch__saferef ) },
    { (char *)"django.forms", MOD_INIT_NAME( django__forms ) },
    { (char *)"django.forms.fields", MOD_INIT_NAME( django__forms__fields ) },
    { (char *)"django.forms.forms", MOD_INIT_NAME( django__forms__forms ) },
    { (char *)"django.forms.formsets", MOD_INIT_NAME( django__forms__formsets ) },
    { (char *)"django.forms.models", MOD_INIT_NAME( django__forms__models ) },
    { (char *)"django.forms.util", MOD_INIT_NAME( django__forms__util ) },
    { (char *)"django.forms.widgets", MOD_INIT_NAME( django__forms__widgets ) },
    { (char *)"django.http", MOD_INIT_NAME( django__http ) },
    { (char *)"django.http.cookie", MOD_INIT_NAME( django__http__cookie ) },
    { (char *)"django.http.multipartparser", MOD_INIT_NAME( django__http__multipartparser ) },
    { (char *)"django.http.request", MOD_INIT_NAME( django__http__request ) },
    { (char *)"django.http.response", MOD_INIT_NAME( django__http__response ) },
    { (char *)"django.http.utils", MOD_INIT_NAME( django__http__utils ) },
    { (char *)"django.template", MOD_INIT_NAME( django__template ) },
    { (char *)"django.template.base", MOD_INIT_NAME( django__template__base ) },
    { (char *)"django.template.context", MOD_INIT_NAME( django__template__context ) },
    { (char *)"django.template.debug", MOD_INIT_NAME( django__template__debug ) },
    { (char *)"django.template.defaultfilters", MOD_INIT_NAME( django__template__defaultfilters ) },
    { (char *)"django.template.loader", MOD_INIT_NAME( django__template__loader ) },
    { (char *)"django.utils", MOD_INIT_NAME( django__utils ) },
    { (char *)"django.utils._os", MOD_INIT_NAME( django__utils___os ) },
    { (char *)"django.utils.baseconv", MOD_INIT_NAME( django__utils__baseconv ) },
    { (char *)"django.utils.crypto", MOD_INIT_NAME( django__utils__crypto ) },
    { (char *)"django.utils.daemonize", MOD_INIT_NAME( django__utils__daemonize ) },
    { (char *)"django.utils.datastructures", MOD_INIT_NAME( django__utils__datastructures ) },
    { (char *)"django.utils.dateformat", MOD_INIT_NAME( django__utils__dateformat ) },
    { (char *)"django.utils.dateparse", MOD_INIT_NAME( django__utils__dateparse ) },
    { (char *)"django.utils.dates", MOD_INIT_NAME( django__utils__dates ) },
    { (char *)"django.utils.datetime_safe", MOD_INIT_NAME( django__utils__datetime_safe ) },
    { (char *)"django.utils.decorators", MOD_INIT_NAME( django__utils__decorators ) },
    { (char *)"django.utils.deprecation", MOD_INIT_NAME( django__utils__deprecation ) },
    { (char *)"django.utils.dictconfig", MOD_INIT_NAME( django__utils__dictconfig ) },
    { (char *)"django.utils.encoding", MOD_INIT_NAME( django__utils__encoding ) },
    { (char *)"django.utils.formats", MOD_INIT_NAME( django__utils__formats ) },
    { (char *)"django.utils.functional", MOD_INIT_NAME( django__utils__functional ) },
    { (char *)"django.utils.html", MOD_INIT_NAME( django__utils__html ) },
    { (char *)"django.utils.html_parser", MOD_INIT_NAME( django__utils__html_parser ) },
    { (char *)"django.utils.http", MOD_INIT_NAME( django__utils__http ) },
    { (char *)"django.utils.image", MOD_INIT_NAME( django__utils__image ) },
    { (char *)"django.utils.importlib", MOD_INIT_NAME( django__utils__importlib ) },
    { (char *)"django.utils.ipv6", MOD_INIT_NAME( django__utils__ipv6 ) },
    { (char *)"django.utils.itercompat", MOD_INIT_NAME( django__utils__itercompat ) },
    { (char *)"django.utils.log", MOD_INIT_NAME( django__utils__log ) },
    { (char *)"django.utils.module_loading", MOD_INIT_NAME( django__utils__module_loading ) },
    { (char *)"django.utils.numberformat", MOD_INIT_NAME( django__utils__numberformat ) },
    { (char *)"django.utils.regex_helper", MOD_INIT_NAME( django__utils__regex_helper ) },
    { (char *)"django.utils.safestring", MOD_INIT_NAME( django__utils__safestring ) },
    { (char *)"django.utils.six", MOD_INIT_NAME( django__utils__six ) },
    { (char *)"django.utils.termcolors", MOD_INIT_NAME( django__utils__termcolors ) },
    { (char *)"django.utils.text", MOD_INIT_NAME( django__utils__text ) },
    { (char *)"django.utils.timesince", MOD_INIT_NAME( django__utils__timesince ) },
    { (char *)"django.utils.timezone", MOD_INIT_NAME( django__utils__timezone ) },
    { (char *)"django.utils.translation", MOD_INIT_NAME( django__utils__translation ) },
    { (char *)"django.utils.translation.trans_null", MOD_INIT_NAME( django__utils__translation__trans_null ) },
    { (char *)"django.utils.translation.trans_real", MOD_INIT_NAME( django__utils__translation__trans_real ) },
    { (char *)"django.utils.tree", MOD_INIT_NAME( django__utils__tree ) },
    { (char *)"django.utils.tzinfo", MOD_INIT_NAME( django__utils__tzinfo ) },
    { (char *)"django.utils.version", MOD_INIT_NAME( django__utils__version ) },
    { (char *)"django.views", MOD_INIT_NAME( django__views ) },
    { (char *)"django.views.debug", MOD_INIT_NAME( django__views__debug ) },
    { (char *)"hashlib", MOD_INIT_NAME( hashlib ) },
    { (char *)"hmac", MOD_INIT_NAME( hmac ) },
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

MOD_INIT_DECL( __main__ )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module___main__ );
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

    // puts( "in init__main__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module___main__ = Py_InitModule4(
        "__main__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module___main__ = PyModule_Create( &_moduledef );
#endif

    _moduledict___main__ = (PyDictObject *)((PyModuleObject *)_module___main__)->md_dict;

    assertObject( _module___main__ );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_plain___main__, _module___main__ );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module___main__ );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module___main__ != _module___main__ )
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
    DECREASE_REFCOUNT( IMPORT_MODULE( _python_str_plain_site, ((PyModuleObject *)_module___main__)->md_dict, ((PyModuleObject *)_module___main__)->md_dict, _python_tuple_empty, _python_int_neg_1 ) );
    UPDATE_STRING_DICT0( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_da314198d50df6ced48d313d52db3063 );
    PyFrameObject *frame_module___main__ = MAKE_FRAME( _codeobj_9f4201e7fdcecb4d1c43caeff20b2b34, _module___main__ );

    FrameGuard frame_guard( frame_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain_management, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7fde38a6b8ad78c8ebb1bdff593c9e48, ((PyModuleObject *)_module___main__)->md_dict, ((PyModuleObject *)_module___main__)->md_dict, _python_list_str_plain_management_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_management ) );
        frame_guard.setLineNumber( 5 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar___main___management.asObject0(), _python_str_plain_execute_from_command_line ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module___main__)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module___main__ );
}
// The main program for C++. It needs to prepare the interpreter and then calls the
// initialization code of the __main__ module.

#include "structseq.h"

int main( int argc, char *argv[] )
{
#ifdef _NUITKA_PORTABLE
    _initPortableEnvironment( argv[0] );
#endif

    // Initialize Python environment.
    Py_DebugFlag = 0;
#if 0
    Py_Py3kWarningFlag = 0;
#endif
#if 0
    Py_DivisionWarningFlag =
#if 0
        Py_Py3kWarningFlag ||
#endif
        0;
#endif
    Py_InspectFlag = 0;
    Py_InteractiveFlag = 0;
    Py_OptimizeFlag = 0;
    Py_DontWriteBytecodeFlag = 0;
    Py_NoUserSiteDirectory = 0;
    Py_IgnoreEnvironmentFlag = 0;
#if 0
    Py_TabcheckFlag = 0;
#endif
    Py_VerboseFlag = 0;
#if 0
    Py_UnicodeFlag = 0;
#endif
    Py_BytesWarningFlag = 0;
#if 0
    Py_HashRandomizationFlag = 0;
#endif

    // We want to import the site module, but only after we finished our own
    // setup. The site module import will be the first thing, the main module
    // does.
    Py_NoSiteFlag = 1;

    // Initialize the embedded CPython interpreter.
    Py_Initialize();

    // Lie about it, believe it or not, there are "site" files, that check
    // against later imports, see below.
    Py_NoSiteFlag = 0;

    // Set the command line parameters
    setCommandLineParameters( argc, argv );

    // Initialize the constant values used.
    _initBuiltinModule();
    _initConstants();
    //    _initBuiltinOriginalValues(); this function does not exists

    // Revert the wrong sys.flags value, it's used by "site" on at least Debian
    // for Python3.3, more uses may exist.
#if PYTHON_VERSION >= 330
    PyStructSequence_SetItem( PySys_GetObject( "flags" ), 6, _python_int_0 );
#elif PYTHON_VERSION >= 320
    PyStructSequence_SetItem( PySys_GetObject( "flags" ), 7, _python_int_0 );
#elif PYTHON_VERSION >= 260
    PyStructSequence_SET_ITEM( PySys_GetObject( (char *)"flags" ), 9, _python_int_0 );
#endif

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );

    enhancePythonTypes();

    // Set the sys.executable path to the original Python executable on Linux
    // or to python.exe on Windows.
    PySys_SetObject(
        (char *)"executable",
        _python_str_digest_e1ca04af87f90d677d1e2f016e9fa2df
    );

    patchInspectModule();
    patchBuiltinModule();

    // Execute the "__main__" module init function.
    MOD_INIT_NAME( __main__ )();

    if ( ERROR_OCCURED() )
    {
        // Cleanup code may need a frame, so put one back.
        PyThreadState_GET()->frame = MAKE_FRAME( _codeobj_9f4201e7fdcecb4d1c43caeff20b2b34, _module___main__ );

        PyErr_PrintEx( 0 );
        Py_Exit( 1 );
    }
    else
    {
        Py_Exit( 0 );
    }
}
