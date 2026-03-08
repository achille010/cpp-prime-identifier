# Contributing to cpp-prime-identifier

Thank you for your interest in contributing to **cpp-prime-identifier**! This is a beginner-friendly C++ project that identifies prime numbers using vectors. All skill levels are welcome.

---

## Getting Started

### Prerequisites

- A C++ compiler: `g++` (GCC) or `clang++`
- C++11 or later
- Git

### Building the Project

1. Clone the repository:
   ```bash
   git clone https://github.com/achille010/cpp-prime-identifier.git
   cd cpp-prime-identifier
   ```

2. Compile the project:
   ```bash
   g++ -std=c++11 -Wall -o prime main.cpp
   ```

3. Run it:
   ```bash
   ./prime
   ```

---

## Project Structure

| File | Purpose |
|------|---------|
| `main.cpp` | Entry point — runs the prime identification logic |
| `mod.cpp` | Modular arithmetic helper |
| `gcd.cpp` | Greatest Common Divisor implementation |
| `prime-factorization.cpp` | Prime factorization logic |

---

## How to Contribute

### Reporting Bugs

- Check [Issues](https://github.com/achille010/cpp-prime-identifier/issues) first to avoid duplicates.
- Open a new issue with:
  - A clear description of the bug
  - Steps to reproduce it
  - Your compiler version (`g++ --version`)
  - Expected vs. actual output

### Suggesting Enhancements

Open an issue tagged `enhancement` describing:
- What you'd like to add (e.g. Sieve of Eratosthenes, benchmarking, new algorithm)
- Why it would improve the project

### Submitting a Pull Request

1. Create a new branch:
   ```bash
   git checkout -b feature/your-feature-name
   ```

2. Make your changes and test them locally.

3. Commit with a clear message:
   ```bash
   git commit -m "Add: Sieve of Eratosthenes implementation"
   ```

4. Push and open a Pull Request against `main`:
   ```bash
   git push origin feature/your-feature-name
   ```

---

## Code Style Guidelines

To keep the codebase consistent:

- Use **4 spaces** for indentation (no tabs)
- Keep function names in `camelCase` or `snake_case` — be consistent within a file
- Add a brief comment above each function explaining what it does:
  ```cpp
  // Returns true if n is a prime number
  bool isPrime(int n) { ... }
  ```
- Prefer `std::vector` over raw arrays where applicable
- Compile and test with `-Wall -Wextra` before submitting — no warnings allowed

---

## Ideas for Contributions

- ✨ Implement the [Sieve of Eratosthenes](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes) for faster prime generation
- 📊 Add performance benchmarking between different approaches
- 🧪 Add unit tests
- 📝 Improve or add a README with examples and output
- 🐛 Fix any compiler warnings

---

## Questions?

Feel free to open an issue or contact [@achille010](https://github.com/achille010) via GitHub. Beginners are very welcome — don't hesitate to ask!