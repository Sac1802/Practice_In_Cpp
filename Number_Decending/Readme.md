# Descending Order – C++ Solution

This repository contains a C++ implementation of the [Descending Order](https://www.codewars.com/kata/5467e4d82edf8bbf40000155/cpp) kata from Codewars.

## 🧠 Kata Description

Given a non-negative integer, the task is to rearrange its digits in **descending order** to create the highest possible number.

### Example:

```text
Input: 123456789  
Output: 987654321
````

## 🧩 Program Workflow

The core of this solution is the `descendingOrder(uint64_t a)` function, which performs the following steps:

1. **Convert the number to a string** using `std::to_string()`.
2. **Sort the characters in descending order** using `std::sort()` and `std::greater<char>()`.
3. **Convert the sorted string back to an integer** using `std::stoull()` (string to unsigned long long).
4. Return the final value as a `uint64_t`.

### 🔧 Function Signature

```cpp
uint64_t descendingOrder(uint64_t a);
```

* **Parameter**: `a` – a non-negative integer
* **Return**: The highest number formed by sorting the digits in descending order.

### 🚀 Main Function

The `main()` function tests the implementation with the number `123456789` and prints the result:

```cpp
Descending Order: 987654321
```

## 📁 File Structure

* `Number_Decending.cpp`: Main source file containing the implementation and a sample test case.
* `Number_Decending.h`: (Optional) Header file for declarations if modularizing the project.

## ✅ How to Compile & Run

You can compile and run the code using any standard C++ compiler:

```bash
g++ Number_Decending.cpp -o descending
./descending
```

## 💡 Summary

* This kata is a great exercise for practicing string manipulation and sorting in C++.
* It uses modern C++ standard functions for type conversion and sorting.
* Efficient and clean solution in just a few lines of code.

---

**Author:** Sac1802