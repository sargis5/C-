#include <iostream>

 int main() { // main fuctions 
    const int size = 3; // compile time size;
    int** matrix = new int*[size]; // dynamic allocation
    for (int i = 0; i < size; i++)
    {
        matrix[i] = new int[size]; // j- i hamar enq stexcum hishoxutyun 
    }
    
    std::cout << "Input your matrix " << std::endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cin >> matrix[i][j]; // input our matrix
        }
        
    }

    std::cout << "Output your main dioganal matrix " << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cout << matrix[i][i] << " " ; // output main dioganal matrix

    }
    std::cout << std::endl; // best practise
     
     // Don't forget delete your dynamic matrix;

     for (int i = 0; i < size; i++)
     {
        delete[] matrix[i]; // delete hatuk keyword - a 
     }

     delete[] matrix; // jnjum enq bolor matrix anunov size - ery 

     matrix = nullptr; // best practise ete menq delete enq anum da chi nshanakum vor amborjutjamb durs enq ekel hishoxutyunic et pointer - i hascen cujc - a talis heap -um menq petqa nullptr anenq vorpezszi amboxjutyamb durs ganq heap - ic
     
    return 0; // don't forget return 0; return 0 asum enq compilerin vor sax normala problem chka 

 }
    
    //very good 
    
 



