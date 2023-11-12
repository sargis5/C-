#include <iostream>

 // strlen fuctions that think size text 
size_t strlen1(const char* str) {
    size_t length = 0; 
    while (str[length] != '\0') {
        ++length;
    }
    return length;
}

// fuctions reverse string 
void reverseString(char str[], int length) {
    int start = 0; 
    int end = length - 1;

    while (start < end) {
        // swap elements 
        int tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
     
        ++start;
        --end;
    }
}

int main() {
    const int size = 100;
    char input[size];
    std::cout << "Enter your string: ";
    std::cin.getline(input, size);

    int length = strlen1(input);

    reverseString(input, length);

    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}
