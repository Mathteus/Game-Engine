#ifndef MEMORIA_H
#define MEMORIA_H

namespace Engine {

template<typename T>class Memory {
private:
    T* m_pointer;

public:
    Memory() : m_pointer(nullptr) {
    }

    Memory(T& point) {
        this->m_pointer = point;
    }

    T* get() {
        return this->m_pointer;
    }

    void set(T& point) {
        this->m_pointer = point;
    }

    void operator=(T& other) {
        this->m_pointer = other;
    }

    void operator=(T&& other) {
        this->m_pointer = other;
    }

    void operator=(T* other){
        this->m_pointer = other;
    }

    ~Memory() {
       delete m_pointer;
    }
};

};


#endif // MEMORIA_H
