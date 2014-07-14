#ifndef COMMONARRAY_H
#define COMMONARRAY_H

//add insert functions

namespace Common
{

template <typename T>
struct Array {

private:
    unsigned int Count;
    unsigned int Capacity;

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
        for (int i = 0; i < Count; i++)
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
        for (int i = 0; i < array.Count; i++)
            addItem(array[i]);
    }

    void resize()
    {
        Capacity = Capacity ? Capacity * 2 : 1;
        T *x = new T[Capacity];
        for (int i = 0; i < Count; i++)
            x[i] = items[i];
        delete[] items;
        items = x;
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

    Array<T> & operator+=(const Array<T> &array)
    {
        return *this + array;
    }

    ~Array() {
        delete[] items;
    }
};

}

#endif // COMMONARRAY_H
