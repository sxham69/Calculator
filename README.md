# Simple C Calculator

A lightweight, terminal-based calculator program written in C that performs fundamental arithmetic operations on two integers.

---

## 📄 Code Overview

The program is contained entirely within `calculator.c` and supports:
* **Addition** (`+`) 
* **Subtraction** (`-`) 
* **Multiplication** (`*`) 
* **Division** (`/`) 

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
   * Enter the **First Number** when prompted .
   * Enter the **Second Number** when prompted.
   * Select an option from the menu (`1` to `4`):
     1. Addition 
     2. Subtraction 
     3. Multiplication 
     4. Division 

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

> **Note on Division:** Division uses C integer division (`a / b`), which truncates any remainder. Ensure the second number is non-zero to prevent runtime errors.
