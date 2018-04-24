#include <iostream>
// Need stringstream
#include <sstream>

// Stolen from BasiCalc
long long getnumber ()
{
    std::string placeholder;
    getline(std::cin, placeholder);
    long long number = std::stoll(placeholder.c_str());
    return number;
}

int main(long long argc, char **argv)
{
    long long lower_bound, upper_bound;

    if (argc != 3)
    {
        switch (argc)
        {
            case 0:
                {
                    std::cout << "No arguments whatsoever, how?" << std::endl;
                    break;
                }
            case 1:
                {
                    std::cout << "No arguments" << std::endl;
                    break;
                }
            case 2:
                {
                    std::cout << "One argument not supported, ignoring" << std::endl;
                    break;
                }
            default:
                {
                    std::cout << "Too many arguments, ignoring";
                }
        }
        std::cout << "Enter lower bound" << std::endl;
        std::cout << "Enter upper bound" << std::endl;
        lower_bound = getnumber();
        upper_bound = getnumber();
    }
    else
    {
        std::istringstream ss1(argv[1]);
        std::istringstream ss2(argv[2]);
        std::cout << "Two arguments, long longerpreting" << std::endl;
        std::cout << argv[1] << "long longerpreting as lower bound: " << std::endl;
        ss1 >> lower_bound;
        std::cout << argv[2] << "long longerpreting as upper bound: " << std::endl;
        ss2 >> upper_bound;
        std::cout << "Lower bound: " << lower_bound << std::endl;
        std::cout << "Upper bound: " << upper_bound <<   std::endl;
    }

    if (lower_bound < 1)
    {
        std::cout << "Lower bound too low" << std::endl;
        return 1;
    }
    else if (upper_bound <= lower_bound)
    {
        std::cout << "Upper bound too low" << std::endl;
        return 1;
    }
    else
    {
        std::cout << "Good" << std::endl;
    }

    long long i;
    long long j;
    bool NotPrime;

    for (i=lower_bound; i<=upper_bound; i++)
    {
        NotPrime = false;
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
    return 0;
}

