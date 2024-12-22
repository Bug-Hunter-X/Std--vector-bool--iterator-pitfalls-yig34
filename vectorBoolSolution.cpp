Instead of using `std::vector<bool>`, consider using `std::vector<char>` or `std::vector<uint8_t>` if you only need to store boolean values.  If memory efficiency is paramount, carefully review the implications of the non-standard implementation of `std::vector<bool>`. In the example below, we switch to a `std::vector<char>`, ensuring standard iterator behavior.  Avoid using `std::vector<bool>` when possible unless you completely understand its limitations.
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    //Problematic Code - std::vector<bool>
    //std::vector<bool> boolVector = {true, false, true};
    //std::for_each(boolVector.begin(), boolVector.end(), [](bool b){ std::cout << b << " ";});
    
    //Solution: Use std::vector<char> or std::vector<uint8_t> instead
    std::vector<char> boolVector = {1,0,1};
    std::for_each(boolVector.begin(), boolVector.end(), [](char b){ std::cout << b << " ";});
    std::cout << std::endl;
    return 0;}
```