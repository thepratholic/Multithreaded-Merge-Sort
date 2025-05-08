#include <mergeSort.hpp>
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
        
    }

}


void MergeSort::sort() {
    if((*nums).size() == 0) {
        return;
    }

    recursiveSort(0, (*nums).size());
}