// Generated code for Python source for module 'django.core.files.images'
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

// The _module_django__core__files__images is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__files__images;
PyDictObject *_moduledict_django__core__files__images;

// The module level variables.
static PyObjectGlobalVariable_django__core__files__images _mvar_django__core__files__images_File( &_module_django__core__files__images, &_python_str_plain_File );
static PyObjectGlobalVariable_django__core__files__images _mvar_django__core__files__images___metaclass__( &_module_django__core__files__images, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__files__images _mvar_django__core__files__images_get_image_dimensions( &_module_django__core__files__images, &_python_str_plain_get_image_dimensions );
static PyObjectGlobalVariable_django__core__files__images _mvar_django__core__files__images_zlib( &_module_django__core__files__images, &_python_str_plain_zlib );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_ImageFile_of_module_django__core__files__images(  );


static PyObject *MAKE_FUNCTION_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images(  );


static PyObject *MAKE_FUNCTION_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images(  );


static PyObject *MAKE_FUNCTION_function_2_get_image_dimensions_of_module_django__core__files__images(  );


static PyObject *MAKE_FUNCTION_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_ImageFile_of_module_django__core__files__images(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var__get_width( _python_str_plain__get_width );
    PyObjectLocalVariable _python_var_width( _python_str_plain_width );
    PyObjectLocalVariable _python_var__get_height( _python_str_plain__get_height );
    PyObjectLocalVariable _python_var_height( _python_str_plain_height );
    PyObjectLocalVariable _python_var__get_image_dimensions( _python_str_plain__get_image_dimensions );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_images );
    _python_var___doc__.assign0( _python_str_digest_0fa50cd77b699a753602485d3c0de643 );
    _python_var__get_width.assign1( MAKE_FUNCTION_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images(  ) );
    static PyFrameObject *frame_class_1_ImageFile_of_module_django__core__files__images = NULL;

    if ( isFrameUnusable( frame_class_1_ImageFile_of_module_django__core__files__images ) )
    {
        if ( frame_class_1_ImageFile_of_module_django__core__files__images )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_1_ImageFile_of_module_django__core__files__images" );
#endif
            Py_DECREF( frame_class_1_ImageFile_of_module_django__core__files__images );
        }

        frame_class_1_ImageFile_of_module_django__core__files__images = MAKE_FRAME( _codeobj_b37604cf1c0a17a583c33268f5c7ff17, _module_django__core__files__images );
    }

    FrameGuard frame_guard( frame_class_1_ImageFile_of_module_django__core__files__images );
    try
    {
        assert( Py_REFCNT( frame_class_1_ImageFile_of_module_django__core__files__images ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 18 );
        _python_var_width.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), _python_var__get_width.asObject() ) );
        _python_var__get_height.assign1( MAKE_FUNCTION_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images(  ) );
        frame_guard.setLineNumber( 22 );
        _python_var_height.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), _python_var__get_height.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var__get_image_dimensions.updateLocalsDict( _python_var_height.updateLocalsDict( _python_var__get_height.updateLocalsDict( _python_var_width.updateLocalsDict( _python_var__get_width.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_1_ImageFile_of_module_django__core__files__images )
        {
           Py_DECREF( frame_class_1_ImageFile_of_module_django__core__files__images );
           frame_class_1_ImageFile_of_module_django__core__files__images = NULL;
        }

        throw;
    }
    _python_var__get_image_dimensions.assign1( MAKE_FUNCTION_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images(  ) );
    return _python_var__get_image_dimensions.updateLocalsDict( _python_var_height.updateLocalsDict( _python_var__get_height.updateLocalsDict( _python_var_width.updateLocalsDict( _python_var__get_width.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );
}


static PyObject *impl_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images = NULL;

    if ( isFrameUnusable( frame_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images ) )
    {
        if ( frame_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images" );
#endif
            Py_DECREF( frame_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images );
        }

        frame_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images = MAKE_FRAME( _codeobj_88562c202eff50fd4efef844579b1e1e, _module_django__core__files__images );
    }

    FrameGuard frame_guard( frame_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images );
    try
    {
        assert( Py_REFCNT( frame_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 17 );
        return LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get_image_dimensions ) ).asObject() ) ).asObject(), _python_int_0, 0 );
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

        if ( frame_guard.getFrame0() == frame_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images )
        {
           Py_DECREF( frame_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images );
           frame_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_get_width() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_get_width() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_get_width() got multiple values for keyword argument 'self'" );
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
                   "_get_width() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_get_width() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_get_width() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_get_width() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_width() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_width() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_width() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_width() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_width() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_get_width() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_get_width() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_get_width() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_get_width() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_get_width() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images = NULL;

    if ( isFrameUnusable( frame_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images ) )
    {
        if ( frame_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images" );
#endif
            Py_DECREF( frame_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images );
        }

        frame_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images = MAKE_FRAME( _codeobj_910490d9c724bb70830b0a742e92840d, _module_django__core__files__images );
    }

    FrameGuard frame_guard( frame_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images );
    try
    {
        assert( Py_REFCNT( frame_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 21 );
        return LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get_image_dimensions ) ).asObject() ) ).asObject(), _python_int_pos_1, 1 );
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

        if ( frame_guard.getFrame0() == frame_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images )
        {
           Py_DECREF( frame_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images );
           frame_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_get_height() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_get_height() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_get_height() got multiple values for keyword argument 'self'" );
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
                   "_get_height() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_get_height() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_get_height() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_get_height() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_height() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_height() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_height() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_height() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_height() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_get_height() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_get_height() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_get_height() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_get_height() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_get_height() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_close( _python_str_plain_close );

    // Actual function code.
    static PyFrameObject *frame_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images = NULL;

    if ( isFrameUnusable( frame_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images ) )
    {
        if ( frame_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images" );
#endif
            Py_DECREF( frame_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images );
        }

        frame_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images = MAKE_FRAME( _codeobj_a809e3391fed33c475c0eb1a9ddcf01c, _module_django__core__files__images );
    }

    FrameGuard frame_guard( frame_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images );
    try
    {
        assert( Py_REFCNT( frame_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 25 );
        if ( (!( HAS_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__dimensions_cache ) )) )
        {
            frame_guard.setLineNumber( 26 );
            _python_var_close.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_closed ) );
            frame_guard.setLineNumber( 27 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_open ) ).asObject() ) );
            frame_guard.setLineNumber( 28 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper1 call2;
                {
                    PyObjectTemporary tmp_identifier( ( call1.assign( _mvar_django__core__files__images_get_image_dimensions.asObject0() ), call2.assign( MAKE_TUPLE1( _python_var_self.asObject() ) ), CALL_FUNCTION( call1.asObject0(), call2.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_close.asObject(), _python_str_plain_close ) ).asObject() ) ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__dimensions_cache );
            }
            }
        }
        frame_guard.setLineNumber( 29 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__dimensions_cache );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_close.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images )
        {
           Py_DECREF( frame_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images );
           frame_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_get_image_dimensions() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_get_image_dimensions() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_get_image_dimensions() got multiple values for keyword argument 'self'" );
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
                   "_get_image_dimensions() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_get_image_dimensions() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_get_image_dimensions() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_get_image_dimensions() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_image_dimensions() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_image_dimensions() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_image_dimensions() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_image_dimensions() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_image_dimensions() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_get_image_dimensions() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_get_image_dimensions() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_get_image_dimensions() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_get_image_dimensions() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_get_image_dimensions() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_get_image_dimensions_of_module_django__core__files__images( Nuitka_FunctionObject *self, PyObject *_python_par_file_or_path, PyObject *_python_par_close )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_file_or_path( _python_str_plain_file_or_path, _python_par_file_or_path );
    PyObjectLocalParameterVariableNoDel _python_var_close( _python_str_plain_close, _python_par_close );
    PyObjectLocalVariable _python_var_PILImageFile( _python_str_plain_PILImageFile );
    PyObjectLocalVariable _python_var_p( _python_str_plain_p );
    PyObjectLocalVariable _python_var_file( _python_str_plain_file );
    PyObjectLocalVariable _python_var_file_pos( _python_str_plain_file_pos );
    PyObjectLocalVariable _python_var_chunk_size( _python_str_plain_chunk_size );
    PyObjectLocalVariable _python_var_data( _python_str_plain_data );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );

    // Actual function code.
    static PyFrameObject *frame_function_2_get_image_dimensions_of_module_django__core__files__images = NULL;

    if ( isFrameUnusable( frame_function_2_get_image_dimensions_of_module_django__core__files__images ) )
    {
        if ( frame_function_2_get_image_dimensions_of_module_django__core__files__images )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_get_image_dimensions_of_module_django__core__files__images" );
#endif
            Py_DECREF( frame_function_2_get_image_dimensions_of_module_django__core__files__images );
        }

        frame_function_2_get_image_dimensions_of_module_django__core__files__images = MAKE_FRAME( _codeobj_a9df164b36c8152db8a4b7a549e92265, _module_django__core__files__images );
    }

    FrameGuard frame_guard( frame_function_2_get_image_dimensions_of_module_django__core__files__images );
    try
    {
        assert( Py_REFCNT( frame_function_2_get_image_dimensions_of_module_django__core__files__images ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 38 );
        _python_var_PILImageFile.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_e738cb01fb9731f7df53867340473848, ((PyModuleObject *)_module_django__core__files__images)->md_dict, PyObjectTemporary( _python_var_close.updateLocalsDict( _python_var_file_or_path.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_data.updateLocalsDict( _python_var_chunk_size.updateLocalsDict( _python_var_file_pos.updateLocalsDict( _python_var_file.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_PILImageFile.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_ImageFile_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImageFile ) );
        frame_guard.setLineNumber( 40 );
        _python_var_p.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_PILImageFile.asObject(), _python_str_plain_Parser ) ).asObject() ) );
        frame_guard.setLineNumber( 41 );
        if ( HAS_ATTRIBUTE( _python_var_file_or_path.asObject(), _python_str_plain_read ) )
        {
            frame_guard.setLineNumber( 42 );
            _python_var_file.assign0( _python_var_file_or_path.asObject() );
            frame_guard.setLineNumber( 43 );
            _python_var_file_pos.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_file.asObject(), _python_str_plain_tell ) ).asObject() ) );
            frame_guard.setLineNumber( 44 );
            DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_file.asObject(), _python_str_plain_seek ) ).asObject(), _python_int_0 ) );
        }
        else
        {
            frame_guard.setLineNumber( 46 );
            _python_var_file.assign1( OPEN_FILE( _python_var_file_or_path.asObject(), _python_str_plain_rb, NULL ) );
            _python_var_close.assign0( Py_True );
        }
        frame_guard.setLineNumber( 48 );
        PythonExceptionKeeper _caught_1;

        PyObjectTempKeeper1 _return_value_1;

        try
        {
            _python_var_chunk_size.assign0( _python_int_pos_1024 );
            frame_guard.setLineNumber( 53 );
            while( true )
            {
                frame_guard.setLineNumber( 54 );
                {
                    PyObjectTempKeeper1 call3;
                    _python_var_data.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_file.asObject(), _python_str_plain_read ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_chunk_size.asObject() ) ) );
                }
                frame_guard.setLineNumber( 55 );
                if ( (!( CHECK_IF_TRUE( _python_var_data.asObject() ) )) )
                {
                    frame_guard.setLineNumber( 56 );
                    break;
                }
                frame_guard.setLineNumber( 57 );
                try
                {
                    frame_guard.setLineNumber( 58 );
                    {
                        PyObjectTempKeeper1 call5;
                        DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_p.asObject(), _python_str_plain_feed ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_data.asObject() ) ) );
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

                    if ( _exception.matches( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__images_zlib.asObject0(), _python_str_plain_error ) ).asObject() ) )
                    {
                        frame_guard.detachFrame();
                        _python_var_e.assign0( _exception.getValue() );
                        frame_guard.setLineNumber( 62 );
                        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_args ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_startswith ) ).asObject(), _python_str_digest_0dcf93e5a8fa9930d28bf3fb41802ba3 ) ).asObject() ) )) )
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
                frame_guard.setLineNumber( 66 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_p.asObject(), _python_str_plain_image ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 67 );
                    throw ReturnValueException( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_p.asObject(), _python_str_plain_image ) ).asObject(), _python_str_plain_size ) );
                }
                frame_guard.setLineNumber( 68 );
                _python_var_chunk_size.assign1( BINARY_OPERATION_MUL( _python_var_chunk_size.asObject(), _python_int_pos_2 ) );

               CONSIDER_THREADING();
            }
            throw ReturnValueException( INCREASE_REFCOUNT( Py_None ) );
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
        frame_guard.setLineNumber( 71 );
        if ( CHECK_IF_TRUE( _python_var_close.asObject() ) )
        {
            frame_guard.setLineNumber( 72 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_file.asObject(), _python_str_plain_close ) ).asObject() ) );
        }
        else
        {
            frame_guard.setLineNumber( 74 );
            {
                PyObjectTempKeeper1 call1;
                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_file.asObject(), _python_str_plain_seek ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_file_pos.asObject() ) ) );
            }
        }
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
        frame_guard.getFrame0()->f_locals = _python_var_close.updateLocalsDict( _python_var_file_or_path.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_data.updateLocalsDict( _python_var_chunk_size.updateLocalsDict( _python_var_file_pos.updateLocalsDict( _python_var_file.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_PILImageFile.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_get_image_dimensions_of_module_django__core__files__images )
        {
           Py_DECREF( frame_function_2_get_image_dimensions_of_module_django__core__files__images );
           frame_function_2_get_image_dimensions_of_module_django__core__files__images = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_get_image_dimensions_of_module_django__core__files__images( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_file_or_path = NULL;
    PyObject *_python_par_close = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_image_dimensions() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_file_or_path == key )
            {
                if (unlikely( _python_par_file_or_path ))
                {
                    PyErr_Format( PyExc_TypeError, "get_image_dimensions() got multiple values for keyword argument 'file_or_path'" );
                    goto error_exit;
                }

                _python_par_file_or_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_close == key )
            {
                if (unlikely( _python_par_close ))
                {
                    PyErr_Format( PyExc_TypeError, "get_image_dimensions() got multiple values for keyword argument 'close'" );
                    goto error_exit;
                }

                _python_par_close = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file_or_path, key ) )
            {
                if (unlikely( _python_par_file_or_path ))
                {
                    PyErr_Format( PyExc_TypeError, "get_image_dimensions() got multiple values for keyword argument 'file_or_path'" );
                    goto error_exit;
                }

                _python_par_file_or_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_close, key ) )
            {
                if (unlikely( _python_par_close ))
                {
                    PyErr_Format( PyExc_TypeError, "get_image_dimensions() got multiple values for keyword argument 'close'" );
                    goto error_exit;
                }

                _python_par_close = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_image_dimensions() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_image_dimensions() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_image_dimensions() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_image_dimensions() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_image_dimensions() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_image_dimensions() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_image_dimensions() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_image_dimensions() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_image_dimensions() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_image_dimensions() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_image_dimensions() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_image_dimensions() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_image_dimensions() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_file_or_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_image_dimensions() got multiple values for keyword argument 'file_or_path'" );
             goto error_exit;
         }

        _python_par_file_or_path = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_close != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_image_dimensions() got multiple values for keyword argument 'close'" );
             goto error_exit;
         }

        _python_par_close = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_close == NULL )
    {
        _python_par_close = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_close );
    }


    return impl_function_2_get_image_dimensions_of_module_django__core__files__images( self, _python_par_file_or_path, _python_par_close );

