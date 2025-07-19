# Recursive Vector Sum in C++

This project demonstrates a simple recursive algorithm implemented in C++ that calculates the sum of elements in an integer vector.

## 📌 Description

The main functionality lies in the `recursive_algorithm` function, which recursively sums elements of a given `std::vector<int>`. It starts from the end of the vector and adds up elements down to the first position.

## 🧠 Algorithm

The function follows a basic recursive approach:
1. If the vector size is zero, return 0 (base case).
2. Otherwise, return the last element plus a recursive call with the size reduced by one.

## 📂 File Structure

- `main.cpp`: Contains the recursive function and test cases.
- `README.md`: This documentation file.

## 🧪 Test Cases

Three test vectors are used:
- `{3, -2, 4, -1, 2}` → Output: `6`
- `{1, -1, 1}` → Output: `1`
- `{-1, -2, -3, -4}` → Output: `-10`

## 🚀 How to Compile and Run

```bash
g++ -o recursive_sum main.cpp
./recursive_sum
````

## 📋 Output Example

```
Lucas's final position of result1 is 6
Lucas's final position of result2 is 1
Lucas's final position of result3 is -10
```

## 🛠️ Requirements

* C++11 or higher
* g++ or any standard C++ compiler
