# C Perfect Square Finder

This project identifies perfect squares within a randomly generated array of integers.

## How to Run
The project uses a Replit workflow to compile and run the code.
- Click the **Run** button or use the "Run Main" workflow.
- It compiles `src/main.c` with the math library (`-lm`) and executes the resulting binary.

## Fix for `undefined reference to sqrt`
To fix the linker error, the `-lm` flag must be added to the `gcc` command:
```bash
gcc src/main.c -o main -lm
```
