#ifndef COMMONARRAY_H
#define COMMONARRAY_H

//add insert functions

namespace Common
{

template <typename T>
struct Array {

private:
    unsigned int Capacity;
    unsigned int Count;

public:
    T *Items;

    Array()
    {
        Count = 0;
        Capacity = 0;
        Items = 0;
    }

    Array(Array<T> const &copy)
    {
        Count = copy.Count;
        Capacity = copy.Capacity;
        Items = 0;
        Items = new T[Capacity];
        for (unsigned int i = 0; i < Count; i++)
            Items[i] = copy.Items[i];
    }

    unsigned int count()
    {
        return Count;
    }

    unsigned int capacity()
    {
        return Capacity;
    }

    void addItem(const T &item)
    {
        if(Count == Capacity)
            resize();
        Items[Count] = item;
        Count++;
    }

    void addArray(const Array<T> &array)
    {
        //could be more efficient if only resizes once and then copies all items into the array itself
        for (int unsigned i = 0; i < array.Count; i++)
            addItem(array[i]);
    }

    void resize()
    {
        resize(Capacity ? Capacity * 2 : 1);
    }

    void resize(unsigned int capacity)
    {
        Capacity = capacity;
        T *x = new T[Capacity];
        for (unsigned int i = 0; i < Count; i++)
            x[i] = Items[i];
        delete[] Items;
        Items = x;
    }

    void clear()
    {
        delete[] Items;

        Capacity = 0;
        Count = 0;
    }

    Array<T> & operator+(const T &item)
    {
        addItem(item);

        return *this;
    }

    Array<T> & operator+(const Array<T> &array)
    {
        addArray(array);

        return *this;
    }

    Array<T> & operator+=(const T &item)
    {
        return *this + item;
    }

    Array<T> & operator+=(const Array<T> &array)
    {
        return *this + array;
    }

    Array<T> & operator++()
    {
        return this->operator ++(0);
    }

    Array<T> & operator++(int)
    {
        resize();

        return *this;
    }

    Array<T> & operator--()
    {
        return this->operator --(0);
    }

    Array<T> & operator--(int)
    {
        clear();

        return *this;
    }

    ~Array() {
        delete[] Items;
    }
};

}

#endif // COMMONARRAY_H
