// Generated code for Python source for module 'django.core.mail'
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

// The _module_django__core__mail is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__mail;
PyDictObject *_moduledict_django__core__mail;

// The module level variables.
static PyObjectGlobalVariable_django__core__mail _mvar_django__core__mail_EmailMessage( &_module_django__core__mail, &_python_str_plain_EmailMessage );
static PyObjectGlobalVariable_django__core__mail _mvar_django__core__mail_EmailMultiAlternatives( &_module_django__core__mail, &_python_str_plain_EmailMultiAlternatives );
static PyObjectGlobalVariable_django__core__mail _mvar_django__core__mail_get_connection( &_module_django__core__mail, &_python_str_plain_get_connection );
static PyObjectGlobalVariable_django__core__mail _mvar_django__core__mail_import_by_path( &_module_django__core__mail, &_python_str_plain_import_by_path );
static PyObjectGlobalVariable_django__core__mail _mvar_django__core__mail_settings( &_module_django__core__mail, &_python_str_plain_settings );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_send_mass_mail_of_module_django__core__mail( PyObject *_python_par___iterator, PyObjectLocalParameterVariableNoDel &python_closure_connection, PyObjectLocalVariable &python_closure_message, PyObjectLocalVariable &python_closure_recipient, PyObjectLocalVariable &python_closure_sender, PyObjectLocalVariable &python_closure_subject );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_4_mail_admins_of_module_django__core__mail( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_a );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_5_mail_managers_of_module_django__core__mail( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_a );


static PyObject *MAKE_FUNCTION_function_1_get_connection_of_module_django__core__mail(  );


static PyObject *MAKE_FUNCTION_function_2_send_mail_of_module_django__core__mail(  );


static PyObject *MAKE_FUNCTION_function_3_send_mass_mail_of_module_django__core__mail(  );


static PyObject *MAKE_FUNCTION_function_4_mail_admins_of_module_django__core__mail(  );


static PyObject *MAKE_FUNCTION_function_5_mail_managers_of_module_django__core__mail(  );


// The module function definitions.
static PyObject *impl_function_1_get_connection_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject *_python_par_backend, PyObject *_python_par_fail_silently, PyObject *_python_par_kwds )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_backend( _python_str_plain_backend, _python_par_backend );
    PyObjectLocalParameterVariableNoDel _python_var_fail_silently( _python_str_plain_fail_silently, _python_par_fail_silently );
    PyObjectLocalParameterVariableNoDel _python_var_kwds( _python_str_plain_kwds, _python_par_kwds );
    PyObjectLocalVariable _python_var_klass( _python_str_plain_klass );

    // Actual function code.
    static PyFrameObject *frame_function_1_get_connection_of_module_django__core__mail = NULL;

    if ( isFrameUnusable( frame_function_1_get_connection_of_module_django__core__mail ) )
    {
        if ( frame_function_1_get_connection_of_module_django__core__mail )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_get_connection_of_module_django__core__mail" );
#endif
            Py_DECREF( frame_function_1_get_connection_of_module_django__core__mail );
        }

        frame_function_1_get_connection_of_module_django__core__mail = MAKE_FRAME( _codeobj_626b074eee9befc0c3db6b1ecebc839e, _module_django__core__mail );
    }

    FrameGuard frame_guard( frame_function_1_get_connection_of_module_django__core__mail );
    try
    {
        assert( Py_REFCNT( frame_function_1_get_connection_of_module_django__core__mail ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 29 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 keeper_0;
            _python_var_klass.assign1( ( call1.assign( _mvar_django__core__mail_import_by_path.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_backend.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : LOOKUP_ATTRIBUTE( _mvar_django__core__mail_settings.asObject0(), _python_str_plain_EMAIL_BACKEND ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 30 );
        {
            PyObjectTempKeeper0 call_tmp3;
            PyObjectTempKeeper1 call_tmp4;
            return ( call_tmp3.assign( _python_var_klass.asObject() ), call_tmp4.assign( MAKE_DICT1( _python_var_fail_silently.asObject(), _python_str_plain_fail_silently ) ), impl_function_6_complex_call_helper_keywords_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), _python_var_kwds.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwds.updateLocalsDict( _python_var_fail_silently.updateLocalsDict( _python_var_backend.updateLocalsDict( _python_var_klass.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_get_connection_of_module_django__core__mail )
        {
           Py_DECREF( frame_function_1_get_connection_of_module_django__core__mail );
           frame_function_1_get_connection_of_module_django__core__mail = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_get_connection_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_backend = NULL;
    PyObject *_python_par_fail_silently = NULL;
    PyObject *_python_par_kwds = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_kwds = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kwds = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "get_connection() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwds, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "get_connection() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_kwds = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kwds = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "get_connection() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwds, entry->me_key, value );

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
            _python_par_kwds = PyDict_New();
        }
    }

    // Check if argument backend was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwds, _python_str_plain_backend );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_backend == NULL );

            _python_par_backend = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwds, _python_str_plain_backend );

            kw_found += 1;
        }
    }

    // Check if argument fail_silently was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwds, _python_str_plain_fail_silently );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_fail_silently == NULL );

            _python_par_fail_silently = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwds, _python_str_plain_fail_silently );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_connection() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_connection() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_connection() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_connection() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get_connection() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "get_connection() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_connection() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_backend != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_connection() got multiple values for keyword argument 'backend'" );
             goto error_exit;
         }

        _python_par_backend = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_fail_silently != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_connection() got multiple values for keyword argument 'fail_silently'" );
             goto error_exit;
         }

        _python_par_fail_silently = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_backend == NULL )
    {
        _python_par_backend = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_backend );
    }
    if ( _python_par_fail_silently == NULL )
    {
        _python_par_fail_silently = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_fail_silently );
    }


    return impl_function_1_get_connection_of_module_django__core__mail( self, _python_par_backend, _python_par_fail_silently, _python_par_kwds );

error_exit:;

    Py_XDECREF( _python_par_backend );
    Py_XDECREF( _python_par_fail_silently );
    Py_XDECREF( _python_par_kwds );

    return NULL;
}

