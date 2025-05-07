#pragma once
#include <vector>
#include<iostream>

template <typename T>
class DvumerniMassiv {
private:
    size_t rows;
    size_t cols;
    std::vector<std::vector<T>> data;

public:

    DvumerniMassiv(size_t a, size_t b)
        : rows(a), cols(b), data(a, std::vector<T>(b)) {}


    class RowProxy {
    private:
        std::vector<T>& row;

    public:
        explicit RowProxy(std::vector<T>& r) : row(r) {}

        T& operator[](size_t col) {
            return row[col];
        }
    };


    class ConstRowProxy {
    private:
        const std::vector<T>& row;

    public:
        explicit ConstRowProxy(const std::vector<T>& r) : row(r) {}

        const T& operator[](size_t col) const {
            return row[col];
        }
    };


    RowProxy operator[](size_t row) {
        return RowProxy(data[row]);
    }


    ConstRowProxy operator[](size_t row) const {
        return ConstRowProxy(data[row]);
    }


    size_t Rows() const {
        return rows;
    }

    size_t Cols() const {
        return cols;
    }
};
