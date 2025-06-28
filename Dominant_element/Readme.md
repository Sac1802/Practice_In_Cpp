# 🧠 Dominant Array Elements – Codewars Kata

## 📌 Description

This repository contains a C++ solution for the Codewars kata:  
👉 [Dominant array elements](https://www.codewars.com/kata/5a04133e32b8b998dc000089/cpp)

### 🧩 Problem Summary

An element in an array is **dominant** if it is **strictly greater than all elements to its right**.

**Example:**

```cpp
solve({1, 21, 4, 7, 5}) → {21, 7, 5}
solve({5, 4, 3, 2, 1}) → {5, 4, 3, 2, 1}
````

The last element is always considered dominant because there are no elements to its right.

---

## 🚀 Solution Strategy

The approach consists of the following steps:

1. **Traverse the array from right to left**:

   * This makes it easy to compare each element with those to its right.

2. **Track the maximum value found so far**:

   * For each element, if no greater or equal value exists to its right, it's added to the result.

3. **Reverse the result**:

   * Since we traverse the array backwards, the dominant elements are collected in reverse order.

4. **Return the final vector of dominant elements** in the same order as in the original array.

---

## 🔁 Workflow Overview

* Input: A vector of integers.
* For each element (starting from the right):

  * Check if it is greater than all elements to its right.
  * If true, add it to the result vector.
* Reverse the result vector to preserve original ordering.
* Output: A vector containing all dominant elements in proper order.

---

## 🧪 Example Output

```cpp
Input:  {1, 21, 4, 7, 5}
Output: {21, 7, 5}
```

---

## 🛠 Technologies Used

* C++17
* Standard Library: `vector`, `algorithm`, `iostream`

---

## ✅ Status

✔️ Fully functional
✔️ Matches all test cases on Codewars
✔️ Clean and readable implementation

---

## 🙋‍♂️ Author

> 💻 **Sac1802**
> Passionate about clean C++ code and algorithmic thinking.


---
