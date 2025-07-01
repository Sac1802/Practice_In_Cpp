# Case Sensitive Kata

## 📝 Description

This is a solution to the [**Case Sensitive?**](https://www.codewars.com/kata/5a805631ba1bb55b0c0000b8/cpp) kata on **Codewars**.

The task is to determine whether **all letters** in a given input string are lowercase. The function should return:

- `true` and an empty list `[]` if all letters are lowercase.
- `false` and a list of non-lowercase letters (in order of appearance) otherwise.

> ⚠️ **Non-letter characters (spaces, digits, symbols, etc.) must be ignored**.

### Example:
```cpp
case_Sensitive("codeWaRs") → { false, ['W', 'R'] }
case_Sensitive("codewars") → { true, [] }
case_Sensitive("hello world") → { true, [] }
````

---

## ⚙️ Workflow

The main logic is implemented inside the method `CaseSensitiveClass::case_Sensitive`. It iterates over each character in the input string:

* It checks if the character is a **letter** using `std::isalpha`.
* If the letter is **not lowercase** (e.g., an uppercase letter), it:

  * Marks the result as `false`.
  * Adds the character to a list of non-lowercase letters.

The program also includes a `main()` function that demonstrates a test case and prints the result.

---

## 🔁 Dual Implementation

This kata was solved using **two different iteration approaches** to compare styles:

1. **Range-based loop:**

   ```cpp
   for (char c : str) {
       if (!std::isalpha(c)) continue;
       if (!std::islower(c)) {
           response_final = false;
           value_final.push_back(c);
       }
   }
   ```

2. **Index-based loop:**

   ```cpp
   for (size_t i = 0; i < str.length(); i++) {
       if (!std::isalpha(str[i])) continue;
       if (str[i] < 'a' || str[i] > 'z') {
           response_final = false;
           value_final.push_back(str[i]);
       }
   }
   ```

Both implementations were tested and produce the same results. This dual approach was used for practice and to reinforce logic using different loop styles.

---

## 🔗 Kata Link

You can view the kata on Codewars:
👉 [https://www.codewars.com/kata/5a805631ba1bb55b0c0000b8/cpp](https://www.codewars.com/kata/5a805631ba1bb55b0c0000b8/cpp)

---

## 👨‍💻 Author

**Sac1802** – Passionate about problem-solving, practicing logic through daily kata challenges, and writing clean, understandable C++ code.

---