error_exit:;

    Py_XDECREF( _python_par_file_or_path );
    Py_XDECREF( _python_par_close );

    return NULL;
}

static PyObject *dparse_function_2_get_image_dimensions_of_module_django__core__files__images( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_get_image_dimensions_of_module_django__core__files__images( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_get_image_dimensions_of_module_django__core__files__images( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images,
        dparse_function_1__get_width_of_class_1_ImageFile_of_module_django__core__files__images,
        _python_str_plain__get_width,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_88562c202eff50fd4efef844579b1e1e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__images,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images,
        dparse_function_2__get_height_of_class_1_ImageFile_of_module_django__core__files__images,
        _python_str_plain__get_height,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_910490d9c724bb70830b0a742e92840d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__images,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_image_dimensions_of_module_django__core__files__images(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_image_dimensions_of_module_django__core__files__images,
        dparse_function_2_get_image_dimensions_of_module_django__core__files__images,
        _python_str_plain_get_image_dimensions,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a9df164b36c8152db8a4b7a549e92265,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__images,
        _python_str_digest_1b0acc2db768ad3331466bb9868d9b77
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images,
        dparse_function_3__get_image_dimensions_of_class_1_ImageFile_of_module_django__core__files__images,
        _python_str_plain__get_image_dimensions,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a809e3391fed33c475c0eb1a9ddcf01c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__images,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.files.images",   /* m_name */
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

MOD_INIT_DECL( django__core__files__images )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__files__images );
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

    // puts( "in initdjango__core__files__images" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__files__images = Py_InitModule4(
        "django.core.files.images",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__files__images = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__files__images = (PyDictObject *)((PyModuleObject *)_module_django__core__files__images)->md_dict;

    assertObject( _module_django__core__files__images );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_4cd3b5cb91b95c05203a917d9598f4a7, _module_django__core__files__images );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__files__images );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__files__images != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__files__images, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_364c713ac9e48628cc0dc57ca1d83cb7 );
    UPDATE_STRING_DICT0( _moduledict_django__core__files__images, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_d1751674f37bd5f8a820d6e884f7f7ac );
    PyFrameObject *frame_module_django__core__files__images = MAKE_FRAME( _codeobj_1eb843046f770a7ef70d745def74064d, _module_django__core__files__images );

    FrameGuard frame_guard( frame_module_django__core__files__images );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__files__images ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__images, (Nuitka_StringObject *)_python_str_plain_zlib, IMPORT_MODULE( _python_str_plain_zlib, ((PyModuleObject *)_module_django__core__files__images)->md_dict, ((PyModuleObject *)_module_django__core__files__images)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__images, (Nuitka_StringObject *)_python_str_plain_File, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1c708a450f106db73723c5b9289df76d, ((PyModuleObject *)_module_django__core__files__images)->md_dict, ((PyModuleObject *)_module_django__core__files__images)->md_dict, _python_list_str_plain_File_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_File ) );
        {
            frame_guard.setLineNumber( 11 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__images_File.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_ImageFile_of_module_django__core__files__images(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__images___metaclass__.isInitialized( false ) ? _mvar_django__core__files__images___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_ImageFile, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__images, (Nuitka_StringObject *)_python_str_plain_ImageFile, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__files__images)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__core__files__images, (Nuitka_StringObject *)_python_str_plain_get_image_dimensions, MAKE_FUNCTION_function_2_get_image_dimensions_of_module_django__core__files__images(  ) );

   return MOD_RETURN_VALUE( _module_django__core__files__images );
}
