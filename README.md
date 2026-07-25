# Simple C Calculator

A lightweight, terminal-based calculator program written in C that performs fundamental arithmetic operations on two integers.

---

## 📄 Source Code Overview

The program is contained entirely within `calculator.c` [cite: 1] and supports:
* **Addition** (`+`) [cite: 1]
* **Subtraction** (`-`) [cite: 1]
* **Multiplication** (`*`) [cite: 1]
* **Division** (`/`) [cite: 1]

---

## ⚙️ Prerequisites & Compilation

### Prerequisites
* Any standard C compiler such as `gcc` or `clang`.

### Compilation Command

Compile the program using GCC:

```bash
gcc calculator.c -o calculator -lm
```

---

## 🚀 How to Run

1. Execute the compiled binary:
   ```bash
   ./calculator
   ```

2. Interactive Prompts:
   * Enter the **First Number** when prompted [cite: 1].
   * Enter the **Second Number** when prompted [cite: 1].
   * Select an option from the menu (`1` to `4`) [cite: 1]:
     1. Addition [cite: 1]
     2. Subtraction [cite: 1]
     3. Multiplication [cite: 1]
     4. Division [cite: 1]

---

## 📝 Example

```text
Enter First No: 10
Enter Second No: 2
Enter from following options 
1. Addition 
2. Subtraction 
3. Multiplication 
4. Division 
1
Addition Result: 12 
```

---

> **Note on Division:** Division uses C integer division (`a / b`), which truncates any remainder [cite: 1]. Ensure the second number is non-zero to prevent runtime errors [cite: 1].
