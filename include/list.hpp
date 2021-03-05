#include "list.h"
#include<iostream>

template<class T>
list<T>::list(): data(0), next(nullptr){}

template<class T>
list<T>::list(T data, list<T> *next): data(data), next(next){}

template<class T>
list<T>::list(const std::vector<T> &v)
{
    list* hi = this;
    auto f = v.begin();
    hi->data = *f;
    f++;
    for(; f != v.end(); f++)
    {
        hi->next = new list<T>;
        hi = hi->next;
        hi->data = *f;
    }
}

template<class T>
list<T>::list(list<T> &lis)
{
    list* ThList = this;
    list<T> *hi = &lis;
    for(; hi->next != nullptr; hi = hi->next, ThList -> next = new list<T>, ThList = ThList->next)
    {   
        ThList->data = hi->data;
    }
    ThList->data = hi->data;
}



template<class T>
T list<T>::operator[] (unsigned int n)
{
    list *hi = this;
    for(unsigned int f = 0; f < n; f++)
    {
        hi = hi->next;
        if(hi == nullptr)
            throw std::runtime_error("what are you doing?");
    }
    return hi->data;
}

template<class T>
T list<T>::operator* ()
{
    return this->data;
}


template<class T>
void list<T>::push_back(T el)
{
    list<T> *poi = this;
    for(; poi->next != nullptr; poi = poi->next);
    poi->next = new list<T>(el);
}

template<class T>
void list<T>::push_front(T el)
{
    list<T> *hi = new list<T>(el);
    list<T> *yo = new list<T>(*this);
    *this = *hi;
    this->next=yo;
}

template<class T>
void list<T>::insert(T el, int n)
{
    list<T> *hi = this;
    for(int f = 0; f < n - 1; f++)
    {
        if(hi->next == nullptr)
            throw std::runtime_error("you are more stuped then i thought");
        hi = hi->next;
    }
    list<T> *new_el = new list<T>(el);
    new_el->next = hi->next;
    hi->next = new_el;       
}


template<class T>
T list<T>::front()
{
    return this->data;
}

template<class T>
T list<T>::back()
{
    list<T> *hi = this;
    for(; hi->next != nullptr; hi = hi->next);
    return hi->data;
}
