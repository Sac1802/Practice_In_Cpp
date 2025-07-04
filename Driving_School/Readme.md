# 🏎️ Fast & Furious Driving School – C++ Solution

> **Kata Link**: [Fast & Furious Driving School](https://www.codewars.com/kata/589b1c15081bcbfe6700017a/cpp)

## 📘 Problem Description

Fast & Furious Driving School charges students based on the duration of their lesson:

| Lesson Time             | Cost     |
|-------------------------|----------|
| Up to the first hour    | $30      |
| Every additional 30 mins (rounded up) | +$10 per block |

### 🕒 Special Rule: 5-Minute Grace Period

A 5-minute grace period is applied **per 30-minute block**.  
If the remaining time in a block is **5 minutes or less**, **it is not charged**.

#### Examples:
- `45 min` → $30 (within first hour)
- `63 min` → $30 (3 min extra → grace)
- `84 min` → $40 (24 min extra → 1 block)
- `102 min` → $50 (42 min extra → 2 blocks)
- `273 min` → $100 (213 min extra → 7 full blocks + 3 min grace)

---

## 🔧 Solution Workflow

1. Initialize the total cost at $30 (covers up to 60 minutes).
2. If the duration exceeds 60 minutes:
   - Subtract the first hour (60 min).
   - Apply the 5-minute grace:
     - If the remaining time is ≤ 5 min → no extra charge.
     - Otherwise, subtract blocks of 30 minutes until the remainder is within grace.
3. Count each full 30-minute block beyond the grace and charge $10 per block.
4. Return the final cost.

---

## ✅ Sample Test Cases

| Lesson Duration (minutes) | Expected Cost | Reason                                 |
|---------------------------|----------------|----------------------------------------|
| 45                        | $30             | Within first hour                      |
| 63                        | $30             | 3 minutes extra → grace applied        |
| 84                        | $40             | 24 minutes extra → 1 block             |
| 102                       | $50             | 42 minutes extra → 2 blocks            |
| 273                       | $100            | 213 minutes extra → 7 blocks + grace   |

---

## 🛠️ Tech Stack

- **Language**: C++
- **Environment**: Codewars (Online Judge)
- **Build System**: Local C++ compiler (GCC/Clang/VS)

---

## 📁 File Structure

```

📦FastAndFurious\_Driving\_School/
┣ 📜 Driving\_School.cpp     // Main logic + tests
┗ 📜 Driving\_School.h       // (Optional if using separate headers)

```

---

## 📌 Notes

- This kata emphasizes **accurate time rounding logic** and **modular billing**.
- The grace logic must be applied repeatedly per block, **not once globally**.