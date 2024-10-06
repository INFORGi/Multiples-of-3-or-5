// Если мы перечислим все натуральные числа ниже 10, кратные 3 или 5, то получим 3, 5, 6 и 9. Сумма этих кратных равна 23. 
// Найдите сумму всех кратных 3 или 5 ниже 1000.

#include <iostream>

int main(){

    int summ_multiples = 0;

    for(int i = 3; i < 1000; ++i){
        if(i % 3 == 0 || i % 5 == 0){
            summ_multiples += i;
        }

    }

    std::cout << "The sum of all numbers that are multiples of 3 or 5: " << summ_multiples << std::endl;

    return 0;
}