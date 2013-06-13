// Generated code for Python source for module 'django.db.models'
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

// The _module_django__db__models is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db__models;
PyDictObject *_moduledict_django__db__models;

// The module level variables.
static PyObjectGlobalVariable_django__db__models _mvar_django__db__models_wraps( &_module_django__db__models, &_python_str_plain_wraps );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_inner_of_function_1_permalink_of_module_django__db__models( PyObjectSharedLocalVariable &python_closure_func, PyObjectSharedLocalVariable &python_closure_reverse );


// This structure is for attachment as self of function_1_inner_of_function_1_permalink_of_module_django__db__models.
// It is allocated at the time the function object is created.
struct _context_function_1_inner_of_function_1_permalink_of_module_django__db__models_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_func;
    PyObjectClosureVariable python_closure_reverse;
};

static void _context_function_1_inner_of_function_1_permalink_of_module_django__db__models_destructor( void *context_voidptr )
{
    _context_function_1_inner_of_function_1_permalink_of_module_django__db__models_t *_python_context = (_context_function_1_inner_of_function_1_permalink_of_module_django__db__models_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1_permalink_of_module_django__db__models(  );


// The module function definitions.
static PyObject *impl_function_1_permalink_of_module_django__db__models( Nuitka_FunctionObject *self, PyObject *_python_par_func )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_func( _python_str_plain_func, _python_par_func );
    PyObjectSharedLocalVariable _python_var_reverse( _python_str_plain_reverse );
    PyObjectLocalVariable _python_var_inner( _python_str_plain_inner );

    // Actual function code.
    static PyFrameObject *frame_function_1_permalink_of_module_django__db__models = NULL;

    if ( isFrameUnusable( frame_function_1_permalink_of_module_django__db__models ) )
    {
        if ( frame_function_1_permalink_of_module_django__db__models )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_permalink_of_module_django__db__models" );
#endif
            Py_DECREF( frame_function_1_permalink_of_module_django__db__models );
        }

        frame_function_1_permalink_of_module_django__db__models = MAKE_FRAME( _codeobj_da16f767a7fecea956689af1d24a2307, _module_django__db__models );
    }

    FrameGuard frame_guard( frame_function_1_permalink_of_module_django__db__models );
    try
    {
        assert( Py_REFCNT( frame_function_1_permalink_of_module_django__db__models ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 28 );
        _python_var_reverse.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_4c07869702570273c29e851966a4b9ca, ((PyModuleObject *)_module_django__db__models)->md_dict, PyObjectTemporary( _python_var_func.updateLocalsDict( _python_var_inner.updateLocalsDict( _python_var_reverse.updateLocalsDict( PyDict_New() ) ) ) ).asObject(), _python_list_str_plain_reverse_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_reverse ) );
        frame_guard.setLineNumber( 29 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_inner.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( ( call1.assign( _mvar_django__db__models_wraps.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_func.asObject() ) ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_1_inner_of_function_1_permalink_of_module_django__db__models( _python_var_func, _python_var_reverse ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 33 );
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
        frame_guard.getFrame0()->f_locals = _python_var_func.updateLocalsDict( _python_var_inner.updateLocalsDict( _python_var_reverse.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_permalink_of_module_django__db__models )
        {
           Py_DECREF( frame_function_1_permalink_of_module_django__db__models );
           frame_function_1_permalink_of_module_django__db__models = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_permalink_of_module_django__db__models( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "permalink() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "permalink() got multiple values for keyword argument 'func'" );
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
                    PyErr_Format( PyExc_TypeError, "permalink() got multiple values for keyword argument 'func'" );
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
                   "permalink() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "permalink() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "permalink() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "permalink() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "permalink() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "permalink() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "permalink() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "permalink() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "permalink() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "permalink() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "permalink() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "permalink() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "permalink() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "permalink() got multiple values for keyword argument 'func'" );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_permalink_of_module_django__db__models( self, _python_par_func );

error_exit:;

    Py_XDECREF( _python_par_func );

    return NULL;
}

static PyObject *dparse_function_1_permalink_of_module_django__db__models( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_permalink_of_module_django__db__models( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_permalink_of_module_django__db__models( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_inner_of_function_1_permalink_of_module_django__db__models( Nuitka_FunctionObject *self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // The context of the function.
    struct _context_function_1_inner_of_function_1_permalink_of_module_django__db__models_t *_python_context = (struct _context_function_1_inner_of_function_1_permalink_of_module_django__db__models_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_bits( _python_str_plain_bits );

    // Actual function code.
    static PyFrameObject *frame_function_1_inner_of_function_1_permalink_of_module_django__db__models = NULL;

    if ( isFrameUnusable( frame_function_1_inner_of_function_1_permalink_of_module_django__db__models ) )
    {
        if ( frame_function_1_inner_of_function_1_permalink_of_module_django__db__models )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_inner_of_function_1_permalink_of_module_django__db__models" );
#endif
            Py_DECREF( frame_function_1_inner_of_function_1_permalink_of_module_django__db__models );
        }

        frame_function_1_inner_of_function_1_permalink_of_module_django__db__models = MAKE_FRAME( _codeobj_ec88213e934abceb2e8b2a7b45f7eae5, _module_django__db__models );
    }

    FrameGuard frame_guard( frame_function_1_inner_of_function_1_permalink_of_module_django__db__models );
    try
    {
        assert( Py_REFCNT( frame_function_1_inner_of_function_1_permalink_of_module_django__db__models ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 31 );
        {
            PyObjectTempKeeper0 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            _python_var_bits.assign1( ( call_tmp1.assign( _python_context->python_closure_func.asObject() ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) ) );
        }
        frame_guard.setLineNumber( 32 );
        {
            PyObjectTempKeeper0 call_tmp4;
            PyObjectTempKeeper1 call_tmp5;
            return ( call_tmp4.assign( _python_context->python_closure_reverse.asObject() ), call_tmp5.assign( MAKE_TUPLE2( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_bits.asObject(), _python_int_0, 0 ) ).asObject(), Py_None ) ), impl_function_5_complex_call_helper_pos_star_list_of_module___internal__( call_tmp4.asObject(), call_tmp5.asObject(), LOOKUP_INDEX_SLICE( _python_var_bits.asObject(), 1, 3 ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_context->python_closure_reverse.updateLocalsDict( _python_context->python_closure_func.updateLocalsDict( _python_var_bits.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_inner_of_function_1_permalink_of_module_django__db__models )
        {
           Py_DECREF( frame_function_1_inner_of_function_1_permalink_of_module_django__db__models );
           frame_function_1_inner_of_function_1_permalink_of_module_django__db__models = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_inner_of_function_1_permalink_of_module_django__db__models( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1_inner_of_function_1_permalink_of_module_django__db__models( self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1_inner_of_function_1_permalink_of_module_django__db__models( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_inner_of_function_1_permalink_of_module_django__db__models( self, MAKE_TUPLE( &args[ 0 ], size > 0 ? size-0 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_inner_of_function_1_permalink_of_module_django__db__models( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_inner_of_function_1_permalink_of_module_django__db__models( PyObjectSharedLocalVariable &python_closure_func, PyObjectSharedLocalVariable &python_closure_reverse )
{
    struct _context_function_1_inner_of_function_1_permalink_of_module_django__db__models_t *_python_context = new _context_function_1_inner_of_function_1_permalink_of_module_django__db__models_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_func.shareWith( python_closure_func );
    _python_context->python_closure_reverse.shareWith( python_closure_reverse );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_inner_of_function_1_permalink_of_module_django__db__models,
        dparse_function_1_inner_of_function_1_permalink_of_module_django__db__models,
        _python_str_plain_inner,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ec88213e934abceb2e8b2a7b45f7eae5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models,
        Py_None,
        _python_context,
        _context_function_1_inner_of_function_1_permalink_of_module_django__db__models_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_permalink_of_module_django__db__models(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_permalink_of_module_django__db__models,
        dparse_function_1_permalink_of_module_django__db__models,
        _python_str_plain_permalink,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_da16f767a7fecea956689af1d24a2307,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models,
        _python_str_digest_d824d2126b2d3244e1c1e1cc9b066001
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db.models",   /* m_name */
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

MOD_INIT_DECL( django__db__models )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db__models );
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

    // puts( "in initdjango__db__models" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db__models = Py_InitModule4(
        "django.db.models",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db__models = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db__models = (PyDictObject *)((PyModuleObject *)_module_django__db__models)->md_dict;

    assertObject( _module_django__db__models );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_cb8fece6bec5decd96c3feee6d1288d4, _module_django__db__models );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db__models );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db__models != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_280cc85d9899f22b92c5912d7e8b88a6 );
    UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain___path__, LIST_COPY( _python_list_str_digest_3bde427ce260448706effef298abe538_list ) );
    PyFrameObject *frame_module_django__db__models = MAKE_FRAME( _codeobj_6779e4b43bd5d613a5e8f6dd4276f49e, _module_django__db__models );

    FrameGuard frame_guard( frame_module_django__db__models );
    try
    {
        assert( Py_REFCNT( frame_module_django__db__models ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_wraps, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_functools, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_str_plain_wraps_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_wraps ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_ObjectDoesNotExist, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_str_plain_ObjectDoesNotExist_str_plain_ImproperlyConfigured_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ObjectDoesNotExist ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_ImproperlyConfigured, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_str_plain_ObjectDoesNotExist_str_plain_ImproperlyConfigured_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImproperlyConfigured ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_get_apps, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3499135d88f0bcb0b5db570911dd639, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_ffd6944f465120780764991d557e9c9f_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_apps ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_get_app_paths, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3499135d88f0bcb0b5db570911dd639, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_ffd6944f465120780764991d557e9c9f_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_app_paths ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_get_app, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3499135d88f0bcb0b5db570911dd639, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_ffd6944f465120780764991d557e9c9f_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_app ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_get_models, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3499135d88f0bcb0b5db570911dd639, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_ffd6944f465120780764991d557e9c9f_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_models ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_get_model, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3499135d88f0bcb0b5db570911dd639, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_ffd6944f465120780764991d557e9c9f_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_model ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_register_models, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3499135d88f0bcb0b5db570911dd639, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_ffd6944f465120780764991d557e9c9f_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_register_models ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_UnavailableApp, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3499135d88f0bcb0b5db570911dd639, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_ffd6944f465120780764991d557e9c9f_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_UnavailableApp ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_Q, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7724c9571b8badb7e606430d6fe9b7eb, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_str_plain_Q_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Q ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_F, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_8fc38f14b354961c11b4c2a3e28f5842, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_str_plain_F_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_F ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_Manager, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1c8eebaa8ea71ffa40946e237205aa8d, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_str_plain_Manager_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Manager ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_Model, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_b9e245945c635125fec435a5e0acf03b, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_str_plain_Model_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Model ) );
        frame_guard.setLineNumber( 9 );
        IMPORT_MODULE_STAR( _module_django__db__models, true, PyObjectTemporary( IMPORT_MODULE( _python_str_digest_8b0e4004c4fcac3df0a806fb7b8f511d, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_tuple_str_chr_42_tuple, _python_int_neg_1 ) ).asObject() );
        frame_guard.setLineNumber( 10 );
        IMPORT_MODULE_STAR( _module_django__db__models, true, PyObjectTemporary( IMPORT_MODULE( _python_str_digest_a15da66f68fa45171bbcd4f7a464bcd8, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_tuple_str_chr_42_tuple, _python_int_neg_1 ) ).asObject() );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_SubfieldBase, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_bd075b11ca30f793cd78575b910988dd, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_str_plain_SubfieldBase_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SubfieldBase ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_FileField, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d76b94e2d16340f3a61e043397601632, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_str_plain_FileField_str_plain_ImageField_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FileField ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_ImageField, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d76b94e2d16340f3a61e043397601632, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_str_plain_FileField_str_plain_ImageField_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImageField ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_ForeignKey, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_429a1979feac8a565a5c2aef69a2e26c, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4784c64d2c4936b7a7e928acef1f0cfc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ForeignKey ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_ForeignObject, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_429a1979feac8a565a5c2aef69a2e26c, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4784c64d2c4936b7a7e928acef1f0cfc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ForeignObject ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_OneToOneField, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_429a1979feac8a565a5c2aef69a2e26c, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4784c64d2c4936b7a7e928acef1f0cfc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_OneToOneField ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_ManyToManyField, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_429a1979feac8a565a5c2aef69a2e26c, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4784c64d2c4936b7a7e928acef1f0cfc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ManyToManyField ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_ManyToOneRel, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_429a1979feac8a565a5c2aef69a2e26c, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4784c64d2c4936b7a7e928acef1f0cfc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ManyToOneRel ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_ManyToManyRel, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_429a1979feac8a565a5c2aef69a2e26c, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4784c64d2c4936b7a7e928acef1f0cfc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ManyToManyRel ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_OneToOneRel, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_429a1979feac8a565a5c2aef69a2e26c, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4784c64d2c4936b7a7e928acef1f0cfc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_OneToOneRel ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_CASCADE, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_8638e65d7a0f1d4a4dd67c303bb33fe0, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4be0ce921b914e2ecb1f433f4622ff1d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_CASCADE ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_PROTECT, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_8638e65d7a0f1d4a4dd67c303bb33fe0, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4be0ce921b914e2ecb1f433f4622ff1d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_PROTECT ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_SET, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_8638e65d7a0f1d4a4dd67c303bb33fe0, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4be0ce921b914e2ecb1f433f4622ff1d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SET ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_SET_NULL, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_8638e65d7a0f1d4a4dd67c303bb33fe0, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4be0ce921b914e2ecb1f433f4622ff1d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SET_NULL ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_SET_DEFAULT, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_8638e65d7a0f1d4a4dd67c303bb33fe0, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4be0ce921b914e2ecb1f433f4622ff1d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SET_DEFAULT ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_DO_NOTHING, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_8638e65d7a0f1d4a4dd67c303bb33fe0, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4be0ce921b914e2ecb1f433f4622ff1d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DO_NOTHING ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_ProtectedError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_8638e65d7a0f1d4a4dd67c303bb33fe0, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_4be0ce921b914e2ecb1f433f4622ff1d_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ProtectedError ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_signals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_cb8fece6bec5decd96c3feee6d1288d4, ((PyModuleObject *)_module_django__db__models)->md_dict, ((PyModuleObject *)_module_django__db__models)->md_dict, _python_list_str_plain_signals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_signals ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db__models)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__db__models, (Nuitka_StringObject *)_python_str_plain_permalink, MAKE_FUNCTION_function_1_permalink_of_module_django__db__models(  ) );

   return MOD_RETURN_VALUE( _module_django__db__models );
}
