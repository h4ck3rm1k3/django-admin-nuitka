#ifndef __django__http__cookie_H__
#define __django__http__cookie_H__


#include <nuitka/helpers.hpp>

MOD_INIT_DECL( django__http__cookie );

extern PyObject *_module_django__http__cookie;
extern PyDictObject *_moduledict_django__http__cookie;

class PyObjectGlobalVariable_django__http__cookie
{
    public:
        explicit PyObjectGlobalVariable_django__http__cookie( PyObject **dummy, PyObject **var_name )
        {
            assert( var_name );

            this->var_name = (Nuitka_StringObject **)var_name;
        }

        PyObject *asObject0() const
        {
            PyObject *result = GET_STRING_DICT_VALUE( _moduledict_django__http__cookie, *this->var_name );

            if (likely( result != NULL ))
            {
                assertObject( result );

                return result;
            }

            result = GET_STRING_DICT_VALUE( dict_builtin, *this->var_name );

            if (likely( result != NULL ))
            {
                assertObject( result );

                return result;
            }

            PyErr_Format( PyExc_NameError, "global name '%s' is not defined", Nuitka_String_AsString( (PyObject *)*this->var_name ) );
            throw PythonException();
        }

        PyObject *asObject() const
        {
            return INCREASE_REFCOUNT( this->asObject0() );
        }

        PyObject *asObject0( PyObject *dict ) const
        {
            PyObject *result = PyDict_GetItem( dict, (PyObject *)*this->var_name );

            if ( result != NULL )
            {
                return result;
            }
            else
            {
                return this->asObject0();
            }
        }

        void del( bool tolerant ) const
        {
            int status = PyDict_DelItem( (PyObject *)_moduledict_django__http__cookie, (PyObject *)*this->var_name );

            if (unlikely( status == -1 && tolerant == false ))
            {
                PyErr_Format( PyExc_NameError, "global name '%s' is not defined", Nuitka_String_AsString( (PyObject *)*this->var_name ) );
                throw PythonException();
            }
        }

        bool isInitialized( bool allow_builtins = true ) const
        {
            PyObject *result = GET_STRING_DICT_VALUE( _moduledict_django__http__cookie, *this->var_name );

            if (likely( result ))
            {
                return true;
            }

            if ( allow_builtins )
            {
                result = GET_STRING_DICT_VALUE( dict_builtin, *this->var_name );

                return result != NULL;
            }
            else
            {
                return false;
            }
        }

    private:

        Nuitka_StringObject **var_name;
};

// Declarations from this module to other modules if any.


#endif
