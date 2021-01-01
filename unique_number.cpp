#include <cstdlib>
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <ctime> 
#include <map>

int main()
{
    int size = 1000;
    int number_array[size];
    int unique = 0;

    srand((unsigned)time(0));     
    
    for(int i = 0; i < size; i++)
    { 
        number_array[i] = (rand()%size)+1;
    }

    std::map<int, bool> checked_numbers;

    for( int i = 0; i < size; i++ )
    {
        int number = number_array[i];
        std::cout << "Searching for = " + std::to_string(number) << std::endl;
        auto search = checked_numbers.find(number);
        if (search != checked_numbers.end()) 
        {
            continue;
        }

        checked_numbers.insert( {number, true} );
        int j = i + 1;
        for( ; j < size; j++ )
        {
            if( number == number_array[j] )
            {
                break;
            }
        }
        if( j == size )
        {
            unique = number;
            break;
        }

    }

    std::cout << "Unique number found = " + std::to_string(unique) << std::endl;
}