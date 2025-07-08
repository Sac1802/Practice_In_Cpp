# 🧠 Reversing a Mathematical Equation – Codewars Kata

## 📄 Description

This kata challenges you to **reverse the order of a mathematical expression** written as a string, preserving the structure and integrity of numbers, variables, and operators.

For example:

```cpp
solve("100*b/y") → "y/b*100"
solve("a+b-c/d*30") → "30*d/c-b+a"
````

The reversed equation must:

* **Reverse the overall expression**, not the characters.
* **Preserve each number as a complete unit** (i.e., "30" should not become "03").
* Maintain the operators and variable names in the correct reversed order.

You are not allowed to **evaluate** the equation — this is a **string manipulation** challenge.

---

## 🚀 Solution Approach

My solution reads the expression **in reverse** and extracts all numerical values as blocks. To handle multi-digit numbers properly, each block is **delimited** during extraction. Then, during the reconstruction phase, numbers are inserted **in the correct order**, ensuring that their value and position are preserved.

Key characteristics:

* Uses only standard C++ structures (`std::string`)
* No use of external libraries or regular expressions
* Keeps the original logic simple and clean
* Handles both basic and random test cases provided by Codewars

---

## 🧪 Sample Test Cases

```cpp
solve("100*b/y")             // → "y/b*100"
solve("a+b-c/d*30")          // → "30*d/c-b+a"
solve("1+2+3")               // → "3+2+1"
solve("x*23+y/45-z+17")      // → "17-z/45+y*23*x"
solve("m/a/f/i/59+s+22+25")  // → "25+22+s+59/i/f/a/m"
```

---

## 💡 What I Learned

* How to reverse a logical structure without disturbing multi-digit numbers
* How to control character-level parsing with delimiters
* How to ensure number integrity in string manipulation problems

---

## 🛠️ Language

This solution is implemented in **C++** and follows Codewars' C++ kata format.

---

## 🔗 Link to the Kata

➡️ [Reversing a Mathematical Equation – Codewars](https://www.codewars.com/kata/5aa3af22ba1bb5209f000037/cpp)

---