static PyObject *dparse_function_1_get_connection_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1_get_connection_of_module_django__core__mail( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_get_connection_of_module_django__core__mail( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_send_mail_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject *_python_par_subject, PyObject *_python_par_message, PyObject *_python_par_from_email, PyObject *_python_par_recipient_list, PyObject *_python_par_fail_silently, PyObject *_python_par_auth_user, PyObject *_python_par_auth_password, PyObject *_python_par_connection )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_subject( _python_str_plain_subject, _python_par_subject );
    PyObjectLocalParameterVariableNoDel _python_var_message( _python_str_plain_message, _python_par_message );
    PyObjectLocalParameterVariableNoDel _python_var_from_email( _python_str_plain_from_email, _python_par_from_email );
    PyObjectLocalParameterVariableNoDel _python_var_recipient_list( _python_str_plain_recipient_list, _python_par_recipient_list );
    PyObjectLocalParameterVariableNoDel _python_var_fail_silently( _python_str_plain_fail_silently, _python_par_fail_silently );
    PyObjectLocalParameterVariableNoDel _python_var_auth_user( _python_str_plain_auth_user, _python_par_auth_user );
    PyObjectLocalParameterVariableNoDel _python_var_auth_password( _python_str_plain_auth_password, _python_par_auth_password );
    PyObjectLocalParameterVariableNoDel _python_var_connection( _python_str_plain_connection, _python_par_connection );

    // Actual function code.
    static PyFrameObject *frame_function_2_send_mail_of_module_django__core__mail = NULL;

    if ( isFrameUnusable( frame_function_2_send_mail_of_module_django__core__mail ) )
    {
        if ( frame_function_2_send_mail_of_module_django__core__mail )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_send_mail_of_module_django__core__mail" );
#endif
            Py_DECREF( frame_function_2_send_mail_of_module_django__core__mail );
        }

        frame_function_2_send_mail_of_module_django__core__mail = MAKE_FRAME( _codeobj_215a1340f208b5c4fe74987001aff3ec, _module_django__core__mail );
    }

    FrameGuard frame_guard( frame_function_2_send_mail_of_module_django__core__mail );
    try
    {
        assert( Py_REFCNT( frame_function_2_send_mail_of_module_django__core__mail ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 46 );
        {
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper0 keeper_0;
            PyObjectTempKeeper0 make_dict1;
            PyObjectTempKeeper0 make_dict3;
            _python_var_connection.assign1( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_connection.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : ( call7.assign( _mvar_django__core__mail_get_connection.asObject0() ), CALL_FUNCTION( call7.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict1.assign( _python_var_auth_user.asObject() ), make_dict3.assign( _python_var_auth_password.asObject() ), MAKE_DICT3( make_dict1.asObject0(), _python_str_plain_username, make_dict3.asObject0(), _python_str_plain_password, _python_var_fail_silently.asObject(), _python_str_plain_fail_silently ) ) ).asObject() ) ) ) );
        }
        frame_guard.setLineNumber( 49 );
        {
            PyObjectTempKeeper0 call14;
            PyObjectTempKeeper1 call15;
            PyObjectTempKeeper0 make_tuple10;
            PyObjectTempKeeper0 make_tuple11;
            PyObjectTempKeeper0 make_tuple12;
            return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call14.assign( _mvar_django__core__mail_EmailMessage.asObject0() ), call15.assign( ( make_tuple10.assign( _python_var_subject.asObject() ), make_tuple11.assign( _python_var_message.asObject() ), make_tuple12.assign( _python_var_from_email.asObject() ), MAKE_TUPLE4( make_tuple10.asObject0(), make_tuple11.asObject0(), make_tuple12.asObject0(), _python_var_recipient_list.asObject() ) ) ), CALL_FUNCTION( call14.asObject0(), call15.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_connection.asObject(), _python_str_plain_connection ) ).asObject() ) ) ).asObject(), _python_str_plain_send ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_connection.updateLocalsDict( _python_var_auth_password.updateLocalsDict( _python_var_auth_user.updateLocalsDict( _python_var_fail_silently.updateLocalsDict( _python_var_recipient_list.updateLocalsDict( _python_var_from_email.updateLocalsDict( _python_var_message.updateLocalsDict( _python_var_subject.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_send_mail_of_module_django__core__mail )
        {
           Py_DECREF( frame_function_2_send_mail_of_module_django__core__mail );
           frame_function_2_send_mail_of_module_django__core__mail = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_send_mail_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_subject = NULL;
    PyObject *_python_par_message = NULL;
    PyObject *_python_par_from_email = NULL;
    PyObject *_python_par_recipient_list = NULL;
    PyObject *_python_par_fail_silently = NULL;
    PyObject *_python_par_auth_user = NULL;
    PyObject *_python_par_auth_password = NULL;
    PyObject *_python_par_connection = NULL;
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
                PyErr_Format( PyExc_TypeError, "send_mail() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_subject == key )
            {
                if (unlikely( _python_par_subject ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'subject'" );
                    goto error_exit;
                }

                _python_par_subject = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_message == key )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_from_email == key )
            {
                if (unlikely( _python_par_from_email ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'from_email'" );
                    goto error_exit;
                }

                _python_par_from_email = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_recipient_list == key )
            {
                if (unlikely( _python_par_recipient_list ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'recipient_list'" );
                    goto error_exit;
                }

                _python_par_recipient_list = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_fail_silently == key )
            {
                if (unlikely( _python_par_fail_silently ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'fail_silently'" );
                    goto error_exit;
                }

                _python_par_fail_silently = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_auth_user == key )
            {
                if (unlikely( _python_par_auth_user ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'auth_user'" );
                    goto error_exit;
                }

                _python_par_auth_user = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_auth_password == key )
            {
                if (unlikely( _python_par_auth_password ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'auth_password'" );
                    goto error_exit;
                }

                _python_par_auth_password = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_connection == key )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_subject, key ) )
            {
                if (unlikely( _python_par_subject ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'subject'" );
                    goto error_exit;
                }

                _python_par_subject = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_message, key ) )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_from_email, key ) )
            {
                if (unlikely( _python_par_from_email ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'from_email'" );
                    goto error_exit;
                }

                _python_par_from_email = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_recipient_list, key ) )
            {
                if (unlikely( _python_par_recipient_list ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'recipient_list'" );
                    goto error_exit;
                }

                _python_par_recipient_list = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_fail_silently, key ) )
            {
                if (unlikely( _python_par_fail_silently ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'fail_silently'" );
                    goto error_exit;
                }

                _python_par_fail_silently = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_auth_user, key ) )
            {
                if (unlikely( _python_par_auth_user ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'auth_user'" );
                    goto error_exit;
                }

                _python_par_auth_user = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_auth_password, key ) )
            {
                if (unlikely( _python_par_auth_password ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'auth_password'" );
                    goto error_exit;
                }

                _python_par_auth_password = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_connection, key ) )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "send_mail() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 8 ))
    {
        if ( 8 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "send_mail() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "send_mail() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "send_mail() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "send_mail() takes exactly %d arguments (%zd given)", 8, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 8 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "send_mail() takes exactly %d positional arguments (%zd given)", 8, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "send_mail() takes at most %d positional arguments (%zd given)", 8, args_given + kw_only_found );
            }
#else
            if ( 8 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "send_mail() takes %d positional arguments but %zd were given", 8, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "send_mail() takes at most %d positional arguments (%zd given)", 8, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 4 ))
    {
        if ( 8 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "send_mail() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "send_mail() takes exactly %d non-keyword arguments (%zd given)", 8, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 8 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "send_mail() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 8 ? args_given : 8;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_subject != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'subject'" );
             goto error_exit;
         }

        _python_par_subject = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_message != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'message'" );
             goto error_exit;
         }

        _python_par_message = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_from_email != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'from_email'" );
             goto error_exit;
         }

        _python_par_from_email = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_recipient_list != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'recipient_list'" );
             goto error_exit;
         }

        _python_par_recipient_list = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_fail_silently != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'fail_silently'" );
             goto error_exit;
         }

        _python_par_fail_silently = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_auth_user != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'auth_user'" );
             goto error_exit;
         }

        _python_par_auth_user = INCREASE_REFCOUNT( args[ 5 ] );
    }
    if (likely( 6 < args_usable_count ))
    {
         if (unlikely( _python_par_auth_password != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'auth_password'" );
             goto error_exit;
         }

        _python_par_auth_password = INCREASE_REFCOUNT( args[ 6 ] );
    }
    if (likely( 7 < args_usable_count ))
    {
         if (unlikely( _python_par_connection != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_mail() got multiple values for keyword argument 'connection'" );
             goto error_exit;
         }

        _python_par_connection = INCREASE_REFCOUNT( args[ 7 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_fail_silently == NULL )
    {
        _python_par_fail_silently = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_fail_silently );
    }
    if ( _python_par_auth_user == NULL )
    {
        _python_par_auth_user = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_auth_user );
    }
    if ( _python_par_auth_password == NULL )
    {
        _python_par_auth_password = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_auth_password );
    }
    if ( _python_par_connection == NULL )
    {
        _python_par_connection = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_connection );
    }


    return impl_function_2_send_mail_of_module_django__core__mail( self, _python_par_subject, _python_par_message, _python_par_from_email, _python_par_recipient_list, _python_par_fail_silently, _python_par_auth_user, _python_par_auth_password, _python_par_connection );

error_exit:;

    Py_XDECREF( _python_par_subject );
    Py_XDECREF( _python_par_message );
    Py_XDECREF( _python_par_from_email );
    Py_XDECREF( _python_par_recipient_list );
    Py_XDECREF( _python_par_fail_silently );
    Py_XDECREF( _python_par_auth_user );
    Py_XDECREF( _python_par_auth_password );
    Py_XDECREF( _python_par_connection );

    return NULL;
}

static PyObject *dparse_function_2_send_mail_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 8)
    {
        return impl_function_2_send_mail_of_module_django__core__mail( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_send_mail_of_module_django__core__mail( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_send_mass_mail_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject *_python_par_datatuple, PyObject *_python_par_fail_silently, PyObject *_python_par_auth_user, PyObject *_python_par_auth_password, PyObject *_python_par_connection )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_datatuple( _python_str_plain_datatuple, _python_par_datatuple );
    PyObjectLocalParameterVariableNoDel _python_var_fail_silently( _python_str_plain_fail_silently, _python_par_fail_silently );
    PyObjectLocalParameterVariableNoDel _python_var_auth_user( _python_str_plain_auth_user, _python_par_auth_user );
    PyObjectLocalParameterVariableNoDel _python_var_auth_password( _python_str_plain_auth_password, _python_par_auth_password );
    PyObjectLocalParameterVariableNoDel _python_var_connection( _python_str_plain_connection, _python_par_connection );
    PyObjectLocalVariable _python_var_messages( _python_str_plain_messages );
    PyObjectLocalVariable _python_var_subject( _python_str_plain_subject );
    PyObjectLocalVariable _python_var_message( _python_str_plain_message );
    PyObjectLocalVariable _python_var_sender( _python_str_plain_sender );
    PyObjectLocalVariable _python_var_recipient( _python_str_plain_recipient );

    // Actual function code.
    static PyFrameObject *frame_function_3_send_mass_mail_of_module_django__core__mail = NULL;

    if ( isFrameUnusable( frame_function_3_send_mass_mail_of_module_django__core__mail ) )
    {
        if ( frame_function_3_send_mass_mail_of_module_django__core__mail )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_send_mass_mail_of_module_django__core__mail" );
#endif
            Py_DECREF( frame_function_3_send_mass_mail_of_module_django__core__mail );
        }

        frame_function_3_send_mass_mail_of_module_django__core__mail = MAKE_FRAME( _codeobj_ad44e540ae70562e654a68644cf34287, _module_django__core__mail );
    }

    FrameGuard frame_guard( frame_function_3_send_mass_mail_of_module_django__core__mail );
    try
    {
        assert( Py_REFCNT( frame_function_3_send_mass_mail_of_module_django__core__mail ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 67 );
        {
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper0 keeper_0;
            PyObjectTempKeeper0 make_dict1;
            PyObjectTempKeeper0 make_dict3;
            _python_var_connection.assign1( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_connection.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : ( call7.assign( _mvar_django__core__mail_get_connection.asObject0() ), CALL_FUNCTION( call7.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict1.assign( _python_var_auth_user.asObject() ), make_dict3.assign( _python_var_auth_password.asObject() ), MAKE_DICT3( make_dict1.asObject0(), _python_str_plain_username, make_dict3.asObject0(), _python_str_plain_password, _python_var_fail_silently.asObject(), _python_str_plain_fail_silently ) ) ).asObject() ) ) ) );
        }
        frame_guard.setLineNumber( 70 );
        _python_var_messages.assign1( impl_listcontr_1_of_function_3_send_mass_mail_of_module_django__core__mail( MAKE_ITERATOR( _python_var_datatuple.asObject() ), _python_var_connection, _python_var_message, _python_var_recipient, _python_var_sender, _python_var_subject ) );
        frame_guard.setLineNumber( 73 );
        {
            PyObjectTempKeeper1 call10;
            return ( call10.assign( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_send_messages ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_messages.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_connection.updateLocalsDict( _python_var_auth_password.updateLocalsDict( _python_var_auth_user.updateLocalsDict( _python_var_fail_silently.updateLocalsDict( _python_var_datatuple.updateLocalsDict( _python_var_recipient.updateLocalsDict( _python_var_sender.updateLocalsDict( _python_var_message.updateLocalsDict( _python_var_subject.updateLocalsDict( _python_var_messages.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_send_mass_mail_of_module_django__core__mail )
        {
           Py_DECREF( frame_function_3_send_mass_mail_of_module_django__core__mail );
           frame_function_3_send_mass_mail_of_module_django__core__mail = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_send_mass_mail_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_datatuple = NULL;
    PyObject *_python_par_fail_silently = NULL;
    PyObject *_python_par_auth_user = NULL;
    PyObject *_python_par_auth_password = NULL;
    PyObject *_python_par_connection = NULL;
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
                PyErr_Format( PyExc_TypeError, "send_mass_mail() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_datatuple == key )
            {
                if (unlikely( _python_par_datatuple ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'datatuple'" );
                    goto error_exit;
                }

                _python_par_datatuple = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_fail_silently == key )
            {
                if (unlikely( _python_par_fail_silently ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'fail_silently'" );
                    goto error_exit;
                }

                _python_par_fail_silently = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_auth_user == key )
            {
                if (unlikely( _python_par_auth_user ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'auth_user'" );
                    goto error_exit;
                }

                _python_par_auth_user = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_auth_password == key )
            {
                if (unlikely( _python_par_auth_password ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'auth_password'" );
                    goto error_exit;
                }

                _python_par_auth_password = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_connection == key )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_datatuple, key ) )
            {
                if (unlikely( _python_par_datatuple ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'datatuple'" );
                    goto error_exit;
                }

                _python_par_datatuple = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_fail_silently, key ) )
            {
                if (unlikely( _python_par_fail_silently ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'fail_silently'" );
                    goto error_exit;
                }

                _python_par_fail_silently = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_auth_user, key ) )
            {
                if (unlikely( _python_par_auth_user ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'auth_user'" );
                    goto error_exit;
                }

                _python_par_auth_user = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_auth_password, key ) )
            {
                if (unlikely( _python_par_auth_password ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'auth_password'" );
                    goto error_exit;
                }

                _python_par_auth_password = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_connection, key ) )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "send_mass_mail() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "send_mass_mail() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "send_mass_mail() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "send_mass_mail() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "send_mass_mail() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "send_mass_mail() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "send_mass_mail() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "send_mass_mail() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "send_mass_mail() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 5 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "send_mass_mail() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "send_mass_mail() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "send_mass_mail() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "send_mass_mail() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 5 ? args_given : 5;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_datatuple != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'datatuple'" );
             goto error_exit;
         }

        _python_par_datatuple = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_fail_silently != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'fail_silently'" );
             goto error_exit;
         }

        _python_par_fail_silently = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_auth_user != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'auth_user'" );
             goto error_exit;
         }

        _python_par_auth_user = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_auth_password != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'auth_password'" );
             goto error_exit;
         }

        _python_par_auth_password = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_connection != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send_mass_mail() got multiple values for keyword argument 'connection'" );
             goto error_exit;
         }

        _python_par_connection = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_fail_silently == NULL )
    {
        _python_par_fail_silently = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_fail_silently );
    }
    if ( _python_par_auth_user == NULL )
    {
        _python_par_auth_user = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_auth_user );
    }
    if ( _python_par_auth_password == NULL )
    {
        _python_par_auth_password = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_auth_password );
    }
    if ( _python_par_connection == NULL )
    {
        _python_par_connection = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_connection );
    }


    return impl_function_3_send_mass_mail_of_module_django__core__mail( self, _python_par_datatuple, _python_par_fail_silently, _python_par_auth_user, _python_par_auth_password, _python_par_connection );

error_exit:;

    Py_XDECREF( _python_par_datatuple );
    Py_XDECREF( _python_par_fail_silently );
    Py_XDECREF( _python_par_auth_user );
    Py_XDECREF( _python_par_auth_password );
    Py_XDECREF( _python_par_connection );

    return NULL;
}

static PyObject *dparse_function_3_send_mass_mail_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_3_send_mass_mail_of_module_django__core__mail( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_send_mass_mail_of_module_django__core__mail( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_send_mass_mail_of_module_django__core__mail( PyObject *_python_par___iterator,PyObjectLocalParameterVariableNoDel &python_closure_connection,PyObjectLocalVariable &python_closure_message,PyObjectLocalVariable &python_closure_recipient,PyObjectLocalVariable &python_closure_sender,PyObjectLocalVariable &python_closure_subject )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 70 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 70 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                {
                    frame_guard.setLineNumber( 70 );
                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                    PyObjectTemporary _python_tmp_element_4( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 3 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 4 );
                    python_closure_subject.assign0( _python_tmp_element_1.asObject() );
                    python_closure_message.assign0( _python_tmp_element_2.asObject() );
                    python_closure_sender.assign0( _python_tmp_element_3.asObject() );
                    python_closure_recipient.assign0( _python_tmp_element_4.asObject() );
                }
                {
                    PyObjectTempKeeper0 call5;
                    PyObjectTempKeeper1 call6;
                    PyObjectTempKeeper0 make_tuple1;
                    PyObjectTempKeeper0 make_tuple2;
                    PyObjectTempKeeper0 make_tuple3;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call5.assign( _mvar_django__core__mail_EmailMessage.asObject0() ), call6.assign( ( make_tuple1.assign( python_closure_subject.asObject() ), make_tuple2.assign( python_closure_message.asObject() ), make_tuple3.assign( python_closure_sender.asObject() ), MAKE_TUPLE4( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), python_closure_recipient.asObject() ) ) ), CALL_FUNCTION( call5.asObject0(), call6.asObject0(), PyObjectTemporary( MAKE_DICT1( python_closure_connection.asObject(), _python_str_plain_connection ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_4_mail_admins_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject *_python_par_subject, PyObject *_python_par_message, PyObject *_python_par_fail_silently, PyObject *_python_par_connection, PyObject *_python_par_html_message )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_subject( _python_str_plain_subject, _python_par_subject );
    PyObjectLocalParameterVariableNoDel _python_var_message( _python_str_plain_message, _python_par_message );
    PyObjectLocalParameterVariableNoDel _python_var_fail_silently( _python_str_plain_fail_silently, _python_par_fail_silently );
    PyObjectLocalParameterVariableNoDel _python_var_connection( _python_str_plain_connection, _python_par_connection );
    PyObjectLocalParameterVariableNoDel _python_var_html_message( _python_str_plain_html_message, _python_par_html_message );
    PyObjectLocalVariable _python_var_mail( _python_str_plain_mail );
    PyObjectLocalVariable _python_var_a( _python_str_plain_a );

    // Actual function code.
    static PyFrameObject *frame_function_4_mail_admins_of_module_django__core__mail = NULL;

    if ( isFrameUnusable( frame_function_4_mail_admins_of_module_django__core__mail ) )
    {
        if ( frame_function_4_mail_admins_of_module_django__core__mail )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_mail_admins_of_module_django__core__mail" );
#endif
            Py_DECREF( frame_function_4_mail_admins_of_module_django__core__mail );
        }

        frame_function_4_mail_admins_of_module_django__core__mail = MAKE_FRAME( _codeobj_d948d1c43cc890c4a875c26d40061ebd, _module_django__core__mail );
    }

    FrameGuard frame_guard( frame_function_4_mail_admins_of_module_django__core__mail );
    try
    {
        assert( Py_REFCNT( frame_function_4_mail_admins_of_module_django__core__mail ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 79 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail_settings.asObject0(), _python_str_plain_ADMINS ) ).asObject() ) )) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 81 );
        {
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple3;
            PyObjectTempKeeper0 make_tuple4;
            PyObjectTempKeeper1 make_tuple5;
            _python_var_mail.assign1( ( call7.assign( _mvar_django__core__mail_EmailMultiAlternatives.asObject0() ), call8.assign( ( make_tuple3.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_f0275d2ae1aaf69b3b06259723647d35, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__mail_settings.asObject0(), _python_str_plain_EMAIL_SUBJECT_PREFIX ) ), MAKE_TUPLE2( make_tuple1.asObject0(), _python_var_subject.asObject() ) ) ).asObject() ) ), make_tuple4.assign( _python_var_message.asObject() ), make_tuple5.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__mail_settings.asObject0(), _python_str_plain_SERVER_EMAIL ) ), MAKE_TUPLE4( make_tuple3.asObject0(), make_tuple4.asObject0(), make_tuple5.asObject0(), PyObjectTemporary( impl_listcontr_1_of_function_4_mail_admins_of_module_django__core__mail( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail_settings.asObject0(), _python_str_plain_ADMINS ) ).asObject() ), _python_var_a ) ).asObject() ) ) ), CALL_FUNCTION( call7.asObject0(), call8.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_connection.asObject(), _python_str_plain_connection ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 84 );
        if ( CHECK_IF_TRUE( _python_var_html_message.asObject() ) )
        {
            frame_guard.setLineNumber( 85 );
            {
                PyObjectTempKeeper1 call10;
                DECREASE_REFCOUNT( ( call10.assign( LOOKUP_ATTRIBUTE( _python_var_mail.asObject(), _python_str_plain_attach_alternative ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_html_message.asObject(), _python_unicode_digest_6ffaad09c30216c38c8888e6d6757d2f ) ) );
            }
        }
        frame_guard.setLineNumber( 86 );
        {
            PyObjectTempKeeper1 call13;
            DECREASE_REFCOUNT( ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_mail.asObject(), _python_str_plain_send ) ), CALL_FUNCTION( call13.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_fail_silently.asObject(), _python_str_plain_fail_silently ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_html_message.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_fail_silently.updateLocalsDict( _python_var_message.updateLocalsDict( _python_var_subject.updateLocalsDict( _python_var_a.updateLocalsDict( _python_var_mail.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_mail_admins_of_module_django__core__mail )
        {
           Py_DECREF( frame_function_4_mail_admins_of_module_django__core__mail );
           frame_function_4_mail_admins_of_module_django__core__mail = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_4_mail_admins_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_subject = NULL;
    PyObject *_python_par_message = NULL;
    PyObject *_python_par_fail_silently = NULL;
    PyObject *_python_par_connection = NULL;
    PyObject *_python_par_html_message = NULL;
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
                PyErr_Format( PyExc_TypeError, "mail_admins() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_subject == key )
            {
                if (unlikely( _python_par_subject ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'subject'" );
                    goto error_exit;
                }

                _python_par_subject = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_message == key )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_fail_silently == key )
            {
                if (unlikely( _python_par_fail_silently ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'fail_silently'" );
                    goto error_exit;
                }

                _python_par_fail_silently = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_connection == key )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_html_message == key )
            {
                if (unlikely( _python_par_html_message ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'html_message'" );
                    goto error_exit;
                }

                _python_par_html_message = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_subject, key ) )
            {
                if (unlikely( _python_par_subject ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'subject'" );
                    goto error_exit;
                }

                _python_par_subject = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_message, key ) )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_fail_silently, key ) )
            {
                if (unlikely( _python_par_fail_silently ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'fail_silently'" );
                    goto error_exit;
                }

                _python_par_fail_silently = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_connection, key ) )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_html_message, key ) )
            {
                if (unlikely( _python_par_html_message ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'html_message'" );
                    goto error_exit;
                }

                _python_par_html_message = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "mail_admins() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "mail_admins() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "mail_admins() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "mail_admins() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "mail_admins() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "mail_admins() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "mail_admins() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "mail_admins() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "mail_admins() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 5 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "mail_admins() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "mail_admins() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "mail_admins() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "mail_admins() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 5 ? args_given : 5;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_subject != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'subject'" );
             goto error_exit;
         }

        _python_par_subject = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_message != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'message'" );
             goto error_exit;
         }

        _python_par_message = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_fail_silently != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'fail_silently'" );
             goto error_exit;
         }

        _python_par_fail_silently = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_connection != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'connection'" );
             goto error_exit;
         }

        _python_par_connection = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_html_message != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "mail_admins() got multiple values for keyword argument 'html_message'" );
             goto error_exit;
         }

        _python_par_html_message = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_fail_silently == NULL )
    {
        _python_par_fail_silently = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_fail_silently );
    }
    if ( _python_par_connection == NULL )
    {
        _python_par_connection = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_connection );
    }
    if ( _python_par_html_message == NULL )
    {
        _python_par_html_message = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_html_message );
    }


    return impl_function_4_mail_admins_of_module_django__core__mail( self, _python_par_subject, _python_par_message, _python_par_fail_silently, _python_par_connection, _python_par_html_message );

