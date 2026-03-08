# Security Policy

## Supported Versions

Only the latest state of the `main` branch of **cpp-prime-identifier** is actively maintained.

| Version | Supported |
|---------|-----------|
| `main` (latest) | ✅ Yes |
| Older commits | ❌ No |

---

## About This Project

**cpp-prime-identifier** is a beginner-friendly C++ algorithm project. It does not handle user authentication, network connections, or sensitive data. As such, its security surface is minimal — however, the following considerations still apply.

---

## Reporting a Vulnerability

If you discover a security issue (e.g. a crash caused by malicious input, undefined behavior, or an integer overflow), please **do not open a public issue**.

Instead, contact the maintainer privately:

- Reach out to [@achille010](https://github.com/achille010) directly via GitHub.
- Describe the issue, how to reproduce it, and the potential impact.

You can expect an acknowledgment within **7 days**.

---

## Security Considerations for C++ Code

Even in a small algorithm project, good C++ practices matter:

- **Integer overflow** — be cautious when checking primality for very large numbers; use appropriate data types (e.g. `long long`).
- **Unbounded input** — if the program accepts user input, validate it to avoid unexpected behavior (e.g. negative numbers or non-integer input passed to prime-checking functions).
- **Vector bounds** — always ensure vector indexing stays within bounds to avoid undefined behavior.
- **Compiler warnings** — compile with `-Wall -Wextra` to catch potential issues early:
  ```bash
  g++ -Wall -Wextra -o prime main.cpp
  ```

---

## Responsible Disclosure

We appreciate responsible handling of any findings. Thank you for helping keep this project safe.