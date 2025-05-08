# Multithreaded-Merge-Sort

## 📋 Overview

This project presents an implementation of the **Merge Sort algorithm** utilizing **parallel processing in C++**. By leveraging **multithreading**, the sorting process is significantly accelerated, especially for large datasets. The implementation demonstrates the use of **thread pools** and efficient synchronization mechanisms to achieve optimal performance.

---

## 🚀 Features

- **Parallel Processing**: Utilizes multiple CPU threads to perform sorting concurrently, reducing execution time.
- **Thread Pool**: Manages a pool of threads to handle sorting tasks efficiently.
- **Performance Benchmarking**: Compares execution times between standard Merge Sort and Parallel Merge Sort, highlighting the performance gains achieved through parallelism.

---

## ⚙️ Implementation Details

The implementation enhances the traditional Merge Sort algorithm by introducing parallelism. Key components include:

- **Recursive Division**: The dataset is recursively divided into smaller subarrays until a defined threshold is reached.
- **Parallel Sorting**: Subarrays are sorted concurrently using multiple threads.
- **Merging**: Sorted subarrays are merged to produce the final sorted array.

---

## 🧵 Thread Pool

A **thread pool** is employed to efficiently manage the creation and synchronization of threads. This approach minimizes the overhead associated with frequent thread creation and destruction, resulting in better resource utilization and improved performance.

---

## 📊 Performance Comparison

Benchmark tests were conducted to compare execution times:

| Implementation       | Time (approx.) |
|----------------------|----------------|
| Standard Merge Sort  | 25 seconds     |
| Parallel Merge Sort  | 1 second       |


---

## 🛠️ Getting Started

### ✅ Prerequisites

- A C++ compiler (supporting **C++11** or later)
- `CMake` (for building, optional if using `g++` directly)

---

### 📥 Installation & Running

1. **Clone the repository**:
   ```bash
   git clone <repo-url>
   cd parallelMergeSort/src/app
