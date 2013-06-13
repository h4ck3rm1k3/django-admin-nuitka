// Generated code for Python source for module 'hmac'
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

// The _module_hmac is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_hmac;
PyDictObject *_moduledict_hmac;

// The module level variables.
static PyObjectGlobalVariable_hmac _mvar_hmac_HMAC( &_module_hmac, &_python_str_plain_HMAC );
static PyObjectGlobalVariable_hmac _mvar_hmac_RuntimeWarning( &_module_hmac, &_python_str_plain_RuntimeWarning );
static PyObjectGlobalVariable_hmac _mvar_hmac___metaclass__( &_module_hmac, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_hmac _mvar_hmac__secret_backdoor_key( &_module_hmac, &_python_str_plain__secret_backdoor_key );
static PyObjectGlobalVariable_hmac _mvar_hmac__warnings( &_module_hmac, &_python_str_plain__warnings );
static PyObjectGlobalVariable_hmac _mvar_hmac_trans_36( &_module_hmac, &_python_str_plain_trans_36 );
static PyObjectGlobalVariable_hmac _mvar_hmac_trans_5C( &_module_hmac, &_python_str_plain_trans_5C );
static PyObjectGlobalVariable_hmac _mvar_hmac_x( &_module_hmac, &_python_str_plain_x );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_module_hmac( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_module_hmac( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_HMAC_of_module_hmac(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_HMAC_of_module_hmac(  );


static PyObject *MAKE_FUNCTION_function_2_update_of_class_3_HMAC_of_module_hmac(  );


static PyObject *MAKE_FUNCTION_function_3_copy_of_class_3_HMAC_of_module_hmac(  );


static PyObject *MAKE_FUNCTION_function_4__current_of_class_3_HMAC_of_module_hmac(  );


static PyObject *MAKE_FUNCTION_function_4_new_of_module_hmac(  );


static PyObject *MAKE_FUNCTION_function_5_digest_of_class_3_HMAC_of_module_hmac(  );


static PyObject *MAKE_FUNCTION_function_6_hexdigest_of_class_3_HMAC_of_module_hmac(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac( PyObjectSharedLocalVariable &python_closure_digestmod );


// This structure is for attachment as self of lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac.
// It is allocated at the time the function object is created.
struct _context_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_digestmod;
};

static void _context_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac_destructor( void *context_voidptr )
{
    _context_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac_t *_python_context = (_context_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac_t *)context_voidptr;



    delete _python_context;
}


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_module_hmac( PyObject *_python_par___iterator )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 8 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 8 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                UPDATE_STRING_DICT0( _moduledict_hmac, (Nuitka_StringObject *)_python_str_plain_x, _python_tmp_iter_value.asObject() );
                APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( BUILTIN_CHR( PyObjectTemporary( BINARY_OPERATION( PyNumber_Xor, _mvar_hmac_x.asObject0(), _python_int_pos_92 ) ).asObject() ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_module_hmac( PyObject *_python_par___iterator )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 9 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 9 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                UPDATE_STRING_DICT0( _moduledict_hmac, (Nuitka_StringObject *)_python_str_plain_x, _python_tmp_iter_value.asObject() );
                APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( BUILTIN_CHR( PyObjectTemporary( BINARY_OPERATION( PyNumber_Xor, _mvar_hmac_x.asObject0(), _python_int_pos_54 ) ).asObject() ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_class_3_HMAC_of_module_hmac(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_blocksize( _python_str_plain_blocksize );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_update( _python_str_plain_update );
    PyObjectLocalVariable _python_var_copy( _python_str_plain_copy );
    PyObjectLocalVariable _python_var__current( _python_str_plain__current );
    PyObjectLocalVariable _python_var_digest( _python_str_plain_digest );
    PyObjectLocalVariable _python_var_hexdigest( _python_str_plain_hexdigest );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_hmac );
    _python_var___doc__.assign0( _python_str_digest_b8a483f3180f639a2cd524061c3474fa );
    _python_var_blocksize.assign0( _python_int_pos_64 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_HMAC_of_module_hmac(  ) );
    _python_var_update.assign1( MAKE_FUNCTION_function_2_update_of_class_3_HMAC_of_module_hmac(  ) );
    _python_var_copy.assign1( MAKE_FUNCTION_function_3_copy_of_class_3_HMAC_of_module_hmac(  ) );
    _python_var__current.assign1( MAKE_FUNCTION_function_4__current_of_class_3_HMAC_of_module_hmac(  ) );
    _python_var_digest.assign1( MAKE_FUNCTION_function_5_digest_of_class_3_HMAC_of_module_hmac(  ) );
    _python_var_hexdigest.assign1( MAKE_FUNCTION_function_6_hexdigest_of_class_3_HMAC_of_module_hmac(  ) );
    return _python_var_hexdigest.updateLocalsDict( _python_var_digest.updateLocalsDict( _python_var__current.updateLocalsDict( _python_var_copy.updateLocalsDict( _python_var_update.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_blocksize.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key, PyObject *_python_par_msg, PyObject *_python_par_digestmod )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_msg( _python_str_plain_msg, _python_par_msg );
    PyObjectSharedLocalVariable _python_var_digestmod( _python_str_plain_digestmod, _python_par_digestmod );
    PyObjectLocalVariable _python_var_hashlib( _python_str_plain_hashlib );
    PyObjectLocalVariable _python_var_blocksize( _python_str_plain_blocksize );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_HMAC_of_module_hmac = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_HMAC_of_module_hmac ) )
    {
        if ( frame_function_1___init___of_class_3_HMAC_of_module_hmac )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_HMAC_of_module_hmac" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_HMAC_of_module_hmac );
        }

        frame_function_1___init___of_class_3_HMAC_of_module_hmac = MAKE_FRAME( _codeobj_e6a375b711595a2f6795fef89774fdc2, _module_hmac );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_HMAC_of_module_hmac );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_HMAC_of_module_hmac ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 37 );
        if ( ( _python_var_key.asObject() == _mvar_hmac__secret_backdoor_key.asObject0() ) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 40 );
        if ( ( _python_var_digestmod.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 41 );
            _python_var_hashlib.assign1( IMPORT_MODULE( _python_str_plain_hashlib, ((PyModuleObject *)_module_hmac)->md_dict, PyObjectTemporary( _python_var_digestmod.updateLocalsDict( _python_var_msg.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_blocksize.updateLocalsDict( _python_var_hashlib.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
            frame_guard.setLineNumber( 42 );
            _python_var_digestmod.assign1( LOOKUP_ATTRIBUTE( _python_var_hashlib.asObject(), _python_str_plain_md5 ) );
        }
        frame_guard.setLineNumber( 44 );
        if ( HAS_ATTRIBUTE( _python_var_digestmod.asObject(), _python_str_plain___call__ ) )
        {
            frame_guard.setLineNumber( 45 );
            {
                    PyObject *tmp_identifier = _python_var_digestmod.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_digest_cons );
            }
        }
        else
        {
            frame_guard.setLineNumber( 47 );
            SET_ATTRIBUTE( PyObjectTemporary( MAKE_FUNCTION_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac( _python_var_digestmod ) ).asObject(), _python_var_self.asObject(), _python_str_plain_digest_cons );
        }
        frame_guard.setLineNumber( 49 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_digest_cons ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_outer );
        }
        frame_guard.setLineNumber( 50 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_digest_cons ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_inner );
        }
        frame_guard.setLineNumber( 51 );
        {
                PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_inner ) ).asObject(), _python_str_plain_digest_size ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_digest_size );
        }
        frame_guard.setLineNumber( 53 );
        if ( HAS_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_inner ) ).asObject(), _python_str_plain_block_size ) )
        {
            frame_guard.setLineNumber( 54 );
            _python_var_blocksize.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_inner ) ).asObject(), _python_str_plain_block_size ) );
            frame_guard.setLineNumber( 55 );
            if ( RICH_COMPARE_BOOL_LT( _python_var_blocksize.asObject(), _python_int_pos_16 ) )
            {
                frame_guard.setLineNumber( 58 );
                {
                    PyObjectTempKeeper1 call3;
                    PyObjectTempKeeper1 call4;
                    PyObjectTempKeeper0 make_tuple1;
                    DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_hmac__warnings.asObject0(), _python_str_plain_warn ) ), call4.assign( BINARY_OPERATION_REMAINDER( _python_str_digest_002b902e44362cbe5089876f09f2e761, PyObjectTemporary( ( make_tuple1.assign( _python_var_blocksize.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_blocksize ) ).asObject() ) ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _mvar_hmac_RuntimeWarning.asObject0(), _python_int_pos_2 ) ) );
                }
                frame_guard.setLineNumber( 61 );
                _python_var_blocksize.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_blocksize ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 63 );
            {
                PyObjectTempKeeper1 call7;
                PyObjectTempKeeper1 call8;
                DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar_hmac__warnings.asObject0(), _python_str_plain_warn ) ), call8.assign( BINARY_OPERATION_REMAINDER( _python_str_digest_8c92e67c1ae98abeb600475731d81bce, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_blocksize ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), call8.asObject0(), _mvar_hmac_RuntimeWarning.asObject0(), _python_int_pos_2 ) ) );
            }
            frame_guard.setLineNumber( 66 );
            _python_var_blocksize.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_blocksize ) );
        }
        frame_guard.setLineNumber( 68 );
        {
            PyObjectTempKeeper1 cmp13;
            if ( ( cmp13.assign( BUILTIN_LEN( _python_var_key.asObject() ) ), RICH_COMPARE_BOOL_GT( cmp13.asObject0(), _python_var_blocksize.asObject() ) ) )
        {
            frame_guard.setLineNumber( 69 );
            {
                PyObjectTempKeeper1 call11;
                _python_var_key.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call11.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_digest_cons ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_key.asObject() ) ) ).asObject(), _python_str_plain_digest ) ).asObject() ) );
            }
        }
        }
        frame_guard.setLineNumber( 71 );
        {
            PyObjectTempKeeper0 op15;
            PyObjectTempKeeper0 op17;
            _python_var_key.assign1( ( op17.assign( _python_var_key.asObject() ), BINARY_OPERATION_ADD( op17.asObject0(), PyObjectTemporary( BINARY_OPERATION_MUL( _python_str_chr_0, PyObjectTemporary( ( op15.assign( _python_var_blocksize.asObject() ), BINARY_OPERATION_SUB( op15.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_key.asObject() ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 72 );
        {
            PyObjectTempKeeper1 call19;
            PyObjectTempKeeper1 call21;
            DECREASE_REFCOUNT( ( call21.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_outer ) ).asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), PyObjectTemporary( ( call19.assign( LOOKUP_ATTRIBUTE( _python_var_key.asObject(), _python_str_plain_translate ) ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), _mvar_hmac_trans_5C.asObject0() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 73 );
        {
            PyObjectTempKeeper1 call23;
            PyObjectTempKeeper1 call25;
            DECREASE_REFCOUNT( ( call25.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_inner ) ).asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), PyObjectTemporary( ( call23.assign( LOOKUP_ATTRIBUTE( _python_var_key.asObject(), _python_str_plain_translate ) ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), _mvar_hmac_trans_36.asObject0() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 74 );
        if ( ( _python_var_msg.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 75 );
            {
                PyObjectTempKeeper1 call27;
                DECREASE_REFCOUNT( ( call27.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call27.asObject0(), _python_var_msg.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_digestmod.updateLocalsDict( _python_var_msg.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_blocksize.updateLocalsDict( _python_var_hashlib.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_HMAC_of_module_hmac )
        {
           Py_DECREF( frame_function_1___init___of_class_3_HMAC_of_module_hmac );
           frame_function_1___init___of_class_3_HMAC_of_module_hmac = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_key = NULL;
    PyObject *_python_par_msg = NULL;
    PyObject *_python_par_digestmod = NULL;
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
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_msg == key )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_digestmod == key )
            {
                if (unlikely( _python_par_digestmod ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'digestmod'" );
                    goto error_exit;
                }

                _python_par_digestmod = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_msg, key ) )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_digestmod, key ) )
            {
                if (unlikely( _python_par_digestmod ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'digestmod'" );
                    goto error_exit;
                }

                _python_par_digestmod = value;

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
    if (unlikely( args_given > 4 ))
    {
        if ( 4 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 2 )
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
    args_usable_count = args_given < 4 ? args_given : 4;

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
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_msg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'msg'" );
             goto error_exit;
         }

        _python_par_msg = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_digestmod != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'digestmod'" );
             goto error_exit;
         }

        _python_par_digestmod = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_msg == NULL )
    {
        _python_par_msg = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_msg );
    }
    if ( _python_par_digestmod == NULL )
    {
        _python_par_digestmod = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_digestmod );
    }


    return impl_function_1___init___of_class_3_HMAC_of_module_hmac( self, _python_par_self, _python_par_key, _python_par_msg, _python_par_digestmod );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_msg );
    Py_XDECREF( _python_par_digestmod );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___init___of_class_3_HMAC_of_module_hmac( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_HMAC_of_module_hmac( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject *_python_par_d )
{
    // The context of the function.
    struct _context_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac_t *_python_context = (struct _context_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_d( _python_str_plain_d, _python_par_d );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac ) )
    {
        if ( frame_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac );
        }

        frame_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac = MAKE_FRAME( _codeobj_e67401d454b5c302c109c2584fb8d9e5, _module_hmac );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 47 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _python_context->python_closure_digestmod.asObject(), _python_str_plain_new ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_d.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_d.updateLocalsDict( _python_context->python_closure_digestmod.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac );
           frame_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_d = NULL;
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
            if ( found == false && _python_str_plain_d == key )
            {
                if (unlikely( _python_par_d ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'd'" );
                    goto error_exit;
                }

                _python_par_d = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_d, key ) )
            {
                if (unlikely( _python_par_d ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'd'" );
                    goto error_exit;
                }

                _python_par_d = value;

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
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
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
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_d != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'd'" );
             goto error_exit;
         }

        _python_par_d = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_d == NULL )
    {
        _python_par_d = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_d );
    }


    return impl_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac( self, _python_par_d );

error_exit:;

    Py_XDECREF( _python_par_d );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_update_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_msg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_msg( _python_str_plain_msg, _python_par_msg );

    // Actual function code.
    static PyFrameObject *frame_function_2_update_of_class_3_HMAC_of_module_hmac = NULL;

    if ( isFrameUnusable( frame_function_2_update_of_class_3_HMAC_of_module_hmac ) )
    {
        if ( frame_function_2_update_of_class_3_HMAC_of_module_hmac )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_update_of_class_3_HMAC_of_module_hmac" );
#endif
            Py_DECREF( frame_function_2_update_of_class_3_HMAC_of_module_hmac );
        }

        frame_function_2_update_of_class_3_HMAC_of_module_hmac = MAKE_FRAME( _codeobj_09efacdc181e661a4dd777499a763a18, _module_hmac );
    }

    FrameGuard frame_guard( frame_function_2_update_of_class_3_HMAC_of_module_hmac );
    try
    {
        assert( Py_REFCNT( frame_function_2_update_of_class_3_HMAC_of_module_hmac ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 83 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_inner ) ).asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_msg.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_msg.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_update_of_class_3_HMAC_of_module_hmac )
        {
           Py_DECREF( frame_function_2_update_of_class_3_HMAC_of_module_hmac );
           frame_function_2_update_of_class_3_HMAC_of_module_hmac = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_update_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_msg = NULL;
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
                PyErr_Format( PyExc_TypeError, "update() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "update() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_msg == key )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "update() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "update() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_msg, key ) )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "update() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "update() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "update() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "update() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "update() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "update() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "update() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "update() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "update() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "update() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "update() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "update() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "update() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "update() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "update() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_msg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "update() got multiple values for keyword argument 'msg'" );
             goto error_exit;
         }

        _python_par_msg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_update_of_class_3_HMAC_of_module_hmac( self, _python_par_self, _python_par_msg );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_msg );

    return NULL;
}

static PyObject *dparse_function_2_update_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_update_of_class_3_HMAC_of_module_hmac( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_update_of_class_3_HMAC_of_module_hmac( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_copy_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_other( _python_str_plain_other );

    // Actual function code.
    static PyFrameObject *frame_function_3_copy_of_class_3_HMAC_of_module_hmac = NULL;

    if ( isFrameUnusable( frame_function_3_copy_of_class_3_HMAC_of_module_hmac ) )
    {
        if ( frame_function_3_copy_of_class_3_HMAC_of_module_hmac )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_copy_of_class_3_HMAC_of_module_hmac" );
#endif
            Py_DECREF( frame_function_3_copy_of_class_3_HMAC_of_module_hmac );
        }

        frame_function_3_copy_of_class_3_HMAC_of_module_hmac = MAKE_FRAME( _codeobj_2341dca48b11c82ec30ff4698cae835b, _module_hmac );
    }

    FrameGuard frame_guard( frame_function_3_copy_of_class_3_HMAC_of_module_hmac );
    try
    {
        assert( Py_REFCNT( frame_function_3_copy_of_class_3_HMAC_of_module_hmac ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 90 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_other.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _mvar_hmac__secret_backdoor_key.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 91 );
        {
                PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_digest_cons ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_other.asObject(), _python_str_plain_digest_cons );
        }
        frame_guard.setLineNumber( 92 );
        {
                PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_digest_size ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_other.asObject(), _python_str_plain_digest_size );
        }
        frame_guard.setLineNumber( 93 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_inner ) ).asObject(), _python_str_plain_copy ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_other.asObject(), _python_str_plain_inner );
        }
        frame_guard.setLineNumber( 94 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_outer ) ).asObject(), _python_str_plain_copy ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_other.asObject(), _python_str_plain_outer );
        }
        frame_guard.setLineNumber( 95 );
        return _python_var_other.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_other.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_copy_of_class_3_HMAC_of_module_hmac )
        {
           Py_DECREF( frame_function_3_copy_of_class_3_HMAC_of_module_hmac );
           frame_function_3_copy_of_class_3_HMAC_of_module_hmac = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_copy_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "copy() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "copy() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "copy() got multiple values for keyword argument 'self'" );
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
                   "copy() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "copy() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "copy() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "copy() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "copy() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "copy() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "copy() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "copy() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "copy() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "copy() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "copy() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "copy() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "copy() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "copy() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_copy_of_class_3_HMAC_of_module_hmac( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_copy_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_copy_of_class_3_HMAC_of_module_hmac( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_copy_of_class_3_HMAC_of_module_hmac( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__current_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_h( _python_str_plain_h );

    // Actual function code.
    static PyFrameObject *frame_function_4__current_of_class_3_HMAC_of_module_hmac = NULL;

    if ( isFrameUnusable( frame_function_4__current_of_class_3_HMAC_of_module_hmac ) )
    {
        if ( frame_function_4__current_of_class_3_HMAC_of_module_hmac )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4__current_of_class_3_HMAC_of_module_hmac" );
#endif
            Py_DECREF( frame_function_4__current_of_class_3_HMAC_of_module_hmac );
        }

        frame_function_4__current_of_class_3_HMAC_of_module_hmac = MAKE_FRAME( _codeobj_1693f9b5b3a18a3aadfd7d703e348267, _module_hmac );
    }

    FrameGuard frame_guard( frame_function_4__current_of_class_3_HMAC_of_module_hmac );
    try
    {
        assert( Py_REFCNT( frame_function_4__current_of_class_3_HMAC_of_module_hmac ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 102 );
        _python_var_h.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_outer ) ).asObject(), _python_str_plain_copy ) ).asObject() ) );
        frame_guard.setLineNumber( 103 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_h.asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_inner ) ).asObject(), _python_str_plain_digest ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 104 );
        return _python_var_h.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_h.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4__current_of_class_3_HMAC_of_module_hmac )
        {
           Py_DECREF( frame_function_4__current_of_class_3_HMAC_of_module_hmac );
           frame_function_4__current_of_class_3_HMAC_of_module_hmac = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4__current_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_current() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_current() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_current() got multiple values for keyword argument 'self'" );
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
                   "_current() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_current() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_current() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_current() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_current() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_current() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_current() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_current() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_current() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_current() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_current() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_current() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_current() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_current() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4__current_of_class_3_HMAC_of_module_hmac( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4__current_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4__current_of_class_3_HMAC_of_module_hmac( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__current_of_class_3_HMAC_of_module_hmac( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_digest_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_h( _python_str_plain_h );

    // Actual function code.
    static PyFrameObject *frame_function_5_digest_of_class_3_HMAC_of_module_hmac = NULL;

    if ( isFrameUnusable( frame_function_5_digest_of_class_3_HMAC_of_module_hmac ) )
    {
        if ( frame_function_5_digest_of_class_3_HMAC_of_module_hmac )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_digest_of_class_3_HMAC_of_module_hmac" );
#endif
            Py_DECREF( frame_function_5_digest_of_class_3_HMAC_of_module_hmac );
        }

        frame_function_5_digest_of_class_3_HMAC_of_module_hmac = MAKE_FRAME( _codeobj_0ee2e611b2f37256d7e22c963ace48b7, _module_hmac );
    }

    FrameGuard frame_guard( frame_function_5_digest_of_class_3_HMAC_of_module_hmac );
    try
    {
        assert( Py_REFCNT( frame_function_5_digest_of_class_3_HMAC_of_module_hmac ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 113 );
        _python_var_h.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__current ) ).asObject() ) );
        frame_guard.setLineNumber( 114 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_h.asObject(), _python_str_plain_digest ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_h.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5_digest_of_class_3_HMAC_of_module_hmac )
        {
           Py_DECREF( frame_function_5_digest_of_class_3_HMAC_of_module_hmac );
           frame_function_5_digest_of_class_3_HMAC_of_module_hmac = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_digest_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "digest() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "digest() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "digest() got multiple values for keyword argument 'self'" );
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
                   "digest() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "digest() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "digest() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "digest() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "digest() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "digest() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "digest() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "digest() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "digest() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "digest() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "digest() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "digest() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "digest() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "digest() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_digest_of_class_3_HMAC_of_module_hmac( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_digest_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_digest_of_class_3_HMAC_of_module_hmac( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_digest_of_class_3_HMAC_of_module_hmac( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_hexdigest_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_h( _python_str_plain_h );

    // Actual function code.
    static PyFrameObject *frame_function_6_hexdigest_of_class_3_HMAC_of_module_hmac = NULL;

    if ( isFrameUnusable( frame_function_6_hexdigest_of_class_3_HMAC_of_module_hmac ) )
    {
        if ( frame_function_6_hexdigest_of_class_3_HMAC_of_module_hmac )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_hexdigest_of_class_3_HMAC_of_module_hmac" );
#endif
            Py_DECREF( frame_function_6_hexdigest_of_class_3_HMAC_of_module_hmac );
        }

        frame_function_6_hexdigest_of_class_3_HMAC_of_module_hmac = MAKE_FRAME( _codeobj_7f6ac499bfd9db65a461c5018e7180b4, _module_hmac );
    }

    FrameGuard frame_guard( frame_function_6_hexdigest_of_class_3_HMAC_of_module_hmac );
    try
    {
        assert( Py_REFCNT( frame_function_6_hexdigest_of_class_3_HMAC_of_module_hmac ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 119 );
        _python_var_h.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__current ) ).asObject() ) );
        frame_guard.setLineNumber( 120 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_h.asObject(), _python_str_plain_hexdigest ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_h.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_6_hexdigest_of_class_3_HMAC_of_module_hmac )
        {
           Py_DECREF( frame_function_6_hexdigest_of_class_3_HMAC_of_module_hmac );
           frame_function_6_hexdigest_of_class_3_HMAC_of_module_hmac = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_hexdigest_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "hexdigest() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "hexdigest() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "hexdigest() got multiple values for keyword argument 'self'" );
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
                   "hexdigest() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "hexdigest() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "hexdigest() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "hexdigest() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "hexdigest() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "hexdigest() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "hexdigest() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "hexdigest() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "hexdigest() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "hexdigest() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "hexdigest() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "hexdigest() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "hexdigest() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "hexdigest() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6_hexdigest_of_class_3_HMAC_of_module_hmac( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6_hexdigest_of_class_3_HMAC_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_hexdigest_of_class_3_HMAC_of_module_hmac( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_hexdigest_of_class_3_HMAC_of_module_hmac( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_new_of_module_hmac( Nuitka_FunctionObject *self, PyObject *_python_par_key, PyObject *_python_par_msg, PyObject *_python_par_digestmod )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_msg( _python_str_plain_msg, _python_par_msg );
    PyObjectLocalParameterVariableNoDel _python_var_digestmod( _python_str_plain_digestmod, _python_par_digestmod );

    // Actual function code.
    static PyFrameObject *frame_function_4_new_of_module_hmac = NULL;

    if ( isFrameUnusable( frame_function_4_new_of_module_hmac ) )
    {
        if ( frame_function_4_new_of_module_hmac )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_new_of_module_hmac" );
#endif
            Py_DECREF( frame_function_4_new_of_module_hmac );
        }

        frame_function_4_new_of_module_hmac = MAKE_FRAME( _codeobj_b79d39740042a1b1b0b5e4224177c1ae, _module_hmac );
    }

    FrameGuard frame_guard( frame_function_4_new_of_module_hmac );
    try
    {
        assert( Py_REFCNT( frame_function_4_new_of_module_hmac ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 133 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper0 call3;
            return ( call1.assign( _mvar_hmac_HMAC.asObject0() ), call2.assign( _python_var_key.asObject() ), call3.assign( _python_var_msg.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_digestmod.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_digestmod.updateLocalsDict( _python_var_msg.updateLocalsDict( _python_var_key.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_new_of_module_hmac )
        {
           Py_DECREF( frame_function_4_new_of_module_hmac );
           frame_function_4_new_of_module_hmac = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_new_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_key = NULL;
    PyObject *_python_par_msg = NULL;
    PyObject *_python_par_digestmod = NULL;
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
                PyErr_Format( PyExc_TypeError, "new() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "new() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_msg == key )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "new() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_digestmod == key )
            {
                if (unlikely( _python_par_digestmod ))
                {
                    PyErr_Format( PyExc_TypeError, "new() got multiple values for keyword argument 'digestmod'" );
                    goto error_exit;
                }

                _python_par_digestmod = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "new() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_msg, key ) )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "new() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_digestmod, key ) )
            {
                if (unlikely( _python_par_digestmod ))
                {
                    PyErr_Format( PyExc_TypeError, "new() got multiple values for keyword argument 'digestmod'" );
                    goto error_exit;
                }

                _python_par_digestmod = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "new() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "new() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "new() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "new() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "new() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "new() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "new() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "new() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "new() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "new() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "new() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "new() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "new() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "new() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_msg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "new() got multiple values for keyword argument 'msg'" );
             goto error_exit;
         }

        _python_par_msg = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_digestmod != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "new() got multiple values for keyword argument 'digestmod'" );
             goto error_exit;
         }

        _python_par_digestmod = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_msg == NULL )
    {
        _python_par_msg = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_msg );
    }
    if ( _python_par_digestmod == NULL )
    {
        _python_par_digestmod = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_digestmod );
    }


    return impl_function_4_new_of_module_hmac( self, _python_par_key, _python_par_msg, _python_par_digestmod );

error_exit:;

    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_msg );
    Py_XDECREF( _python_par_digestmod );

    return NULL;
}

