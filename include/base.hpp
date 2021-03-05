template<class T>
class base_list
{
public:
    virtual T operator[] (int n) = 0;
    virtual T operator* () = 0;
    
    virtual void push_back(T el) = 0;
    virtual void push_front(T el) = 0;
    virtual void insert(T el, int n) = 0;

    virtual T front() = 0;
    virtual T back() = 0;
//    virtual T pop_back() = 0;

//    virtual base_list* copy() = 0;
//    virtual void unique() = 0;
//    virtual void merge() = 0;

//    virtual base_list* begin() = 0;   ????
//    virtual base_list* end()   = 0;   ????
};


template<class T>
class base_pointer
{
public:
//    virtual void operator++ () = 0;
//    virtual void operator++ (int) = 0;
//    virtual void operator-- () = 0;
//    virtual void operator-- (int) = 0;
    
//    virtual bool operator== (base_pointer &BL) = 0;
//    virtual bool operator!= (base_pointer &BL) = 0;
    
//    virtual void operator=  (base_pointer &BL) = 0;
//    virtual T operator* () = 0;

//    virtual void right() = 0;
};