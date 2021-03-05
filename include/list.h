#include <stdexcept>	
#include <vector>

template<class T>
class list
{
public:
    T data;
    list* next; 
public:
    list();
    list(T data, list<T> *next = nullptr);
    list(const std::vector<T> &vec);
    list(list<T> &hi);

    virtual T operator[] (unsigned int n);
    virtual T operator* ();
    
    virtual void push_back(T el);
    virtual void push_front(T el);
    virtual void insert(T el, int n);

    virtual T front();
    virtual T back();
};