#include <iostream>


int main() {

 const size_t size = 5;
 int arr[size];
 for (int i = 0; i < size; i++)
 {
    std::cin >> arr[i];
 }
 foo(arr , size, func);
 return 0; 
 

}

int foo(int number ){
    number *= 2;
    return number;
}

void func(int* arr, int size, int(*ptr) (int)){
    if(size == 0 ){
        return ;
    }
    arr[size -  1] = ptr(arr[size - 1]);
    foo(arr ,size - 1, ptr);
}
