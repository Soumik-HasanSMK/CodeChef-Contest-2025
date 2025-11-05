## Copilot instructions for this repository

Repository snapshot: no `README.md` or agent instruction files were found. At the repository root there is a `Fuel_Check.cpp` solution and a `.cph/` folder. This workspace looks like a contest solutions folder with per-problem source files.

Purpose: provide short, actionable guidance so an AI agent can quickly edit, test, and validate solutions in this repository.

### Big picture

- This repo is a set of independent problem solution files (single-file solutions are the norm).
- Expect C++/Python/Java single-file solutions. Each file typically compiles and runs by itself.
- No global build system or CI is present.

### What to look for first

- Top-level source files (e.g. `Fuel_Check.cpp`) and short directories like `.cph/` which may hold helper scripts or snippets.
- Sample inputs (if present) named `input.txt`, `sample.in`, or `*.in` next to solutions.

### Common workflows and exact commands

- Compile and run a C++ file (example for `Fuel_Check.cpp`):
  - Compile: `g++ -std=gnu++17 -O2 -pipe -o Fuel_Check "Fuel_Check.cpp"`
  - Run with input: `./Fuel_Check < input.txt`
- Run a Python solution: `python3 solution.py < input.txt`
- Java: `javac Solution.java` then `java Solution < input.txt`

When proposing edits, include the compile/run commands you used to validate the change.

### Project-specific conventions (discoverable patterns)

- Single-file solutions. Avoid creating a multi-file build unless the user requests it.
- Use standard input/output only. Do not add interactive prompts.
- If a `.cph/` or similar helper directory exists, inspect it for small utilities or templates and reuse them rather than adding duplicates.

### Testing & validation

- Prefer simple local validation: add `sample.in` and `sample.out` and show the run that compares them (e.g., `./solution < sample.in | diff - sample.out`).
- When adding tests, keep them co-located with the problem file.

### When to escalate / ask questions

- Ask the user before converting the repo into a structured project (adding build scripts, manifests, or CI).
- Ask when a requested change affects multiple files or would change input/output formats.

If this guidance is missing anything specific you want covered (for example, adhere to a particular compile flag, or how to use files in `.cph/`), tell me which files I should read and I'll update/merge these instructions.
