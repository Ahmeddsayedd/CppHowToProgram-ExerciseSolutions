#ifndef MINIMUM_H_INCLUDED
#define MINIMUM_H_INCLUDED

template <class T>
T minimum (T num1, T num2)
{
    T Min = num1;
    if (num2<num1)
        Min = num2;

    return Min;
}

#endif // MINIMUM_H_INCLUDED
