#ifndef MAXIMUM_H_INCLUDED
#define MAXIMUM_H_INCLUDED

template <class T>
T maximum (T num1, T num2)
{
    T Max = num1;
    if (num2>num1)
        Max = num2;

    return Max;
}

#endif // MAXIMUM_H_INCLUDED
