#include <iostream>
 

 int gcd(int a , int b){
    while(b != 0){
        int temp = a;
        b = a % b;
        a = temp;
    }
    return a;
 }

 int main() {

    int num = 0; 
    std::cout << "Enter your number " << std::endl;
    std::cin >> num;

    int num1 = 0; 
    std::cout << "Enter your number " << std::endl;
    std::cin >> num1;

    int result = gcd(num , num1);

    std::cout << "Gcd of "  << num << num1 << " Result " << result << " " << std::endl;

    return 0;
        
 }
