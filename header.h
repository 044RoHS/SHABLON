#pragma once
#include <vector>
#include <iostream>

template <typename T>
class DvumerniMassiv {
private:
    size_t rows;
    size_t cols;
    std::vector<std::vector<T>> data;

public:

    DvumerniMassiv(size_t a, size_t b)
        : rows(a), cols(b), data(a, std::vector<T>(b)) {}


    T* operator[](size_t row) {
        return data[row].data();
    }


    const T* operator[](size_t row) const {
        return data[row].data();
    }


    size_t Rows() const { return rows; }
    size_t Cols() const { return cols; }
};
