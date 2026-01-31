
<div align="center">

<img src="https://skillicons.dev/icons?i=cpp&theme=dark&perline=1" alt="C++" />

**Built with C++**
# cpp-prime-identifier

</div>

A modular algorithm to spot out prime numbers up to a specified number using vectors.

## Overview

cpp-prime-identifier is a collection of C++ programs demonstrating fundamental number theory algorithms and mathematical operations. It provides utilities for prime number identification, prime factorization, greatest common divisor calculation, and modular arithmetic operations.

## How It Works

The application uses a modular approach with separate files for different mathematical operations:

**main.cpp**: Entry point for the prime identification program
```cpp
// Finds all prime numbers up to a user-specified limit
```

**prime-factorization.cpp**: Decomposes numbers into prime factors
```cpp
// Example: 60 → 2² × 3 × 5
```

**gcd.cpp**: Calculates the Greatest Common Divisor
```cpp
// Example: GCD(48, 18) = 6
```

**mod.cpp**: Performs modular arithmetic operations
```cpp
// Handles modular calculations efficiently
```

### Core Functionality

1. **Prime Identification**: Uses vector-based algorithms to efficiently identify all prime numbers up to a given limit
2. **Prime Factorization**: Breaks down composite numbers into their constituent prime factors
3. **GCD Calculation**: Implements efficient algorithms (likely Euclidean) for finding the greatest common divisor
4. **Modular Operations**: Provides utilities for modular arithmetic computations

### The Algorithm Process

When identifying primes up to a limit N:
1. Initialize a vector to store potential primes
2. Apply an efficient sieving or trial division algorithm
3. Store identified primes in the vector structure
4. Output results to the user

### Key C++ Concepts Demonstrated

- **STL Vectors**: Dynamic array usage for storing primes
- **Modular programming**: Separation of concerns across multiple files
- **Algorithm efficiency**: Optimized mathematical operations
- **Function decomposition**: Breaking problems into reusable components
- **Mathematical algorithms**: Classical number theory implementations

## Installation

1. Clone the repository:
```bash
git clone https://github.com/achille010/cpp-prime-identifier.git
cd cpp-prime-identifier
```

2. Compile the program:
```bash
g++ -o prime_identifier main.cpp prime-factorization.cpp gcd.cpp mod.cpp
```

3. Run the executable:
```bash
./prime_identifier
```

## Usage Examples

### Finding Prime Numbers
```bash
# Input: 20
# Output: 2, 3, 5, 7, 11, 13, 17, 19
```

### Prime Factorization
```bash
# Input: 60
# Output: 2² × 3 × 5
```

### GCD Calculation
```bash
# Input: 48, 18
# Output: 6
```

## Limitations

- Input validation may be minimal
- Large number handling depends on data types used
- No GUI interface (command-line only)
- Performance not optimized for extremely large numbers

This is designed to demonstrate fundamental number theory algorithms in C++.

## Requirements

- C++ compiler (g++, clang++, or MSVC)
- C++11 or higher
- Standard Template Library (STL)

## Contributing

Contributions are welcome! Feel free to fork this repository and submit pull requests for improvements.

## License

MIT License - Read details from the LICENSE file

---

*Built as a demonstration of number theory algorithms in C++*