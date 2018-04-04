#include <iostream>

// Stolen from BasiCalc
int getnumber ()
{
    //std::getline(std::cin, number);
    std::string placeholder;
    getline(std::cin, placeholder);
    //number << std::atof << placeholder << std::endl;
    int number = atoi(placeholder.c_str());
    return number;
}
// End stolen

int main()
{
    int lower_bound, upper_bound;
    lower_bound = getnumber();
    upper_bound = getnumber();
    std::cout << "fff" << std::endl;
    std::cout << lower_bound << std::endl;
    std::cout << upper_bound << std::endl;

    if (lower_bound < 1)
    {
        std::cout << "Lower bound too low" << std::endl;
        return 1;
    }
    else if (upper_bound <= lower_bound)
    {
        std::cout << "Upper bound too low" << std::endl;
    }
    else
    {
        std::cout << "Good" << std::endl;
    }

    int i;
    int j;
    bool NotPrime;

    for (i=lower_bound; i<=upper_bound; i++)
    {
        NotPrime = false;
        // If even, then definitely not prime
        if (i%2==0)
        {
            std::cout << " is not prime due to being even" << i << std::endl;
        }
        else
        {
            for(j=upper_bound-1;j>=lower_bound;j--)
            {
                if (j%2==0)
                {
                    continue;
                }
                else if (i%j!=0)
                {
                    NotPrime = true;
                    break;
                }
            }
            if(not NotPrime)
            {
                std::cout <<  " appears to be prime" << i << std::endl;
            }
        }
    }
}