static PyObject *dparse_function_4_new_of_module_hmac( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_4_new_of_module_hmac( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_new_of_module_hmac( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_HMAC_of_module_hmac(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_HMAC_of_module_hmac,
        dparse_function_1___init___of_class_3_HMAC_of_module_hmac,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e6a375b711595a2f6795fef89774fdc2,
        INCREASE_REFCOUNT( _python_tuple_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_hmac,
        _python_str_digest_92ce7433203c0c0345acad3a7ff63e89
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_update_of_class_3_HMAC_of_module_hmac(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_update_of_class_3_HMAC_of_module_hmac,
        dparse_function_2_update_of_class_3_HMAC_of_module_hmac,
        _python_str_plain_update,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_09efacdc181e661a4dd777499a763a18,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_hmac,
        _python_str_digest_56460d513d7d3da39766f3ff800b2f9e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_copy_of_class_3_HMAC_of_module_hmac(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_copy_of_class_3_HMAC_of_module_hmac,
        dparse_function_3_copy_of_class_3_HMAC_of_module_hmac,
        _python_str_plain_copy,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2341dca48b11c82ec30ff4698cae835b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_hmac,
        _python_str_digest_ee8bfc9e6827b7f01c9d5cd5f96f0d59
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__current_of_class_3_HMAC_of_module_hmac(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__current_of_class_3_HMAC_of_module_hmac,
        dparse_function_4__current_of_class_3_HMAC_of_module_hmac,
        _python_str_plain__current,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1693f9b5b3a18a3aadfd7d703e348267,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_hmac,
        _python_str_digest_e34c3f6994daf8ecc09f48a5897c082b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_new_of_module_hmac(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_new_of_module_hmac,
        dparse_function_4_new_of_module_hmac,
        _python_str_plain_new,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b79d39740042a1b1b0b5e4224177c1ae,
        INCREASE_REFCOUNT( _python_tuple_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_hmac,
        _python_str_digest_403929d7f856475188e838c619f48214
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_digest_of_class_3_HMAC_of_module_hmac(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_digest_of_class_3_HMAC_of_module_hmac,
        dparse_function_5_digest_of_class_3_HMAC_of_module_hmac,
        _python_str_plain_digest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0ee2e611b2f37256d7e22c963ace48b7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_hmac,
        _python_str_digest_423ddd82ab0ca213c3763aa2523bfe02
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_hexdigest_of_class_3_HMAC_of_module_hmac(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_hexdigest_of_class_3_HMAC_of_module_hmac,
        dparse_function_6_hexdigest_of_class_3_HMAC_of_module_hmac,
        _python_str_plain_hexdigest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7f6ac499bfd9db65a461c5018e7180b4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_hmac,
        _python_str_digest_14742c2516e9a4e44c4f38a857844381
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac( PyObjectSharedLocalVariable &python_closure_digestmod )
{
    struct _context_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac_t *_python_context = new _context_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_digestmod.shareWith( python_closure_digestmod );

    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac,
        dparse_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e67401d454b5c302c109c2584fb8d9e5,
        INCREASE_REFCOUNT( _python_tuple_str_empty_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_hmac,
        Py_None,
        _python_context,
        _context_lambda_1_lambda_of_function_1___init___of_class_3_HMAC_of_module_hmac_destructor
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "hmac",   /* m_name */
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

MOD_INIT_DECL( hmac )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_hmac );
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

    // puts( "in inithmac" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_hmac = Py_InitModule4(
        "hmac",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_hmac = PyModule_Create( &_moduledef );
#endif

    _moduledict_hmac = (PyDictObject *)((PyModuleObject *)_module_hmac)->md_dict;

    assertObject( _module_hmac );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_plain_hmac, _module_hmac );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_hmac );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_hmac != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_hmac, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_0f6ec7336eb91e0229e900f0c57732de );
    UPDATE_STRING_DICT0( _moduledict_hmac, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_29d7cbf343f2677b3c6072d4e1e733d9 );
    PyFrameObject *frame_module_hmac = MAKE_FRAME( _codeobj_6a1d2bc8a36d972acc5eaf50e9da78bc, _module_hmac );

    FrameGuard frame_guard( frame_module_hmac );
    try
    {
        assert( Py_REFCNT( frame_module_hmac ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_hmac, (Nuitka_StringObject *)_python_str_plain__warnings, IMPORT_MODULE( _python_str_plain_warnings, ((PyModuleObject *)_module_hmac)->md_dict, ((PyModuleObject *)_module_hmac)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 8 );
        {
            PyObjectTempKeeper1 call1;
            UPDATE_STRING_DICT1( _moduledict_hmac, (Nuitka_StringObject *)_python_str_plain_trans_5C, ( call1.assign( LOOKUP_ATTRIBUTE( _python_str_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( impl_listcontr_1_of_module_hmac( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_xrange ), _python_int_pos_256 ) ).asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 9 );
        {
            PyObjectTempKeeper1 call3;
            UPDATE_STRING_DICT1( _moduledict_hmac, (Nuitka_StringObject *)_python_str_plain_trans_36, ( call3.assign( LOOKUP_ATTRIBUTE( _python_str_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( impl_listcontr_2_of_module_hmac( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_xrange ), _python_int_pos_256 ) ).asObject() ) ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT0( _moduledict_hmac, (Nuitka_StringObject *)_python_str_plain_digest_size, Py_None );
        UPDATE_STRING_DICT1( _moduledict_hmac, (Nuitka_StringObject *)_python_str_plain__secret_backdoor_key, PyList_New( 0 ) );
        {
            PyObject *_python_tmp_bases = _python_tuple_empty;
            frame_guard.setLineNumber( 20 );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_HMAC_of_module_hmac(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases, ( _mvar_hmac___metaclass__.isInitialized( false ) ? _mvar_hmac___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_HMAC, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_hmac, (Nuitka_StringObject *)_python_str_plain_HMAC, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_hmac)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_hmac, (Nuitka_StringObject *)_python_str_plain_new, MAKE_FUNCTION_function_4_new_of_module_hmac(  ) );

   return MOD_RETURN_VALUE( _module_hmac );
}
