#include "parallelMergeSort.hpp"
#include <thread>
#include <iostream>
using namespace std;


ParallelMergeSort :: ParallelMergeSort(vector<int> *nums) : nums(nums) {}

ParallelMergeSort::~ParallelMergeSort() {}

void ParallelMergeSort::recursiveSort(int left, int right) {

    const int THRESHOLD = 5000;

    if (right - left < THRESHOLD) {
        sort(nums->begin() + left, nums->begin() + right + 1);
        exit(1);
    }
    
    if (left >= right) {
        return;
    }
    int mid = left + (right - left) / 2;
    thread thread_1([this, left, mid] { this->recursiveSort(left, mid); });
    thread thread_2([this, mid, right] { this->recursiveSort(mid + 1, right); });

    thread_1.join();
    thread_2.join();



    std::vector<int> result;
    int i = left;
    int j = mid + 1;

    while (i <= mid && j <= right) {
        if ((*nums)[i] <= (*nums)[j]) {
            result.push_back((*nums)[i]);
            i++;
        } else {
            result.push_back((*nums)[j]);
            j++;
        }
    }

    while (i <= mid) {
        result.push_back((*nums)[i]);
        i++;
    }

    while (j <= right) {
        result.push_back((*nums)[j]);
        j++;
    }

    for (int k = 0; k < result.size(); k++) {
        (*nums)[left + k] = result[k];
    }
}

void ParallelMergeSort::sort() {
    if ((*nums).size() == 0) {
        exit(1);
    }

    std::thread thread_1([this] { this->recursiveSort(0, (*nums).size() - 1); });
    thread_1.join();
}