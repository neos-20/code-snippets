# Frequency Array Snippet

Applies frequency Array.

Please use for meaning full types of you'll get compile errors.

## Note

There are 2 types of snippets:
- **freq_a.cpp**: Uses traditional array, hence fastest
- **freq_v.cpp**: Uses C++ vector, has about 0.2 sec difference for 10^8 operations.

Since **out_of_range** errors are so common in frequency arrays,
at() function is used, which checks the range, instead of operator[], for early debugging.

Obviously, this increases run-time. You may change it to suit your time-constraint limit.
