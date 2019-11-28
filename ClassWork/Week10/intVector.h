#pragma once
class intVector{
    int *arr;
    int size;
    int max;
    public :

    intVector(int max_size=10);
    intVector(const intVector &other);
    intVector operator=(const intVector &other);
    void add(int x);
    int get(int index);
    int length();
    bool remove(int index);
    void set(int index, int x);

    ~intVector();
};