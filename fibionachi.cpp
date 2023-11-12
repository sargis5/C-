#include <iostream>


int fib(int number ){
    if(number == 0 || number == 1){
        return 1;
    }
    return fib(number - 1) + fib(number - 2);
}

int main() {
  int a = 0; 
  std::cin  >> a;
  int result = fib(a);
  std::cout << result << " " << std::endl;
  return 0; 

}
