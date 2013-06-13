#ifndef __NUITKA_TUPLES_H__
#define __NUITKA_TUPLES_H__

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE1( PyObject *element0 )
{
    PyObject *result = PyTuple_New( 1 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE2( PyObject *element0, PyObject *element1 )
{
    PyObject *result = PyTuple_New( 2 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE3( PyObject *element0, PyObject *element1, PyObject *element2 )
{
    PyObject *result = PyTuple_New( 3 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE4( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3 )
{
    PyObject *result = PyTuple_New( 4 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE5( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4 )
{
    PyObject *result = PyTuple_New( 5 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE6( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5 )
{
    PyObject *result = PyTuple_New( 6 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE7( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6 )
{
    PyObject *result = PyTuple_New( 7 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE8( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7 )
{
    PyObject *result = PyTuple_New( 8 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE9( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8 )
{
    PyObject *result = PyTuple_New( 9 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE10( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9 )
{
    PyObject *result = PyTuple_New( 10 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE11( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10 )
{
    PyObject *result = PyTuple_New( 11 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE12( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11 )
{
    PyObject *result = PyTuple_New( 12 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );
    assertObject( element11 );
    PyTuple_SET_ITEM( result, 11, INCREASE_REFCOUNT( element11 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE13( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12 )
{
    PyObject *result = PyTuple_New( 13 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );
    assertObject( element11 );
    PyTuple_SET_ITEM( result, 11, INCREASE_REFCOUNT( element11 ) );
    assertObject( element12 );
    PyTuple_SET_ITEM( result, 12, INCREASE_REFCOUNT( element12 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE15( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14 )
{
    PyObject *result = PyTuple_New( 15 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );
    assertObject( element11 );
    PyTuple_SET_ITEM( result, 11, INCREASE_REFCOUNT( element11 ) );
    assertObject( element12 );
    PyTuple_SET_ITEM( result, 12, INCREASE_REFCOUNT( element12 ) );
    assertObject( element13 );
    PyTuple_SET_ITEM( result, 13, INCREASE_REFCOUNT( element13 ) );
    assertObject( element14 );
    PyTuple_SET_ITEM( result, 14, INCREASE_REFCOUNT( element14 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE16( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15 )
{
    PyObject *result = PyTuple_New( 16 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );
    assertObject( element11 );
    PyTuple_SET_ITEM( result, 11, INCREASE_REFCOUNT( element11 ) );
    assertObject( element12 );
    PyTuple_SET_ITEM( result, 12, INCREASE_REFCOUNT( element12 ) );
    assertObject( element13 );
    PyTuple_SET_ITEM( result, 13, INCREASE_REFCOUNT( element13 ) );
    assertObject( element14 );
    PyTuple_SET_ITEM( result, 14, INCREASE_REFCOUNT( element14 ) );
    assertObject( element15 );
    PyTuple_SET_ITEM( result, 15, INCREASE_REFCOUNT( element15 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE17( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16 )
{
    PyObject *result = PyTuple_New( 17 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );
    assertObject( element11 );
    PyTuple_SET_ITEM( result, 11, INCREASE_REFCOUNT( element11 ) );
    assertObject( element12 );
    PyTuple_SET_ITEM( result, 12, INCREASE_REFCOUNT( element12 ) );
    assertObject( element13 );
    PyTuple_SET_ITEM( result, 13, INCREASE_REFCOUNT( element13 ) );
    assertObject( element14 );
    PyTuple_SET_ITEM( result, 14, INCREASE_REFCOUNT( element14 ) );
    assertObject( element15 );
    PyTuple_SET_ITEM( result, 15, INCREASE_REFCOUNT( element15 ) );
    assertObject( element16 );
    PyTuple_SET_ITEM( result, 16, INCREASE_REFCOUNT( element16 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE22( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16, PyObject *element17, PyObject *element18, PyObject *element19, PyObject *element20, PyObject *element21 )
{
    PyObject *result = PyTuple_New( 22 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );
    assertObject( element11 );
    PyTuple_SET_ITEM( result, 11, INCREASE_REFCOUNT( element11 ) );
    assertObject( element12 );
    PyTuple_SET_ITEM( result, 12, INCREASE_REFCOUNT( element12 ) );
    assertObject( element13 );
    PyTuple_SET_ITEM( result, 13, INCREASE_REFCOUNT( element13 ) );
    assertObject( element14 );
    PyTuple_SET_ITEM( result, 14, INCREASE_REFCOUNT( element14 ) );
    assertObject( element15 );
    PyTuple_SET_ITEM( result, 15, INCREASE_REFCOUNT( element15 ) );
    assertObject( element16 );
    PyTuple_SET_ITEM( result, 16, INCREASE_REFCOUNT( element16 ) );
    assertObject( element17 );
    PyTuple_SET_ITEM( result, 17, INCREASE_REFCOUNT( element17 ) );
    assertObject( element18 );
    PyTuple_SET_ITEM( result, 18, INCREASE_REFCOUNT( element18 ) );
    assertObject( element19 );
    PyTuple_SET_ITEM( result, 19, INCREASE_REFCOUNT( element19 ) );
    assertObject( element20 );
    PyTuple_SET_ITEM( result, 20, INCREASE_REFCOUNT( element20 ) );
    assertObject( element21 );
    PyTuple_SET_ITEM( result, 21, INCREASE_REFCOUNT( element21 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE23( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16, PyObject *element17, PyObject *element18, PyObject *element19, PyObject *element20, PyObject *element21, PyObject *element22 )
{
    PyObject *result = PyTuple_New( 23 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );
    assertObject( element11 );
    PyTuple_SET_ITEM( result, 11, INCREASE_REFCOUNT( element11 ) );
    assertObject( element12 );
    PyTuple_SET_ITEM( result, 12, INCREASE_REFCOUNT( element12 ) );
    assertObject( element13 );
    PyTuple_SET_ITEM( result, 13, INCREASE_REFCOUNT( element13 ) );
    assertObject( element14 );
    PyTuple_SET_ITEM( result, 14, INCREASE_REFCOUNT( element14 ) );
    assertObject( element15 );
    PyTuple_SET_ITEM( result, 15, INCREASE_REFCOUNT( element15 ) );
    assertObject( element16 );
    PyTuple_SET_ITEM( result, 16, INCREASE_REFCOUNT( element16 ) );
    assertObject( element17 );
    PyTuple_SET_ITEM( result, 17, INCREASE_REFCOUNT( element17 ) );
    assertObject( element18 );
    PyTuple_SET_ITEM( result, 18, INCREASE_REFCOUNT( element18 ) );
    assertObject( element19 );
    PyTuple_SET_ITEM( result, 19, INCREASE_REFCOUNT( element19 ) );
    assertObject( element20 );
    PyTuple_SET_ITEM( result, 20, INCREASE_REFCOUNT( element20 ) );
    assertObject( element21 );
    PyTuple_SET_ITEM( result, 21, INCREASE_REFCOUNT( element21 ) );
    assertObject( element22 );
    PyTuple_SET_ITEM( result, 22, INCREASE_REFCOUNT( element22 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE24( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16, PyObject *element17, PyObject *element18, PyObject *element19, PyObject *element20, PyObject *element21, PyObject *element22, PyObject *element23 )
{
    PyObject *result = PyTuple_New( 24 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );
    assertObject( element11 );
    PyTuple_SET_ITEM( result, 11, INCREASE_REFCOUNT( element11 ) );
    assertObject( element12 );
    PyTuple_SET_ITEM( result, 12, INCREASE_REFCOUNT( element12 ) );
    assertObject( element13 );
    PyTuple_SET_ITEM( result, 13, INCREASE_REFCOUNT( element13 ) );
    assertObject( element14 );
    PyTuple_SET_ITEM( result, 14, INCREASE_REFCOUNT( element14 ) );
    assertObject( element15 );
    PyTuple_SET_ITEM( result, 15, INCREASE_REFCOUNT( element15 ) );
    assertObject( element16 );
    PyTuple_SET_ITEM( result, 16, INCREASE_REFCOUNT( element16 ) );
    assertObject( element17 );
    PyTuple_SET_ITEM( result, 17, INCREASE_REFCOUNT( element17 ) );
    assertObject( element18 );
    PyTuple_SET_ITEM( result, 18, INCREASE_REFCOUNT( element18 ) );
    assertObject( element19 );
    PyTuple_SET_ITEM( result, 19, INCREASE_REFCOUNT( element19 ) );
    assertObject( element20 );
    PyTuple_SET_ITEM( result, 20, INCREASE_REFCOUNT( element20 ) );
    assertObject( element21 );
    PyTuple_SET_ITEM( result, 21, INCREASE_REFCOUNT( element21 ) );
    assertObject( element22 );
    PyTuple_SET_ITEM( result, 22, INCREASE_REFCOUNT( element22 ) );
    assertObject( element23 );
    PyTuple_SET_ITEM( result, 23, INCREASE_REFCOUNT( element23 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE27( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16, PyObject *element17, PyObject *element18, PyObject *element19, PyObject *element20, PyObject *element21, PyObject *element22, PyObject *element23, PyObject *element24, PyObject *element25, PyObject *element26 )
{
    PyObject *result = PyTuple_New( 27 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );
    assertObject( element11 );
    PyTuple_SET_ITEM( result, 11, INCREASE_REFCOUNT( element11 ) );
    assertObject( element12 );
    PyTuple_SET_ITEM( result, 12, INCREASE_REFCOUNT( element12 ) );
    assertObject( element13 );
    PyTuple_SET_ITEM( result, 13, INCREASE_REFCOUNT( element13 ) );
    assertObject( element14 );
    PyTuple_SET_ITEM( result, 14, INCREASE_REFCOUNT( element14 ) );
    assertObject( element15 );
    PyTuple_SET_ITEM( result, 15, INCREASE_REFCOUNT( element15 ) );
    assertObject( element16 );
    PyTuple_SET_ITEM( result, 16, INCREASE_REFCOUNT( element16 ) );
    assertObject( element17 );
    PyTuple_SET_ITEM( result, 17, INCREASE_REFCOUNT( element17 ) );
    assertObject( element18 );
    PyTuple_SET_ITEM( result, 18, INCREASE_REFCOUNT( element18 ) );
    assertObject( element19 );
    PyTuple_SET_ITEM( result, 19, INCREASE_REFCOUNT( element19 ) );
    assertObject( element20 );
    PyTuple_SET_ITEM( result, 20, INCREASE_REFCOUNT( element20 ) );
    assertObject( element21 );
    PyTuple_SET_ITEM( result, 21, INCREASE_REFCOUNT( element21 ) );
    assertObject( element22 );
    PyTuple_SET_ITEM( result, 22, INCREASE_REFCOUNT( element22 ) );
    assertObject( element23 );
    PyTuple_SET_ITEM( result, 23, INCREASE_REFCOUNT( element23 ) );
    assertObject( element24 );
    PyTuple_SET_ITEM( result, 24, INCREASE_REFCOUNT( element24 ) );
    assertObject( element25 );
    PyTuple_SET_ITEM( result, 25, INCREASE_REFCOUNT( element25 ) );
    assertObject( element26 );
    PyTuple_SET_ITEM( result, 26, INCREASE_REFCOUNT( element26 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE80( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16, PyObject *element17, PyObject *element18, PyObject *element19, PyObject *element20, PyObject *element21, PyObject *element22, PyObject *element23, PyObject *element24, PyObject *element25, PyObject *element26, PyObject *element27, PyObject *element28, PyObject *element29, PyObject *element30, PyObject *element31, PyObject *element32, PyObject *element33, PyObject *element34, PyObject *element35, PyObject *element36, PyObject *element37, PyObject *element38, PyObject *element39, PyObject *element40, PyObject *element41, PyObject *element42, PyObject *element43, PyObject *element44, PyObject *element45, PyObject *element46, PyObject *element47, PyObject *element48, PyObject *element49, PyObject *element50, PyObject *element51, PyObject *element52, PyObject *element53, PyObject *element54, PyObject *element55, PyObject *element56, PyObject *element57, PyObject *element58, PyObject *element59, PyObject *element60, PyObject *element61, PyObject *element62, PyObject *element63, PyObject *element64, PyObject *element65, PyObject *element66, PyObject *element67, PyObject *element68, PyObject *element69, PyObject *element70, PyObject *element71, PyObject *element72, PyObject *element73, PyObject *element74, PyObject *element75, PyObject *element76, PyObject *element77, PyObject *element78, PyObject *element79 )
{
    PyObject *result = PyTuple_New( 80 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );
    assertObject( element11 );
    PyTuple_SET_ITEM( result, 11, INCREASE_REFCOUNT( element11 ) );
    assertObject( element12 );
    PyTuple_SET_ITEM( result, 12, INCREASE_REFCOUNT( element12 ) );
    assertObject( element13 );
    PyTuple_SET_ITEM( result, 13, INCREASE_REFCOUNT( element13 ) );
    assertObject( element14 );
    PyTuple_SET_ITEM( result, 14, INCREASE_REFCOUNT( element14 ) );
    assertObject( element15 );
    PyTuple_SET_ITEM( result, 15, INCREASE_REFCOUNT( element15 ) );
    assertObject( element16 );
    PyTuple_SET_ITEM( result, 16, INCREASE_REFCOUNT( element16 ) );
    assertObject( element17 );
    PyTuple_SET_ITEM( result, 17, INCREASE_REFCOUNT( element17 ) );
    assertObject( element18 );
    PyTuple_SET_ITEM( result, 18, INCREASE_REFCOUNT( element18 ) );
    assertObject( element19 );
    PyTuple_SET_ITEM( result, 19, INCREASE_REFCOUNT( element19 ) );
    assertObject( element20 );
    PyTuple_SET_ITEM( result, 20, INCREASE_REFCOUNT( element20 ) );
    assertObject( element21 );
    PyTuple_SET_ITEM( result, 21, INCREASE_REFCOUNT( element21 ) );
    assertObject( element22 );
    PyTuple_SET_ITEM( result, 22, INCREASE_REFCOUNT( element22 ) );
    assertObject( element23 );
    PyTuple_SET_ITEM( result, 23, INCREASE_REFCOUNT( element23 ) );
    assertObject( element24 );
    PyTuple_SET_ITEM( result, 24, INCREASE_REFCOUNT( element24 ) );
    assertObject( element25 );
    PyTuple_SET_ITEM( result, 25, INCREASE_REFCOUNT( element25 ) );
    assertObject( element26 );
    PyTuple_SET_ITEM( result, 26, INCREASE_REFCOUNT( element26 ) );
    assertObject( element27 );
    PyTuple_SET_ITEM( result, 27, INCREASE_REFCOUNT( element27 ) );
    assertObject( element28 );
    PyTuple_SET_ITEM( result, 28, INCREASE_REFCOUNT( element28 ) );
    assertObject( element29 );
    PyTuple_SET_ITEM( result, 29, INCREASE_REFCOUNT( element29 ) );
    assertObject( element30 );
    PyTuple_SET_ITEM( result, 30, INCREASE_REFCOUNT( element30 ) );
    assertObject( element31 );
    PyTuple_SET_ITEM( result, 31, INCREASE_REFCOUNT( element31 ) );
    assertObject( element32 );
    PyTuple_SET_ITEM( result, 32, INCREASE_REFCOUNT( element32 ) );
    assertObject( element33 );
    PyTuple_SET_ITEM( result, 33, INCREASE_REFCOUNT( element33 ) );
    assertObject( element34 );
    PyTuple_SET_ITEM( result, 34, INCREASE_REFCOUNT( element34 ) );
    assertObject( element35 );
    PyTuple_SET_ITEM( result, 35, INCREASE_REFCOUNT( element35 ) );
    assertObject( element36 );
    PyTuple_SET_ITEM( result, 36, INCREASE_REFCOUNT( element36 ) );
    assertObject( element37 );
    PyTuple_SET_ITEM( result, 37, INCREASE_REFCOUNT( element37 ) );
    assertObject( element38 );
    PyTuple_SET_ITEM( result, 38, INCREASE_REFCOUNT( element38 ) );
    assertObject( element39 );
    PyTuple_SET_ITEM( result, 39, INCREASE_REFCOUNT( element39 ) );
    assertObject( element40 );
    PyTuple_SET_ITEM( result, 40, INCREASE_REFCOUNT( element40 ) );
    assertObject( element41 );
    PyTuple_SET_ITEM( result, 41, INCREASE_REFCOUNT( element41 ) );
    assertObject( element42 );
    PyTuple_SET_ITEM( result, 42, INCREASE_REFCOUNT( element42 ) );
    assertObject( element43 );
    PyTuple_SET_ITEM( result, 43, INCREASE_REFCOUNT( element43 ) );
    assertObject( element44 );
    PyTuple_SET_ITEM( result, 44, INCREASE_REFCOUNT( element44 ) );
    assertObject( element45 );
    PyTuple_SET_ITEM( result, 45, INCREASE_REFCOUNT( element45 ) );
    assertObject( element46 );
    PyTuple_SET_ITEM( result, 46, INCREASE_REFCOUNT( element46 ) );
    assertObject( element47 );
    PyTuple_SET_ITEM( result, 47, INCREASE_REFCOUNT( element47 ) );
    assertObject( element48 );
    PyTuple_SET_ITEM( result, 48, INCREASE_REFCOUNT( element48 ) );
    assertObject( element49 );
    PyTuple_SET_ITEM( result, 49, INCREASE_REFCOUNT( element49 ) );
    assertObject( element50 );
    PyTuple_SET_ITEM( result, 50, INCREASE_REFCOUNT( element50 ) );
    assertObject( element51 );
    PyTuple_SET_ITEM( result, 51, INCREASE_REFCOUNT( element51 ) );
    assertObject( element52 );
    PyTuple_SET_ITEM( result, 52, INCREASE_REFCOUNT( element52 ) );
    assertObject( element53 );
    PyTuple_SET_ITEM( result, 53, INCREASE_REFCOUNT( element53 ) );
    assertObject( element54 );
    PyTuple_SET_ITEM( result, 54, INCREASE_REFCOUNT( element54 ) );
    assertObject( element55 );
    PyTuple_SET_ITEM( result, 55, INCREASE_REFCOUNT( element55 ) );
    assertObject( element56 );
    PyTuple_SET_ITEM( result, 56, INCREASE_REFCOUNT( element56 ) );
    assertObject( element57 );
    PyTuple_SET_ITEM( result, 57, INCREASE_REFCOUNT( element57 ) );
    assertObject( element58 );
    PyTuple_SET_ITEM( result, 58, INCREASE_REFCOUNT( element58 ) );
    assertObject( element59 );
    PyTuple_SET_ITEM( result, 59, INCREASE_REFCOUNT( element59 ) );
    assertObject( element60 );
    PyTuple_SET_ITEM( result, 60, INCREASE_REFCOUNT( element60 ) );
    assertObject( element61 );
    PyTuple_SET_ITEM( result, 61, INCREASE_REFCOUNT( element61 ) );
    assertObject( element62 );
    PyTuple_SET_ITEM( result, 62, INCREASE_REFCOUNT( element62 ) );
    assertObject( element63 );
    PyTuple_SET_ITEM( result, 63, INCREASE_REFCOUNT( element63 ) );
    assertObject( element64 );
    PyTuple_SET_ITEM( result, 64, INCREASE_REFCOUNT( element64 ) );
    assertObject( element65 );
    PyTuple_SET_ITEM( result, 65, INCREASE_REFCOUNT( element65 ) );
    assertObject( element66 );
    PyTuple_SET_ITEM( result, 66, INCREASE_REFCOUNT( element66 ) );
    assertObject( element67 );
    PyTuple_SET_ITEM( result, 67, INCREASE_REFCOUNT( element67 ) );
    assertObject( element68 );
    PyTuple_SET_ITEM( result, 68, INCREASE_REFCOUNT( element68 ) );
    assertObject( element69 );
    PyTuple_SET_ITEM( result, 69, INCREASE_REFCOUNT( element69 ) );
    assertObject( element70 );
    PyTuple_SET_ITEM( result, 70, INCREASE_REFCOUNT( element70 ) );
    assertObject( element71 );
    PyTuple_SET_ITEM( result, 71, INCREASE_REFCOUNT( element71 ) );
    assertObject( element72 );
    PyTuple_SET_ITEM( result, 72, INCREASE_REFCOUNT( element72 ) );
    assertObject( element73 );
    PyTuple_SET_ITEM( result, 73, INCREASE_REFCOUNT( element73 ) );
    assertObject( element74 );
    PyTuple_SET_ITEM( result, 74, INCREASE_REFCOUNT( element74 ) );
    assertObject( element75 );
    PyTuple_SET_ITEM( result, 75, INCREASE_REFCOUNT( element75 ) );
    assertObject( element76 );
    PyTuple_SET_ITEM( result, 76, INCREASE_REFCOUNT( element76 ) );
    assertObject( element77 );
    PyTuple_SET_ITEM( result, 77, INCREASE_REFCOUNT( element77 ) );
    assertObject( element78 );
    PyTuple_SET_ITEM( result, 78, INCREASE_REFCOUNT( element78 ) );
    assertObject( element79 );
    PyTuple_SET_ITEM( result, 79, INCREASE_REFCOUNT( element79 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

#endif
#ifndef __NUITKA_LISTS_H__
#define __NUITKA_LISTS_H__

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST0(  )
{
    PyObject *result = PyList_New( 0 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }



    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST1( PyObject *element0 )
{
    PyObject *result = PyList_New( 1 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST2( PyObject *element0, PyObject *element1 )
{
    PyObject *result = PyList_New( 2 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST3( PyObject *element0, PyObject *element1, PyObject *element2 )
{
    PyObject *result = PyList_New( 3 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST4( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3 )
{
    PyObject *result = PyList_New( 4 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST5( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4 )
{
    PyObject *result = PyList_New( 5 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST6( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5 )
{
    PyObject *result = PyList_New( 6 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );
    assertObject( element5 );
    PyList_SET_ITEM( result, 5, element5 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST7( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6 )
{
    PyObject *result = PyList_New( 7 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );
    assertObject( element5 );
    PyList_SET_ITEM( result, 5, element5 );
    assertObject( element6 );
    PyList_SET_ITEM( result, 6, element6 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST8( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7 )
{
    PyObject *result = PyList_New( 8 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );
    assertObject( element5 );
    PyList_SET_ITEM( result, 5, element5 );
    assertObject( element6 );
    PyList_SET_ITEM( result, 6, element6 );
    assertObject( element7 );
    PyList_SET_ITEM( result, 7, element7 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST10( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9 )
{
    PyObject *result = PyList_New( 10 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );
    assertObject( element5 );
    PyList_SET_ITEM( result, 5, element5 );
    assertObject( element6 );
    PyList_SET_ITEM( result, 6, element6 );
    assertObject( element7 );
    PyList_SET_ITEM( result, 7, element7 );
    assertObject( element8 );
    PyList_SET_ITEM( result, 8, element8 );
    assertObject( element9 );
    PyList_SET_ITEM( result, 9, element9 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST11( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10 )
{
    PyObject *result = PyList_New( 11 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );
    assertObject( element5 );
    PyList_SET_ITEM( result, 5, element5 );
    assertObject( element6 );
    PyList_SET_ITEM( result, 6, element6 );
    assertObject( element7 );
    PyList_SET_ITEM( result, 7, element7 );
    assertObject( element8 );
    PyList_SET_ITEM( result, 8, element8 );
    assertObject( element9 );
    PyList_SET_ITEM( result, 9, element9 );
    assertObject( element10 );
    PyList_SET_ITEM( result, 10, element10 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST13( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12 )
{
    PyObject *result = PyList_New( 13 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );
    assertObject( element5 );
    PyList_SET_ITEM( result, 5, element5 );
    assertObject( element6 );
    PyList_SET_ITEM( result, 6, element6 );
    assertObject( element7 );
    PyList_SET_ITEM( result, 7, element7 );
    assertObject( element8 );
    PyList_SET_ITEM( result, 8, element8 );
    assertObject( element9 );
    PyList_SET_ITEM( result, 9, element9 );
    assertObject( element10 );
    PyList_SET_ITEM( result, 10, element10 );
    assertObject( element11 );
    PyList_SET_ITEM( result, 11, element11 );
    assertObject( element12 );
    PyList_SET_ITEM( result, 12, element12 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST14( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13 )
{
    PyObject *result = PyList_New( 14 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );
    assertObject( element5 );
    PyList_SET_ITEM( result, 5, element5 );
    assertObject( element6 );
    PyList_SET_ITEM( result, 6, element6 );
    assertObject( element7 );
    PyList_SET_ITEM( result, 7, element7 );
    assertObject( element8 );
    PyList_SET_ITEM( result, 8, element8 );
    assertObject( element9 );
    PyList_SET_ITEM( result, 9, element9 );
    assertObject( element10 );
    PyList_SET_ITEM( result, 10, element10 );
    assertObject( element11 );
    PyList_SET_ITEM( result, 11, element11 );
    assertObject( element12 );
    PyList_SET_ITEM( result, 12, element12 );
    assertObject( element13 );
    PyList_SET_ITEM( result, 13, element13 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST17( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16 )
{
    PyObject *result = PyList_New( 17 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );
    assertObject( element5 );
    PyList_SET_ITEM( result, 5, element5 );
    assertObject( element6 );
    PyList_SET_ITEM( result, 6, element6 );
    assertObject( element7 );
    PyList_SET_ITEM( result, 7, element7 );
    assertObject( element8 );
    PyList_SET_ITEM( result, 8, element8 );
    assertObject( element9 );
    PyList_SET_ITEM( result, 9, element9 );
    assertObject( element10 );
    PyList_SET_ITEM( result, 10, element10 );
    assertObject( element11 );
    PyList_SET_ITEM( result, 11, element11 );
    assertObject( element12 );
    PyList_SET_ITEM( result, 12, element12 );
    assertObject( element13 );
    PyList_SET_ITEM( result, 13, element13 );
    assertObject( element14 );
    PyList_SET_ITEM( result, 14, element14 );
    assertObject( element15 );
    PyList_SET_ITEM( result, 15, element15 );
    assertObject( element16 );
    PyList_SET_ITEM( result, 16, element16 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST20( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16, PyObject *element17, PyObject *element18, PyObject *element19 )
{
    PyObject *result = PyList_New( 20 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );
    assertObject( element5 );
    PyList_SET_ITEM( result, 5, element5 );
    assertObject( element6 );
    PyList_SET_ITEM( result, 6, element6 );
    assertObject( element7 );
    PyList_SET_ITEM( result, 7, element7 );
    assertObject( element8 );
    PyList_SET_ITEM( result, 8, element8 );
    assertObject( element9 );
    PyList_SET_ITEM( result, 9, element9 );
    assertObject( element10 );
    PyList_SET_ITEM( result, 10, element10 );
    assertObject( element11 );
    PyList_SET_ITEM( result, 11, element11 );
    assertObject( element12 );
    PyList_SET_ITEM( result, 12, element12 );
    assertObject( element13 );
    PyList_SET_ITEM( result, 13, element13 );
    assertObject( element14 );
    PyList_SET_ITEM( result, 14, element14 );
    assertObject( element15 );
    PyList_SET_ITEM( result, 15, element15 );
    assertObject( element16 );
    PyList_SET_ITEM( result, 16, element16 );
    assertObject( element17 );
    PyList_SET_ITEM( result, 17, element17 );
    assertObject( element18 );
    PyList_SET_ITEM( result, 18, element18 );
    assertObject( element19 );
    PyList_SET_ITEM( result, 19, element19 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST25( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16, PyObject *element17, PyObject *element18, PyObject *element19, PyObject *element20, PyObject *element21, PyObject *element22, PyObject *element23, PyObject *element24 )
{
    PyObject *result = PyList_New( 25 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );
    assertObject( element5 );
    PyList_SET_ITEM( result, 5, element5 );
    assertObject( element6 );
    PyList_SET_ITEM( result, 6, element6 );
    assertObject( element7 );
    PyList_SET_ITEM( result, 7, element7 );
    assertObject( element8 );
    PyList_SET_ITEM( result, 8, element8 );
    assertObject( element9 );
    PyList_SET_ITEM( result, 9, element9 );
    assertObject( element10 );
    PyList_SET_ITEM( result, 10, element10 );
    assertObject( element11 );
    PyList_SET_ITEM( result, 11, element11 );
    assertObject( element12 );
    PyList_SET_ITEM( result, 12, element12 );
    assertObject( element13 );
    PyList_SET_ITEM( result, 13, element13 );
    assertObject( element14 );
    PyList_SET_ITEM( result, 14, element14 );
    assertObject( element15 );
    PyList_SET_ITEM( result, 15, element15 );
    assertObject( element16 );
    PyList_SET_ITEM( result, 16, element16 );
    assertObject( element17 );
    PyList_SET_ITEM( result, 17, element17 );
    assertObject( element18 );
    PyList_SET_ITEM( result, 18, element18 );
    assertObject( element19 );
    PyList_SET_ITEM( result, 19, element19 );
    assertObject( element20 );
    PyList_SET_ITEM( result, 20, element20 );
    assertObject( element21 );
    PyList_SET_ITEM( result, 21, element21 );
    assertObject( element22 );
    PyList_SET_ITEM( result, 22, element22 );
    assertObject( element23 );
    PyList_SET_ITEM( result, 23, element23 );
    assertObject( element24 );
    PyList_SET_ITEM( result, 24, element24 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST26( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16, PyObject *element17, PyObject *element18, PyObject *element19, PyObject *element20, PyObject *element21, PyObject *element22, PyObject *element23, PyObject *element24, PyObject *element25 )
{
    PyObject *result = PyList_New( 26 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );
    assertObject( element5 );
    PyList_SET_ITEM( result, 5, element5 );
    assertObject( element6 );
    PyList_SET_ITEM( result, 6, element6 );
    assertObject( element7 );
    PyList_SET_ITEM( result, 7, element7 );
    assertObject( element8 );
    PyList_SET_ITEM( result, 8, element8 );
    assertObject( element9 );
    PyList_SET_ITEM( result, 9, element9 );
    assertObject( element10 );
    PyList_SET_ITEM( result, 10, element10 );
    assertObject( element11 );
    PyList_SET_ITEM( result, 11, element11 );
    assertObject( element12 );
    PyList_SET_ITEM( result, 12, element12 );
    assertObject( element13 );
    PyList_SET_ITEM( result, 13, element13 );
    assertObject( element14 );
    PyList_SET_ITEM( result, 14, element14 );
    assertObject( element15 );
    PyList_SET_ITEM( result, 15, element15 );
    assertObject( element16 );
    PyList_SET_ITEM( result, 16, element16 );
    assertObject( element17 );
    PyList_SET_ITEM( result, 17, element17 );
    assertObject( element18 );
    PyList_SET_ITEM( result, 18, element18 );
    assertObject( element19 );
    PyList_SET_ITEM( result, 19, element19 );
    assertObject( element20 );
    PyList_SET_ITEM( result, 20, element20 );
    assertObject( element21 );
    PyList_SET_ITEM( result, 21, element21 );
    assertObject( element22 );
    PyList_SET_ITEM( result, 22, element22 );
    assertObject( element23 );
    PyList_SET_ITEM( result, 23, element23 );
    assertObject( element24 );
    PyList_SET_ITEM( result, 24, element24 );
    assertObject( element25 );
    PyList_SET_ITEM( result, 25, element25 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST32( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16, PyObject *element17, PyObject *element18, PyObject *element19, PyObject *element20, PyObject *element21, PyObject *element22, PyObject *element23, PyObject *element24, PyObject *element25, PyObject *element26, PyObject *element27, PyObject *element28, PyObject *element29, PyObject *element30, PyObject *element31 )
{
    PyObject *result = PyList_New( 32 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );
    assertObject( element5 );
    PyList_SET_ITEM( result, 5, element5 );
    assertObject( element6 );
    PyList_SET_ITEM( result, 6, element6 );
    assertObject( element7 );
    PyList_SET_ITEM( result, 7, element7 );
    assertObject( element8 );
    PyList_SET_ITEM( result, 8, element8 );
    assertObject( element9 );
    PyList_SET_ITEM( result, 9, element9 );
    assertObject( element10 );
    PyList_SET_ITEM( result, 10, element10 );
    assertObject( element11 );
    PyList_SET_ITEM( result, 11, element11 );
    assertObject( element12 );
    PyList_SET_ITEM( result, 12, element12 );
    assertObject( element13 );
    PyList_SET_ITEM( result, 13, element13 );
    assertObject( element14 );
    PyList_SET_ITEM( result, 14, element14 );
    assertObject( element15 );
    PyList_SET_ITEM( result, 15, element15 );
    assertObject( element16 );
    PyList_SET_ITEM( result, 16, element16 );
    assertObject( element17 );
    PyList_SET_ITEM( result, 17, element17 );
    assertObject( element18 );
    PyList_SET_ITEM( result, 18, element18 );
    assertObject( element19 );
    PyList_SET_ITEM( result, 19, element19 );
    assertObject( element20 );
    PyList_SET_ITEM( result, 20, element20 );
    assertObject( element21 );
    PyList_SET_ITEM( result, 21, element21 );
    assertObject( element22 );
    PyList_SET_ITEM( result, 22, element22 );
    assertObject( element23 );
    PyList_SET_ITEM( result, 23, element23 );
    assertObject( element24 );
    PyList_SET_ITEM( result, 24, element24 );
    assertObject( element25 );
    PyList_SET_ITEM( result, 25, element25 );
    assertObject( element26 );
    PyList_SET_ITEM( result, 26, element26 );
    assertObject( element27 );
    PyList_SET_ITEM( result, 27, element27 );
    assertObject( element28 );
    PyList_SET_ITEM( result, 28, element28 );
    assertObject( element29 );
    PyList_SET_ITEM( result, 29, element29 );
    assertObject( element30 );
    PyList_SET_ITEM( result, 30, element30 );
    assertObject( element31 );
    PyList_SET_ITEM( result, 31, element31 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST43( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16, PyObject *element17, PyObject *element18, PyObject *element19, PyObject *element20, PyObject *element21, PyObject *element22, PyObject *element23, PyObject *element24, PyObject *element25, PyObject *element26, PyObject *element27, PyObject *element28, PyObject *element29, PyObject *element30, PyObject *element31, PyObject *element32, PyObject *element33, PyObject *element34, PyObject *element35, PyObject *element36, PyObject *element37, PyObject *element38, PyObject *element39, PyObject *element40, PyObject *element41, PyObject *element42 )
{
    PyObject *result = PyList_New( 43 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );
    assertObject( element3 );
    PyList_SET_ITEM( result, 3, element3 );
    assertObject( element4 );
    PyList_SET_ITEM( result, 4, element4 );
    assertObject( element5 );
    PyList_SET_ITEM( result, 5, element5 );
    assertObject( element6 );
    PyList_SET_ITEM( result, 6, element6 );
    assertObject( element7 );
    PyList_SET_ITEM( result, 7, element7 );
    assertObject( element8 );
    PyList_SET_ITEM( result, 8, element8 );
    assertObject( element9 );
    PyList_SET_ITEM( result, 9, element9 );
    assertObject( element10 );
    PyList_SET_ITEM( result, 10, element10 );
    assertObject( element11 );
    PyList_SET_ITEM( result, 11, element11 );
    assertObject( element12 );
    PyList_SET_ITEM( result, 12, element12 );
    assertObject( element13 );
    PyList_SET_ITEM( result, 13, element13 );
    assertObject( element14 );
    PyList_SET_ITEM( result, 14, element14 );
    assertObject( element15 );
    PyList_SET_ITEM( result, 15, element15 );
    assertObject( element16 );
    PyList_SET_ITEM( result, 16, element16 );
    assertObject( element17 );
    PyList_SET_ITEM( result, 17, element17 );
    assertObject( element18 );
    PyList_SET_ITEM( result, 18, element18 );
    assertObject( element19 );
    PyList_SET_ITEM( result, 19, element19 );
    assertObject( element20 );
    PyList_SET_ITEM( result, 20, element20 );
    assertObject( element21 );
    PyList_SET_ITEM( result, 21, element21 );
    assertObject( element22 );
    PyList_SET_ITEM( result, 22, element22 );
    assertObject( element23 );
    PyList_SET_ITEM( result, 23, element23 );
    assertObject( element24 );
    PyList_SET_ITEM( result, 24, element24 );
    assertObject( element25 );
    PyList_SET_ITEM( result, 25, element25 );
    assertObject( element26 );
    PyList_SET_ITEM( result, 26, element26 );
    assertObject( element27 );
    PyList_SET_ITEM( result, 27, element27 );
    assertObject( element28 );
    PyList_SET_ITEM( result, 28, element28 );
    assertObject( element29 );
    PyList_SET_ITEM( result, 29, element29 );
    assertObject( element30 );
    PyList_SET_ITEM( result, 30, element30 );
    assertObject( element31 );
    PyList_SET_ITEM( result, 31, element31 );
    assertObject( element32 );
    PyList_SET_ITEM( result, 32, element32 );
    assertObject( element33 );
    PyList_SET_ITEM( result, 33, element33 );
    assertObject( element34 );
    PyList_SET_ITEM( result, 34, element34 );
    assertObject( element35 );
    PyList_SET_ITEM( result, 35, element35 );
    assertObject( element36 );
    PyList_SET_ITEM( result, 36, element36 );
    assertObject( element37 );
    PyList_SET_ITEM( result, 37, element37 );
    assertObject( element38 );
    PyList_SET_ITEM( result, 38, element38 );
    assertObject( element39 );
    PyList_SET_ITEM( result, 39, element39 );
    assertObject( element40 );
    PyList_SET_ITEM( result, 40, element40 );
    assertObject( element41 );
    PyList_SET_ITEM( result, 41, element41 );
    assertObject( element42 );
    PyList_SET_ITEM( result, 42, element42 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

#endif
#ifndef __NUITKA_DICTS_H__
#define __NUITKA_DICTS_H__

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT0(  )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }



    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT1( PyObject *value1, PyObject *key1 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT2( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT3( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT4( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT5( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT6( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5, PyObject *value6, PyObject *key6 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key6 );
    assertObject( value6 );

    {
        int status = PyDict_SetItem( result, key6, value6 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT7( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5, PyObject *value6, PyObject *key6, PyObject *value7, PyObject *key7 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key7 );
    assertObject( value7 );

    {
        int status = PyDict_SetItem( result, key7, value7 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key6 );
    assertObject( value6 );

    {
        int status = PyDict_SetItem( result, key6, value6 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT8( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5, PyObject *value6, PyObject *key6, PyObject *value7, PyObject *key7, PyObject *value8, PyObject *key8 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key8 );
    assertObject( value8 );

    {
        int status = PyDict_SetItem( result, key8, value8 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key7 );
    assertObject( value7 );

    {
        int status = PyDict_SetItem( result, key7, value7 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key6 );
    assertObject( value6 );

    {
        int status = PyDict_SetItem( result, key6, value6 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT9( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5, PyObject *value6, PyObject *key6, PyObject *value7, PyObject *key7, PyObject *value8, PyObject *key8, PyObject *value9, PyObject *key9 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key9 );
    assertObject( value9 );

    {
        int status = PyDict_SetItem( result, key9, value9 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key8 );
    assertObject( value8 );

    {
        int status = PyDict_SetItem( result, key8, value8 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key7 );
    assertObject( value7 );

    {
        int status = PyDict_SetItem( result, key7, value7 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key6 );
    assertObject( value6 );

    {
        int status = PyDict_SetItem( result, key6, value6 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT10( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5, PyObject *value6, PyObject *key6, PyObject *value7, PyObject *key7, PyObject *value8, PyObject *key8, PyObject *value9, PyObject *key9, PyObject *value10, PyObject *key10 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key10 );
    assertObject( value10 );

    {
        int status = PyDict_SetItem( result, key10, value10 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key9 );
    assertObject( value9 );

    {
        int status = PyDict_SetItem( result, key9, value9 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key8 );
    assertObject( value8 );

    {
        int status = PyDict_SetItem( result, key8, value8 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key7 );
    assertObject( value7 );

    {
        int status = PyDict_SetItem( result, key7, value7 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key6 );
    assertObject( value6 );

    {
        int status = PyDict_SetItem( result, key6, value6 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT11( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5, PyObject *value6, PyObject *key6, PyObject *value7, PyObject *key7, PyObject *value8, PyObject *key8, PyObject *value9, PyObject *key9, PyObject *value10, PyObject *key10, PyObject *value11, PyObject *key11 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key11 );
    assertObject( value11 );

    {
        int status = PyDict_SetItem( result, key11, value11 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key10 );
    assertObject( value10 );

    {
        int status = PyDict_SetItem( result, key10, value10 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key9 );
    assertObject( value9 );

    {
        int status = PyDict_SetItem( result, key9, value9 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key8 );
    assertObject( value8 );

    {
        int status = PyDict_SetItem( result, key8, value8 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key7 );
    assertObject( value7 );

    {
        int status = PyDict_SetItem( result, key7, value7 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key6 );
    assertObject( value6 );

    {
        int status = PyDict_SetItem( result, key6, value6 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT12( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5, PyObject *value6, PyObject *key6, PyObject *value7, PyObject *key7, PyObject *value8, PyObject *key8, PyObject *value9, PyObject *key9, PyObject *value10, PyObject *key10, PyObject *value11, PyObject *key11, PyObject *value12, PyObject *key12 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key12 );
    assertObject( value12 );

    {
        int status = PyDict_SetItem( result, key12, value12 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key11 );
    assertObject( value11 );

    {
        int status = PyDict_SetItem( result, key11, value11 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key10 );
    assertObject( value10 );

    {
        int status = PyDict_SetItem( result, key10, value10 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key9 );
    assertObject( value9 );

    {
        int status = PyDict_SetItem( result, key9, value9 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key8 );
    assertObject( value8 );

    {
        int status = PyDict_SetItem( result, key8, value8 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key7 );
    assertObject( value7 );

    {
        int status = PyDict_SetItem( result, key7, value7 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key6 );
    assertObject( value6 );

    {
        int status = PyDict_SetItem( result, key6, value6 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT13( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5, PyObject *value6, PyObject *key6, PyObject *value7, PyObject *key7, PyObject *value8, PyObject *key8, PyObject *value9, PyObject *key9, PyObject *value10, PyObject *key10, PyObject *value11, PyObject *key11, PyObject *value12, PyObject *key12, PyObject *value13, PyObject *key13 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key13 );
    assertObject( value13 );

    {
        int status = PyDict_SetItem( result, key13, value13 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key12 );
    assertObject( value12 );

    {
        int status = PyDict_SetItem( result, key12, value12 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key11 );
    assertObject( value11 );

    {
        int status = PyDict_SetItem( result, key11, value11 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key10 );
    assertObject( value10 );

    {
        int status = PyDict_SetItem( result, key10, value10 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key9 );
    assertObject( value9 );

    {
        int status = PyDict_SetItem( result, key9, value9 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key8 );
    assertObject( value8 );

    {
        int status = PyDict_SetItem( result, key8, value8 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key7 );
    assertObject( value7 );

    {
        int status = PyDict_SetItem( result, key7, value7 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key6 );
    assertObject( value6 );

    {
        int status = PyDict_SetItem( result, key6, value6 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT14( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5, PyObject *value6, PyObject *key6, PyObject *value7, PyObject *key7, PyObject *value8, PyObject *key8, PyObject *value9, PyObject *key9, PyObject *value10, PyObject *key10, PyObject *value11, PyObject *key11, PyObject *value12, PyObject *key12, PyObject *value13, PyObject *key13, PyObject *value14, PyObject *key14 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key14 );
    assertObject( value14 );

    {
        int status = PyDict_SetItem( result, key14, value14 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key13 );
    assertObject( value13 );

    {
        int status = PyDict_SetItem( result, key13, value13 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key12 );
    assertObject( value12 );

    {
        int status = PyDict_SetItem( result, key12, value12 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key11 );
    assertObject( value11 );

    {
        int status = PyDict_SetItem( result, key11, value11 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key10 );
    assertObject( value10 );

    {
        int status = PyDict_SetItem( result, key10, value10 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key9 );
    assertObject( value9 );

    {
        int status = PyDict_SetItem( result, key9, value9 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key8 );
    assertObject( value8 );

    {
        int status = PyDict_SetItem( result, key8, value8 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key7 );
    assertObject( value7 );

    {
        int status = PyDict_SetItem( result, key7, value7 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key6 );
    assertObject( value6 );

    {
        int status = PyDict_SetItem( result, key6, value6 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT16( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5, PyObject *value6, PyObject *key6, PyObject *value7, PyObject *key7, PyObject *value8, PyObject *key8, PyObject *value9, PyObject *key9, PyObject *value10, PyObject *key10, PyObject *value11, PyObject *key11, PyObject *value12, PyObject *key12, PyObject *value13, PyObject *key13, PyObject *value14, PyObject *key14, PyObject *value15, PyObject *key15, PyObject *value16, PyObject *key16 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key16 );
    assertObject( value16 );

    {
        int status = PyDict_SetItem( result, key16, value16 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key15 );
    assertObject( value15 );

    {
        int status = PyDict_SetItem( result, key15, value15 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key14 );
    assertObject( value14 );

    {
        int status = PyDict_SetItem( result, key14, value14 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key13 );
    assertObject( value13 );

    {
        int status = PyDict_SetItem( result, key13, value13 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key12 );
    assertObject( value12 );

    {
        int status = PyDict_SetItem( result, key12, value12 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key11 );
    assertObject( value11 );

    {
        int status = PyDict_SetItem( result, key11, value11 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key10 );
    assertObject( value10 );

    {
        int status = PyDict_SetItem( result, key10, value10 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key9 );
    assertObject( value9 );

    {
        int status = PyDict_SetItem( result, key9, value9 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key8 );
    assertObject( value8 );

    {
        int status = PyDict_SetItem( result, key8, value8 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key7 );
    assertObject( value7 );

    {
        int status = PyDict_SetItem( result, key7, value7 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key6 );
    assertObject( value6 );

    {
        int status = PyDict_SetItem( result, key6, value6 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT26( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5, PyObject *value6, PyObject *key6, PyObject *value7, PyObject *key7, PyObject *value8, PyObject *key8, PyObject *value9, PyObject *key9, PyObject *value10, PyObject *key10, PyObject *value11, PyObject *key11, PyObject *value12, PyObject *key12, PyObject *value13, PyObject *key13, PyObject *value14, PyObject *key14, PyObject *value15, PyObject *key15, PyObject *value16, PyObject *key16, PyObject *value17, PyObject *key17, PyObject *value18, PyObject *key18, PyObject *value19, PyObject *key19, PyObject *value20, PyObject *key20, PyObject *value21, PyObject *key21, PyObject *value22, PyObject *key22, PyObject *value23, PyObject *key23, PyObject *value24, PyObject *key24, PyObject *value25, PyObject *key25, PyObject *value26, PyObject *key26 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key26 );
    assertObject( value26 );

    {
        int status = PyDict_SetItem( result, key26, value26 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key25 );
    assertObject( value25 );

    {
        int status = PyDict_SetItem( result, key25, value25 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key24 );
    assertObject( value24 );

    {
        int status = PyDict_SetItem( result, key24, value24 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key23 );
    assertObject( value23 );

    {
        int status = PyDict_SetItem( result, key23, value23 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key22 );
    assertObject( value22 );

    {
        int status = PyDict_SetItem( result, key22, value22 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key21 );
    assertObject( value21 );

    {
        int status = PyDict_SetItem( result, key21, value21 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key20 );
    assertObject( value20 );

    {
        int status = PyDict_SetItem( result, key20, value20 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key19 );
    assertObject( value19 );

    {
        int status = PyDict_SetItem( result, key19, value19 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key18 );
    assertObject( value18 );

    {
        int status = PyDict_SetItem( result, key18, value18 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key17 );
    assertObject( value17 );

    {
        int status = PyDict_SetItem( result, key17, value17 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key16 );
    assertObject( value16 );

    {
        int status = PyDict_SetItem( result, key16, value16 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key15 );
    assertObject( value15 );

    {
        int status = PyDict_SetItem( result, key15, value15 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key14 );
    assertObject( value14 );

    {
        int status = PyDict_SetItem( result, key14, value14 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key13 );
    assertObject( value13 );

    {
        int status = PyDict_SetItem( result, key13, value13 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key12 );
    assertObject( value12 );

    {
        int status = PyDict_SetItem( result, key12, value12 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key11 );
    assertObject( value11 );

    {
        int status = PyDict_SetItem( result, key11, value11 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key10 );
    assertObject( value10 );

    {
        int status = PyDict_SetItem( result, key10, value10 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key9 );
    assertObject( value9 );

    {
        int status = PyDict_SetItem( result, key9, value9 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key8 );
    assertObject( value8 );

    {
        int status = PyDict_SetItem( result, key8, value8 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key7 );
    assertObject( value7 );

    {
        int status = PyDict_SetItem( result, key7, value7 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key6 );
    assertObject( value6 );

    {
        int status = PyDict_SetItem( result, key6, value6 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT54( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5, PyObject *value6, PyObject *key6, PyObject *value7, PyObject *key7, PyObject *value8, PyObject *key8, PyObject *value9, PyObject *key9, PyObject *value10, PyObject *key10, PyObject *value11, PyObject *key11, PyObject *value12, PyObject *key12, PyObject *value13, PyObject *key13, PyObject *value14, PyObject *key14, PyObject *value15, PyObject *key15, PyObject *value16, PyObject *key16, PyObject *value17, PyObject *key17, PyObject *value18, PyObject *key18, PyObject *value19, PyObject *key19, PyObject *value20, PyObject *key20, PyObject *value21, PyObject *key21, PyObject *value22, PyObject *key22, PyObject *value23, PyObject *key23, PyObject *value24, PyObject *key24, PyObject *value25, PyObject *key25, PyObject *value26, PyObject *key26, PyObject *value27, PyObject *key27, PyObject *value28, PyObject *key28, PyObject *value29, PyObject *key29, PyObject *value30, PyObject *key30, PyObject *value31, PyObject *key31, PyObject *value32, PyObject *key32, PyObject *value33, PyObject *key33, PyObject *value34, PyObject *key34, PyObject *value35, PyObject *key35, PyObject *value36, PyObject *key36, PyObject *value37, PyObject *key37, PyObject *value38, PyObject *key38, PyObject *value39, PyObject *key39, PyObject *value40, PyObject *key40, PyObject *value41, PyObject *key41, PyObject *value42, PyObject *key42, PyObject *value43, PyObject *key43, PyObject *value44, PyObject *key44, PyObject *value45, PyObject *key45, PyObject *value46, PyObject *key46, PyObject *value47, PyObject *key47, PyObject *value48, PyObject *key48, PyObject *value49, PyObject *key49, PyObject *value50, PyObject *key50, PyObject *value51, PyObject *key51, PyObject *value52, PyObject *key52, PyObject *value53, PyObject *key53, PyObject *value54, PyObject *key54 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key54 );
    assertObject( value54 );

    {
        int status = PyDict_SetItem( result, key54, value54 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key53 );
    assertObject( value53 );

    {
        int status = PyDict_SetItem( result, key53, value53 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key52 );
    assertObject( value52 );

    {
        int status = PyDict_SetItem( result, key52, value52 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key51 );
    assertObject( value51 );

    {
        int status = PyDict_SetItem( result, key51, value51 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key50 );
    assertObject( value50 );

    {
        int status = PyDict_SetItem( result, key50, value50 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key49 );
    assertObject( value49 );

    {
        int status = PyDict_SetItem( result, key49, value49 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key48 );
    assertObject( value48 );

    {
        int status = PyDict_SetItem( result, key48, value48 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key47 );
    assertObject( value47 );

    {
        int status = PyDict_SetItem( result, key47, value47 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key46 );
    assertObject( value46 );

    {
        int status = PyDict_SetItem( result, key46, value46 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key45 );
    assertObject( value45 );

    {
        int status = PyDict_SetItem( result, key45, value45 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key44 );
    assertObject( value44 );

    {
        int status = PyDict_SetItem( result, key44, value44 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key43 );
    assertObject( value43 );

    {
        int status = PyDict_SetItem( result, key43, value43 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key42 );
    assertObject( value42 );

    {
        int status = PyDict_SetItem( result, key42, value42 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key41 );
    assertObject( value41 );

    {
        int status = PyDict_SetItem( result, key41, value41 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key40 );
    assertObject( value40 );

    {
        int status = PyDict_SetItem( result, key40, value40 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key39 );
    assertObject( value39 );

    {
        int status = PyDict_SetItem( result, key39, value39 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key38 );
    assertObject( value38 );

    {
        int status = PyDict_SetItem( result, key38, value38 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key37 );
    assertObject( value37 );

    {
        int status = PyDict_SetItem( result, key37, value37 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key36 );
    assertObject( value36 );

    {
        int status = PyDict_SetItem( result, key36, value36 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key35 );
    assertObject( value35 );

    {
        int status = PyDict_SetItem( result, key35, value35 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key34 );
    assertObject( value34 );

    {
        int status = PyDict_SetItem( result, key34, value34 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key33 );
    assertObject( value33 );

    {
        int status = PyDict_SetItem( result, key33, value33 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key32 );
    assertObject( value32 );

    {
        int status = PyDict_SetItem( result, key32, value32 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key31 );
    assertObject( value31 );

    {
        int status = PyDict_SetItem( result, key31, value31 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key30 );
    assertObject( value30 );

    {
        int status = PyDict_SetItem( result, key30, value30 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key29 );
    assertObject( value29 );

    {
        int status = PyDict_SetItem( result, key29, value29 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key28 );
    assertObject( value28 );

    {
        int status = PyDict_SetItem( result, key28, value28 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key27 );
    assertObject( value27 );

    {
        int status = PyDict_SetItem( result, key27, value27 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key26 );
    assertObject( value26 );

    {
        int status = PyDict_SetItem( result, key26, value26 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key25 );
    assertObject( value25 );

    {
        int status = PyDict_SetItem( result, key25, value25 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key24 );
    assertObject( value24 );

    {
        int status = PyDict_SetItem( result, key24, value24 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key23 );
    assertObject( value23 );

    {
        int status = PyDict_SetItem( result, key23, value23 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key22 );
    assertObject( value22 );

    {
        int status = PyDict_SetItem( result, key22, value22 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key21 );
    assertObject( value21 );

    {
        int status = PyDict_SetItem( result, key21, value21 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key20 );
    assertObject( value20 );

    {
        int status = PyDict_SetItem( result, key20, value20 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key19 );
    assertObject( value19 );

    {
        int status = PyDict_SetItem( result, key19, value19 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key18 );
    assertObject( value18 );

    {
        int status = PyDict_SetItem( result, key18, value18 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key17 );
    assertObject( value17 );

    {
        int status = PyDict_SetItem( result, key17, value17 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key16 );
    assertObject( value16 );

    {
        int status = PyDict_SetItem( result, key16, value16 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key15 );
    assertObject( value15 );

    {
        int status = PyDict_SetItem( result, key15, value15 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key14 );
    assertObject( value14 );

    {
        int status = PyDict_SetItem( result, key14, value14 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key13 );
    assertObject( value13 );

    {
        int status = PyDict_SetItem( result, key13, value13 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key12 );
    assertObject( value12 );

    {
        int status = PyDict_SetItem( result, key12, value12 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key11 );
    assertObject( value11 );

    {
        int status = PyDict_SetItem( result, key11, value11 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key10 );
    assertObject( value10 );

    {
        int status = PyDict_SetItem( result, key10, value10 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key9 );
    assertObject( value9 );

    {
        int status = PyDict_SetItem( result, key9, value9 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key8 );
    assertObject( value8 );

    {
        int status = PyDict_SetItem( result, key8, value8 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key7 );
    assertObject( value7 );

    {
        int status = PyDict_SetItem( result, key7, value7 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key6 );
    assertObject( value6 );

    {
        int status = PyDict_SetItem( result, key6, value6 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

#endif
