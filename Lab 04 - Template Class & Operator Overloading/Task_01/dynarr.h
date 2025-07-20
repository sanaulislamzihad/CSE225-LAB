#ifndef DYNARR_H
#define DYNARR_H

template <typename T>
class dynArr
{
private:
    T *data;
    int size;
public:
    dynArr();
    dynArr(int s);
    ~dynArr();
    void setValue(int index, T value);
    T getValue(int index);
};

#endif // DYNARR_H
