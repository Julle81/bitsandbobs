#include <cstdlib>
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <ctime> 
#include <map>

int main()
{
   srand((unsigned)time(0));     
    
    int number = (rand()%100)+1;

    while(true)
    {
        int guess;
        std::cout << "Guess a number betwwwn 1 and 100: ";
        std::cin >> guess;

        if( guess < number)
        {
            std::cout << "Too low, guess again"  << std::endl;
            continue;
        }
        if( guess > number)
        {
            std::cout << "Too high, guess again" << std::endl;
            continue;
        }
        if( guess == number)
        {
            std::cout << "You guessed correctly! The number is " << std::to_string(number) <<  " Congrats!" << std::endl;
            return 0;
        }


    }
}