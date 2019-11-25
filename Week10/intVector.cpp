#include "intVector.h"

intVector::intVector(int max_size)
{
    arr     = new int[max_size];
    max     = max_size;
    size    = 0;
}
intVector::intVector(const intVector &other)
{
    size    = other.size;
    max     = other.max;
    arr     = new int[max];
    for(int i = 0; i < size; i++)
    {
        arr[i] = other.arr[i];
    }
}

intVector intVector::operator=(const intVector &other){
    size = other.size;
    max  = other.max;
    arr  = new int[max];
    for(int i = 0; i < size; i++)
    {
        arr[i] = other.arr[i];
    }
    return *this;
}

void intVector::add(int x)
{
    if(size < max)
    {
        arr[size] = x;
        size++;
    }
}
int intVector::get(int index)
{
    if(index < size)
    {
        return arr[index];
    }
    return 0;
}
int intVector::length()
{
    return size;
}
bool intVector::remove(int index)
{
    if(index<size)
    {
        for(int i = index ; i < size -1; i++)
        {
            arr[i] = arr[i+1];
        }
        size--;
        arr[size] = 0;
        return true;
    }

    return false;
}
void intVector::set(int index, int x)
{
    if(index < size)
    {
        arr[index] = x;
    }
}

intVector::~intVector()
{
    delete[] arr;
    arr = 0;
}