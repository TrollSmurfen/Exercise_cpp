#include <iostream>
#include <string>

int findSubstring(const std::string &t1, const std::string &t2) {
    size_t pos = t1.find(t2);
    if (pos != std::string::npos)
        return static_cast<int>(pos);
    else
        return -1;
}

int main() {
    std::string str = "deklaration";
    std::string substr = "klar";
    
    std::cout << "str: " << str << std::endl;
    std::cout << "substr: " << substr << std::endl;
    
    int result = findSubstring(str, substr);
    std::cout << result << std::endl; // This should print 2
    
    substr = "Allmänna deklarationsbyrån";
    std::cout << "substr: " << substr << std::endl;
    
    result = findSubstring(str, substr);
    std::cout << result << std::endl; // This should print -1
    
    return 0;
}