error_exit:;

    Py_XDECREF( _python_par_subject );
    Py_XDECREF( _python_par_message );
    Py_XDECREF( _python_par_fail_silently );
    Py_XDECREF( _python_par_connection );
    Py_XDECREF( _python_par_html_message );

    return NULL;
}

static PyObject *dparse_function_4_mail_admins_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_4_mail_admins_of_module_django__core__mail( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_mail_admins_of_module_django__core__mail( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_4_mail_admins_of_module_django__core__mail( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_a )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 82 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 82 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_a.assign0( _python_tmp_iter_value.asObject() );
                APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( python_closure_a.asObject(), _python_int_pos_1, 1 ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_5_mail_managers_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject *_python_par_subject, PyObject *_python_par_message, PyObject *_python_par_fail_silently, PyObject *_python_par_connection, PyObject *_python_par_html_message )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_subject( _python_str_plain_subject, _python_par_subject );
    PyObjectLocalParameterVariableNoDel _python_var_message( _python_str_plain_message, _python_par_message );
    PyObjectLocalParameterVariableNoDel _python_var_fail_silently( _python_str_plain_fail_silently, _python_par_fail_silently );
    PyObjectLocalParameterVariableNoDel _python_var_connection( _python_str_plain_connection, _python_par_connection );
    PyObjectLocalParameterVariableNoDel _python_var_html_message( _python_str_plain_html_message, _python_par_html_message );
    PyObjectLocalVariable _python_var_mail( _python_str_plain_mail );
    PyObjectLocalVariable _python_var_a( _python_str_plain_a );

    // Actual function code.
    static PyFrameObject *frame_function_5_mail_managers_of_module_django__core__mail = NULL;

    if ( isFrameUnusable( frame_function_5_mail_managers_of_module_django__core__mail ) )
    {
        if ( frame_function_5_mail_managers_of_module_django__core__mail )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_mail_managers_of_module_django__core__mail" );
#endif
            Py_DECREF( frame_function_5_mail_managers_of_module_django__core__mail );
        }

        frame_function_5_mail_managers_of_module_django__core__mail = MAKE_FRAME( _codeobj_70329767ca1872bc9be34d0ba0ce1236, _module_django__core__mail );
    }

    FrameGuard frame_guard( frame_function_5_mail_managers_of_module_django__core__mail );
    try
    {
        assert( Py_REFCNT( frame_function_5_mail_managers_of_module_django__core__mail ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 92 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail_settings.asObject0(), _python_str_plain_MANAGERS ) ).asObject() ) )) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 94 );
        {
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple3;
            PyObjectTempKeeper0 make_tuple4;
            PyObjectTempKeeper1 make_tuple5;
            _python_var_mail.assign1( ( call7.assign( _mvar_django__core__mail_EmailMultiAlternatives.asObject0() ), call8.assign( ( make_tuple3.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_f0275d2ae1aaf69b3b06259723647d35, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__mail_settings.asObject0(), _python_str_plain_EMAIL_SUBJECT_PREFIX ) ), MAKE_TUPLE2( make_tuple1.asObject0(), _python_var_subject.asObject() ) ) ).asObject() ) ), make_tuple4.assign( _python_var_message.asObject() ), make_tuple5.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__mail_settings.asObject0(), _python_str_plain_SERVER_EMAIL ) ), MAKE_TUPLE4( make_tuple3.asObject0(), make_tuple4.asObject0(), make_tuple5.asObject0(), PyObjectTemporary( impl_listcontr_1_of_function_5_mail_managers_of_module_django__core__mail( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail_settings.asObject0(), _python_str_plain_MANAGERS ) ).asObject() ), _python_var_a ) ).asObject() ) ) ), CALL_FUNCTION( call7.asObject0(), call8.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_connection.asObject(), _python_str_plain_connection ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 97 );
        if ( CHECK_IF_TRUE( _python_var_html_message.asObject() ) )
        {
            frame_guard.setLineNumber( 98 );
            {
                PyObjectTempKeeper1 call10;
                DECREASE_REFCOUNT( ( call10.assign( LOOKUP_ATTRIBUTE( _python_var_mail.asObject(), _python_str_plain_attach_alternative ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_html_message.asObject(), _python_unicode_digest_6ffaad09c30216c38c8888e6d6757d2f ) ) );
            }
        }
        frame_guard.setLineNumber( 99 );
        {
            PyObjectTempKeeper1 call13;
            DECREASE_REFCOUNT( ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_mail.asObject(), _python_str_plain_send ) ), CALL_FUNCTION( call13.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_fail_silently.asObject(), _python_str_plain_fail_silently ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_html_message.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_fail_silently.updateLocalsDict( _python_var_message.updateLocalsDict( _python_var_subject.updateLocalsDict( _python_var_a.updateLocalsDict( _python_var_mail.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_mail_managers_of_module_django__core__mail )
        {
           Py_DECREF( frame_function_5_mail_managers_of_module_django__core__mail );
           frame_function_5_mail_managers_of_module_django__core__mail = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_5_mail_managers_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_subject = NULL;
    PyObject *_python_par_message = NULL;
    PyObject *_python_par_fail_silently = NULL;
    PyObject *_python_par_connection = NULL;
    PyObject *_python_par_html_message = NULL;
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
                PyErr_Format( PyExc_TypeError, "mail_managers() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_subject == key )
            {
                if (unlikely( _python_par_subject ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'subject'" );
                    goto error_exit;
                }

                _python_par_subject = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_message == key )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_fail_silently == key )
            {
                if (unlikely( _python_par_fail_silently ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'fail_silently'" );
                    goto error_exit;
                }

                _python_par_fail_silently = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_connection == key )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_html_message == key )
            {
                if (unlikely( _python_par_html_message ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'html_message'" );
                    goto error_exit;
                }

                _python_par_html_message = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_subject, key ) )
            {
                if (unlikely( _python_par_subject ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'subject'" );
                    goto error_exit;
                }

                _python_par_subject = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_message, key ) )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_fail_silently, key ) )
            {
                if (unlikely( _python_par_fail_silently ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'fail_silently'" );
                    goto error_exit;
                }

                _python_par_fail_silently = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_connection, key ) )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_html_message, key ) )
            {
                if (unlikely( _python_par_html_message ))
                {
                    PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'html_message'" );
                    goto error_exit;
                }

                _python_par_html_message = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "mail_managers() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "mail_managers() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "mail_managers() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "mail_managers() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "mail_managers() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "mail_managers() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "mail_managers() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "mail_managers() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "mail_managers() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 5 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "mail_managers() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "mail_managers() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "mail_managers() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "mail_managers() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 5 ? args_given : 5;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_subject != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'subject'" );
             goto error_exit;
         }

        _python_par_subject = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_message != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'message'" );
             goto error_exit;
         }

        _python_par_message = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_fail_silently != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'fail_silently'" );
             goto error_exit;
         }

        _python_par_fail_silently = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_connection != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'connection'" );
             goto error_exit;
         }

        _python_par_connection = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_html_message != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "mail_managers() got multiple values for keyword argument 'html_message'" );
             goto error_exit;
         }

        _python_par_html_message = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_fail_silently == NULL )
    {
        _python_par_fail_silently = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_fail_silently );
    }
    if ( _python_par_connection == NULL )
    {
        _python_par_connection = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_connection );
    }
    if ( _python_par_html_message == NULL )
    {
        _python_par_html_message = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_html_message );
    }


    return impl_function_5_mail_managers_of_module_django__core__mail( self, _python_par_subject, _python_par_message, _python_par_fail_silently, _python_par_connection, _python_par_html_message );

