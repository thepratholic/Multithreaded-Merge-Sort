#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>
#include <thread>
#include <mutex>
#include <iostream>

using namespace std;

class MergeSort {
    private:

        vector<int> *nums;

    public:
        MergeSort(vector<int> *nums);
        ~MergeSort();
        void sort();
        void recursiveSort(int left, int right);
};

#endif