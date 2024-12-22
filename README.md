# std::vector<bool> Iterator Pitfalls

This repository demonstrates a common, yet subtle, bug related to the use of `std::vector<bool>` in C++.  `std::vector<bool>` is a special case that does not always behave like other standard containers. This difference can lead to unexpected behavior and errors. 

The `vectorBoolBug.cpp` file showcases the problematic code, while `vectorBoolSolution.cpp` provides a corrected version and explains how to avoid this type of issue.