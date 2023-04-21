
#ifndef SMART_PTR_H
#define SMART_PTR_H

/// 智能指针模板类
template <typename T>
class smart_ptr
{
public:
    explicit smart_ptr(T* ptr = nullptr);
    ~smart_ptr();

    /// 获取指针
    T* get() const;

private:
    T* m_ptr;
};

#endif // SMART_PTR_H
