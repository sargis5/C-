#include <iostream>


bool is_prime(int number ){
    if(number < 2){
        return false;
    }
    for(int i = 2; i < std::sqrt(number / 2); ++i){
        if(number % i == 0){
            return false;
        }
    }

   return true;
}
 
 int nextprimenumber(int number){
     number = number + 1;
    while(!is_prime(number)){
        ++number;
    }
    return number;
 }

int main(){
  int number;

  std::cout << "Enter your number " << std::endl;
  std::cin >> number;

  int result = nextprimenumber(number);

  std::cout << "Element "   << number  << " Is_prime" << result << std::endl;
  return 0;
}
