#ifndef DYNARR2D_H
#define DYNARR2D_H
#define DYNARR2D_H

class dynArr
{
private:
    int **data;
    int rows, cols;
public:
    dynArr();
    dynArr(int rows, int cols);
    ~dynArr();
    void setValue(int i, int j, int value);
    int getValue(int i, int j);
    void allocate(int newRows, int newCols);
};

#endif // DYNARR2D_H
