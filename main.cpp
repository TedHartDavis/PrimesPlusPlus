#include <iostream>

// Stolen from BasiCalc
int getnumber ()
{
    std::string placeholder;
    getline(std::cin, placeholder);
    int number = atoi(placeholder.c_str());
    return number;
}

int main()
{
    int lower_bound, upper_bound;
    std::cout << "Enter lower bound" << std::endl;
    std::cout << "Enter upper bound" << std::endl;
    lower_bound = getnumber();
    upper_bound = getnumber();

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
            continue;
        }
        else
        {
            for(j=2;j<(i/2);j++)
            {
                if (j%2==0)
                {
                    continue;
                }
                else if (i%j==0)
                {
                    NotPrime = true;
                    break;
                }
            }
            if(! NotPrime)
            {
                std::cout << i <<  " appears to be prime" << std::endl;
            }
        }
    }
}

