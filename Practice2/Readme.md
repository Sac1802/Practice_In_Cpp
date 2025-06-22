# Afraid of the Day – C++ Solution

This repository contains a C++ implementation of the [Afraid of the Day](https://www.codewars.com/kata/55b1fd84a24ad00b32000075/cpp) kata from Codewars.

## 🧠 Kata Description

The goal of this kata is to determine whether someone is afraid based on the **day of the week** and a given **number**. Different days have different "fear conditions". You must implement the function `am_i_afraid(day, num)` that returns `true` if the condition for fear is met, and `false` otherwise.

### Fear Conditions by Day:

- **Monday** – Afraid if the number is exactly `12`
- **Tuesday** – Afraid if the number is greater than `95`
- **Wednesday** – Afraid if the number is exactly `34`
- **Thursday** – Afraid if the number is exactly `0`
- **Friday** – Afraid if the number is **even**
- **Saturday** – Afraid if the number is exactly `56`
- **Sunday** – Afraid if the number is `666` or `-666`

## 🧩 Program Flow

1. The function `am_i_afraid()` receives a day (as a string) and a number (as an integer).
2. The string is converted to lowercase to ensure case-insensitive comparison.
3. The function checks a list of predefined fear conditions based on the day of the week.
4. If the condition is met, it returns `true`; otherwise, it returns `false`.
5. In `main()`, the function is tested with `"Monday"` and the number `13`.
6. The result is printed to the console.

### Sample Output

```bash
Today have afraid: false
````

## 💡 How to Run

Make sure you have a C++ compiler installed. Then compile and run the code:

```bash
g++ Practice2.cpp -o practice2
./practice2
```

## 📁 Files

* `Practice2.cpp`: Main source file containing the implementation and a test case.

## 📌 Notes

* The function handles different day cases (uppercase, lowercase, mixed).
* This kata is a good practice for basic conditional logic and string manipulation in C++.

---
