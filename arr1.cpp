#include <iostream>

int main() {
    const int size = 3; // compile time size 
    int**matrix = new int*[size]; // dynamic allocation matrix;
    //create second dynamic matrix;
    for (int i = 0; i < size; i++)
    {
        matrix[i] = new int[size];
    }
 
    std::cout << " Input your matrix " << std::endl;

    for (int i = 0; i < size; i++)
    {
         for (int j = 0; j < size; j++)
         {
            std::cin >> matrix[i][j]; // input our matrix 
         }
         
    }

    std::cout << "Output auxillary matrix " << std::endl;

    for (int j = 0; j < size; j++)
    {
        std::cout << matrix[j][size - 1 - j] << " ";
        
    }
        std::cout << std::endl; // Oh no I am forgot this code 

    for (int i = 0; i < size; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix; // jnjum enq matrix inchqan ka 
    matrix = nullptr; // best practise vor karoxananq durs gal heap ic amboxjutyamb 

    return 0; // chenq mornum return 0;
}

// very good I unterstand this code 
