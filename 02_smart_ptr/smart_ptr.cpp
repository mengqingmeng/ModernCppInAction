
#include "smart_ptr.h"
template <typename T>
smart_ptr<T>::smart_ptr(T* ptr):m_ptr(ptr)
{

}

template<typename T>
smart_ptr<T>::~smart_ptr()
{
    delete m_ptr;
}

template<typename T>
T *smart_ptr<T>::get() const
{
    return m_ptr;
}



