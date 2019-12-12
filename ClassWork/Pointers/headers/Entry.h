#pragma once
#include <iostream>
using namespace std;
template< class K,class  V>

class Entry
{
public:
    K key;
    V value;

    Entry();
    Entry(K data1, V data2);

    friend ostream& operator<<(ostream& o, Entry<K,V> e);
    void printEntry();

    bool operator<(const Entry<K,V>,& other);
    bool operator==(const Entry<K,V>& other);

    V (K& t) const;

    K& getKey() const;
    V& getValue() const;

    void setKey(K& t);
    void setValue(V& v);

    ~Entry();
};

template<class K, class V>
Entry<K,V>::Entry()
{
    
}


template<class K,class V>
K& Entry<K,V>::getKey() const
{
    return this->key;
}
template<class K,class V>
V& Entry<K,V>:: getValue() const{
    return this->value;
}


template<class K,class V>
void Entry<K,V>::setKey(K& t){
    this->key = t;
}


template<class K,class V>
void Entry<K,V>::setValue(V& v){
    this->value = v;
}




template< class K,class  V>
Entry<K,V>::Entry(K t, V v)
{
    key = t;
    value = v;
}
template <class K, class V>
V Entry<K,V>::(K &t) const{
    if(this->key == t)
    {
        return this->value;
    }
}



template< class K, class V>
ostream& operator<<(ostream& o, Entry<K,V> e)
{
    o << e.key << " : " << e.value << endl;
    return o;
}

template< class K, class V>
bool Entry<K,V>::operator<(const Entry<K,V>& other)
{
    return this->key < other->key;
}

template< class K, class V>
bool Entry<K,V>::operator==(const Entry<K,V>& other)
{
    return this->key == other->key;
}


template< class K,class  V>
Entry<K,V>::~Entry()
{

}
