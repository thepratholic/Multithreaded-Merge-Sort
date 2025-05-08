#include "mergeSort.hpp"
using namespace std;

MergeSort::MergeSort(vector<int> *nums) {
    this -> nums = nums;
}

MergeSort::~MergeSort() {}

void MergeSort::recursiveSort(int left, int right) {
    if(left >= right) return;

    int mid = left + (right - left) / 2;

    recursiveSort(left, mid);
    recursiveSort(mid + 1, right);

    vector<int> result;

    int i = left;
    int j = mid + 1;
    while(i <= mid && j <= right) {
        if((*nums)[i] <= (*nums)[j]) {
            result.push_back((*nums)[i]);
            i++;
        }

        else {
            result.push_back((*nums)[j]);
            j++;
        }
    }


    while(i <= mid) {
        result.push_back((*nums)[i]);
        i++;
    }


    while(j <= right) {
        result.push_back((*nums)[j]);
        j++;
    }

    for(int k = 0; k < result.size(); k++) {
        (*nums)[left + k] = result[k];
    }

    return;

}


void MergeSort::sort() {
    if((*nums).size() == 0) {
        return;
    }

    recursiveSort(0, (*nums).size());
}