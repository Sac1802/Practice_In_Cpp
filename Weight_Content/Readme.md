# 🧪 Weight of the Contents – C++ Solution

> **Kata link**: [Weight of the Contents](https://www.codewars.com/kata/53921994d8f00b93df000bea/cpp)

## 📘 Problem Description

You're given the total weight of a bottle (including its contents), and a scale description in plain English. The scale tells you **how much larger or smaller the contents are compared to the empty bottle**.

Your task is to compute and return the **weight of the contents only**.

### 🧠 Examples

- If the bottle weighs `120g`, and the contents are `"2 times larger"`, then:
  - Let `B` be the empty bottle's weight.
  - Contents: `2 * B`
  - Total: `B + 2B = 3B`
  - So `B = 120 / 3`, contents = `2 * B = 80`

- If the contents are `"4 times smaller"`, then:
  - Contents: `B / 4`
  - Total: `B + B/4 = B * 1.25`
  - `B = total / 1.25`, contents = `B / 4`

---

## ⚙️ Function Signature

```cpp
int WeightContent::content_weight(int bottle_weight, std::string scale);
````

### Parameters

* `bottle_weight`: `int` – The total weight of the bottle with contents.
* `scale`: `std::string` – A string like `"5 times larger"` or `"3 times smaller"`.

### Returns

* The weight of the contents (`int`), **truncated** to an integer as required by the kata.

---

## 🚀 Logic & Workflow

1. **Parse the scale string** using a `stringstream`, extracting:

   * A scale factor (integer)
   * A keyword: `"larger"` or `"smaller"`

2. **Based on the keyword**, apply the appropriate formula:

   * `"X times larger"`:

     * `total = B + X * B = B * (1 + X)`
     * `B = total / (1 + X)`
     * `contents = B * X`

   * `"X times smaller"`:

     * `contents = B / X`
     * `total = B + B/X = B * (1 + 1/X)`
     * `B = total / (1 + 1/X)`
     * `contents = B / X`

3. **Return the integer result** of the computed content weight.

---

## ✅ Sample Usage

```cpp
WeightContent weight;
int result = weight.content_weight(195, "5 times larger");
// Output: 160 (since 162.5 is truncated to 160)
```

---

## 🛠️ Tech Stack

* **Language**: C++
* **Libraries**: `<sstream>`, `<vector>`, `<string>`
* **Tested in**: Visual Studio / Codewars C++ environment

---


## ℹ️ Note

This kata emphasizes mathematical reasoning with verbal input.
It's great practice for:

* Parsing strings into structured data
* Translating real-world language into equations
* Managing floating-point division and rounding logic
