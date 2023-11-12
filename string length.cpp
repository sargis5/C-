#include <iostream>

int space(char* a){
    int max = 0;
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] != ' '){
            ++count;
        }
        else if(a[i] != a[i - 1]){
            ++max;
        }
       
    else {
        if(count > max){
            max = count;
        }
       
       count = 0; 
     }
    }

    if(count > max) {
        max = count;
    }
     return max;
}

int main() {
    const int size = 100;
    char* string = new char[size];

    std::cout << "Enter your string" << std::endl;
    std::cin.getline(string , size);

    int result = space(string);

    std::cout << "Result" << result <<  " " << std::endl;
    
    delete[] string;
    string = nullptr;
    return 0;

}
