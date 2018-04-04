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
    for(i = lower_bound+1; i<=upper_bound; i++)
    {
        NotPrime = true;
        if (i%2==0)
        {
            continue;
        }

        //std::cout << i << std::endl;

        for(j = i; j>lower_bound+1; j--)
        {
            if (NotPrime == false)
            {
                break;
            }
            if (j%2!=0)
            {
                NotPrime = true;
                continue;
            }
            //std::cout << j << std::endl;
            if (i%j>0)
                std::cout << i << " may be prime " << std::endl;
        }
    }
}

