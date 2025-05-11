#pragma once
#include <vector>

class Functor {
private:
    const std::vector<int>& data;
    int sum;
    int count;

public:

    Functor(const std::vector<int>& vec) : data(vec), sum(0), count(0) {}


    void operator()() {
        sum = 0;
        count = 0;

        for (int num : data) {
            sum += num;
            if (num % 3 == 0) {
                ++count;
            }
        }
    }


    int GetSum() const {
        return sum;
    }


    int GetCount() const {
        return count;
    }
};
