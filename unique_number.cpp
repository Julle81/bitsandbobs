#include <cstdlib>
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <ctime> 
#include <map>

int main()
{
    int size = 100;
    int number_array[size];
    int second_number_array[size];
    int unique = 0;

    srand((unsigned)time(0));     
    
    for(int i = 0; i < size; i++)
    { 
        number_array[i] = (rand()%size)+1;
    }

    for(int i = 0; i < 100; i++)
    { 
        second_number_array[i] = (rand()%size)+1;
    }

    std::map<int, bool> found_numbers;

    for( int number : number_array)
    {
        auto search = found_numbers.find(number);
        if (search != found_numbers.end()) 
        {
            continue;
        }

        for( int second_number : second_number_array)
        {
            if( number == second_number )
            {
                found_numbers.insert( {number, true} );
                break;
            }
        }
        search = found_numbers.find(number);
        if ( search == found_numbers.end() ) 
        {
            unique = number;
            break;
        }

    }

    std::string unique_string = "Unique number found = " + std::to_string(unique) + "\n";
    std::cout << unique_string;
}