error_exit:;

    Py_XDECREF( _python_par_subject );
    Py_XDECREF( _python_par_message );
    Py_XDECREF( _python_par_fail_silently );
    Py_XDECREF( _python_par_connection );
    Py_XDECREF( _python_par_html_message );

    return NULL;
}

static PyObject *dparse_function_5_mail_managers_of_module_django__core__mail( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_5_mail_managers_of_module_django__core__mail( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_mail_managers_of_module_django__core__mail( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_5_mail_managers_of_module_django__core__mail( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_a )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 95 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 95 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_a.assign0( _python_tmp_iter_value.asObject() );
                APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( python_closure_a.asObject(), _python_int_pos_1, 1 ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}



static PyObject *MAKE_FUNCTION_function_1_get_connection_of_module_django__core__mail(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_get_connection_of_module_django__core__mail,
        dparse_function_1_get_connection_of_module_django__core__mail,
        _python_str_plain_get_connection,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_626b074eee9befc0c3db6b1ecebc839e,
        INCREASE_REFCOUNT( _python_tuple_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail,
        _python_unicode_digest_2a6cc1ea263254b4bce525cd4e9b04b4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_send_mail_of_module_django__core__mail(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_send_mail_of_module_django__core__mail,
        dparse_function_2_send_mail_of_module_django__core__mail,
        _python_str_plain_send_mail,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_215a1340f208b5c4fe74987001aff3ec,
        INCREASE_REFCOUNT( _python_tuple_false_none_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail,
        _python_unicode_digest_4e972c4039218182363db985645159fb
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_send_mass_mail_of_module_django__core__mail(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_send_mass_mail_of_module_django__core__mail,
        dparse_function_3_send_mass_mail_of_module_django__core__mail,
        _python_str_plain_send_mass_mail,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ad44e540ae70562e654a68644cf34287,
        INCREASE_REFCOUNT( _python_tuple_false_none_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail,
        _python_unicode_digest_af2e19b2e5692156e132575b8504b5e5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_mail_admins_of_module_django__core__mail(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_mail_admins_of_module_django__core__mail,
        dparse_function_4_mail_admins_of_module_django__core__mail,
        _python_str_plain_mail_admins,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d948d1c43cc890c4a875c26d40061ebd,
        INCREASE_REFCOUNT( _python_tuple_false_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail,
        _python_unicode_digest_c5970a85e262dd0c6ac19f7aceb8f6d2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_mail_managers_of_module_django__core__mail(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_mail_managers_of_module_django__core__mail,
        dparse_function_5_mail_managers_of_module_django__core__mail,
        _python_str_plain_mail_managers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_70329767ca1872bc9be34d0ba0ce1236,
        INCREASE_REFCOUNT( _python_tuple_false_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail,
        _python_unicode_digest_49e00e78eb1638af6f29c211dec340f9
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.mail",   /* m_name */
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

MOD_INIT_DECL( django__core__mail )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__mail );
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

    // puts( "in initdjango__core__mail" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__mail = Py_InitModule4(
        "django.core.mail",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__mail = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__mail = (PyDictObject *)((PyModuleObject *)_module_django__core__mail)->md_dict;

    assertObject( _module_django__core__mail );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_ea9bb7eb68e7731112941509331ba08f, _module_django__core__mail );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__mail );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__mail != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_f4ec00f52cda6a7ded8c41a90520820e );
    UPDATE_STRING_DICT0( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_4e98c6b5f9ede2c0907017f701ac4bc7 );
    UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain___path__, LIST_COPY( _python_list_str_digest_5324e39183a6331c67b198fe2959f5a3_list ) );
    PyFrameObject *frame_module_django__core__mail = MAKE_FRAME( _codeobj_682f2577bc8adf351fb174f989d7d85d, _module_django__core__mail );

    FrameGuard frame_guard( frame_module_django__core__mail );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__mail ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__core__mail)->md_dict, ((PyModuleObject *)_module_django__core__mail)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__core__mail)->md_dict, ((PyModuleObject *)_module_django__core__mail)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_import_by_path, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_03bb9f131d782ff4dbd31e0966379285, ((PyModuleObject *)_module_django__core__mail)->md_dict, ((PyModuleObject *)_module_django__core__mail)->md_dict, _python_list_str_plain_import_by_path_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_by_path ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_CachedDnsName, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_951c6b668e3184429d22e5add1c178cf, ((PyModuleObject *)_module_django__core__mail)->md_dict, ((PyModuleObject *)_module_django__core__mail)->md_dict, _python_list_str_plain_CachedDnsName_str_plain_DNS_NAME_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_CachedDnsName ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_DNS_NAME, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_951c6b668e3184429d22e5add1c178cf, ((PyModuleObject *)_module_django__core__mail)->md_dict, ((PyModuleObject *)_module_django__core__mail)->md_dict, _python_list_str_plain_CachedDnsName_str_plain_DNS_NAME_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DNS_NAME ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_EmailMessage, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_6d19707122aee1f3b8a203d3e1be01fa, ((PyModuleObject *)_module_django__core__mail)->md_dict, ((PyModuleObject *)_module_django__core__mail)->md_dict, _python_list_86a304bc4b522a4b9f6ce4b392538993_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_EmailMessage ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_EmailMultiAlternatives, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_6d19707122aee1f3b8a203d3e1be01fa, ((PyModuleObject *)_module_django__core__mail)->md_dict, ((PyModuleObject *)_module_django__core__mail)->md_dict, _python_list_86a304bc4b522a4b9f6ce4b392538993_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_EmailMultiAlternatives ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_SafeMIMEText, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_6d19707122aee1f3b8a203d3e1be01fa, ((PyModuleObject *)_module_django__core__mail)->md_dict, ((PyModuleObject *)_module_django__core__mail)->md_dict, _python_list_86a304bc4b522a4b9f6ce4b392538993_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SafeMIMEText ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_SafeMIMEMultipart, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_6d19707122aee1f3b8a203d3e1be01fa, ((PyModuleObject *)_module_django__core__mail)->md_dict, ((PyModuleObject *)_module_django__core__mail)->md_dict, _python_list_86a304bc4b522a4b9f6ce4b392538993_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SafeMIMEMultipart ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_DEFAULT_ATTACHMENT_MIME_TYPE, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_6d19707122aee1f3b8a203d3e1be01fa, ((PyModuleObject *)_module_django__core__mail)->md_dict, ((PyModuleObject *)_module_django__core__mail)->md_dict, _python_list_86a304bc4b522a4b9f6ce4b392538993_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DEFAULT_ATTACHMENT_MIME_TYPE ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_make_msgid, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_6d19707122aee1f3b8a203d3e1be01fa, ((PyModuleObject *)_module_django__core__mail)->md_dict, ((PyModuleObject *)_module_django__core__mail)->md_dict, _python_list_86a304bc4b522a4b9f6ce4b392538993_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_make_msgid ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_BadHeaderError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_6d19707122aee1f3b8a203d3e1be01fa, ((PyModuleObject *)_module_django__core__mail)->md_dict, ((PyModuleObject *)_module_django__core__mail)->md_dict, _python_list_86a304bc4b522a4b9f6ce4b392538993_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_BadHeaderError ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_forbid_multi_line_headers, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_6d19707122aee1f3b8a203d3e1be01fa, ((PyModuleObject *)_module_django__core__mail)->md_dict, ((PyModuleObject *)_module_django__core__mail)->md_dict, _python_list_86a304bc4b522a4b9f6ce4b392538993_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_forbid_multi_line_headers ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__mail)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_get_connection, MAKE_FUNCTION_function_1_get_connection_of_module_django__core__mail(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_send_mail, MAKE_FUNCTION_function_2_send_mail_of_module_django__core__mail(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_send_mass_mail, MAKE_FUNCTION_function_3_send_mass_mail_of_module_django__core__mail(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_mail_admins, MAKE_FUNCTION_function_4_mail_admins_of_module_django__core__mail(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__mail, (Nuitka_StringObject *)_python_str_plain_mail_managers, MAKE_FUNCTION_function_5_mail_managers_of_module_django__core__mail(  ) );

   return MOD_RETURN_VALUE( _module_django__core__mail );
}
