#pragma once 
#include <iostream>
using namespace std;

template <class T>

class MyArray
{
    T *data;
    int min, max;
    public :
    MyArray(int x);
    MyArray(int min, int max);
    T& operator[](int position);
    ~MyArray();
};

template <class T> 
MyArray<T>::MyArray(int x)
{
    min = 0;
    max = x;
    data = new T[x];
}

template <class T> 
MyArray<T>::MyArray(int mn, int mx)
{
    min = mn;
    max = mx;
    data = new T[mx - mn];
}
template <class T> 
T& MyArray<T>::operator[](int x)
{
    if(x >= min && x < max)
    {
        return data[x+min];
    }
    else{
        cout << "Invalid position" <<endl;
        exit(1);
    }
}



template <class T>
MyArray<T>::~MyArray()
{

}
