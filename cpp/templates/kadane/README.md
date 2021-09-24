# Kadane Snippet

Applies Kadane's Algorithm, for Maximum Subarray sum in *O(N)* complexity.
Please use for meaning full types of you'll get compile errors.

## Note

There are 3 types of snippets: 
- **kadane_a.cpp**: Uses traditional array, hence fastest
- **kadane_v.cpp**: Uses C++ vector
- **kadane.cpp**: Highest form of abstraction, hence shortest.

**Don't** use kadane.cpp if the Time constraints are too tight.

Another thing to note is that using vector vs C-array only costs around 0.2 seconds for 10^8 operations. You can check so by running kadane_test.cpp
