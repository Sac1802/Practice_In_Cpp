# Shortest Word – C++ Solutions

This repository contains a C++ implementation of the [Shortest Word](https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/cpp) kata from Codewars.

## 🧠 Kata Description

The task is to find the length of the shortest word in a given string of words. The string will never be empty, and you do not need to account for punctuation or special characters.

**Example:**

```text
Input: "bitcoin take over the world maybe who knows perhaps"
Output: 3
````

The shortest word in the string is `"the"`, which has a length of 3.

## 🧩 Program Flow

This code provides two functions that solve the problem using different approaches:

### 🔹 `find_short(std::string str)`

1. Splits the string using `std::getline()` and space `' '` as a delimiter.
2. Stores each word in a `std::vector<std::string>`.
3. Iterates through the list to find the word with the minimum length.
4. Returns the length of the shortest word.

### 🔹 `find_short_second(std::string str)`

1. Uses a `std::istringstream` to split the string by whitespace.
2. In each iteration, checks if the current word is shorter than the current minimum.
3. Keeps track of the minimum length using `std::numeric_limits<int>::max()` as initial value.
4. Returns the length of the shortest word found.

### 🧪 Sample Output

```bash
The worl most small id: 3
The worl most small id: 3
```

> Note: There's a typo in the printed message (`worl` should be `word`, and `id` should be `is`).

## 🚀 How to Run

Compile and run using any standard C++ compiler:

```bash
g++ Practive_Shorted_Words.cpp -o shortest
./shortest
```

## 📁 Files

* `Practive_Shorted_Words.cpp`: Contains the main function and two implementations of the kata.

## ✅ Summary

* This kata is useful for practicing string manipulation, tokenization, and basic algorithmic logic in C++.
* It demonstrates two common approaches to word splitting: using `std::getline` with a delimiter and using `std::istringstream`.

---

**Author:** Sac1802
