*This project was created as part of the 42 curriculum by dabdulla.*

## Description

Push_swap is a program that takes a list of integers as input and sorts them using a restricted set of stack operations. This implementation uses the radix sort algorithm to efficiently handle large datasets.

## Instructions


### Compile the program
```
make
```

### Run push_swap

You can pass numbers directly as arguments:
```
./push_swap 5 4 3 2 1
```

Or use an environment variable:
```
export ARG="5 4 3 2 1"
```

For zsh:
```
./push_swap $=ARG
```

For bash:
```
./push_swap $ARG
```

### Check correctness

To verify that your output correctly sorts the numbers, pipe it into the checker:
```
./push_swap $ARG | ./checker_linux $ARG
```

## Resources

Discussed the project extensively with peers who had already completed it, which helped clarify concepts and improve the implementation.

These video provided a clear explanation of the radix sort algorithm and helped build a solid understanding of its logic.
- https://www.youtube.com/watch?v=XiuSW_mEn7g
- https://www.youtube.com/watch?v=Y95a-8oNqps
