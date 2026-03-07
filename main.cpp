/* 

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 1000000;

    // cout << "Enter a positive integer \n=>";
    // cin >> n;

    if (n < 2)
    {
        cout << "There doesn't exist any prime numbers less than 2.\n";
        return 0;
    }

    vector<bool> isPrime(n + 1, true);

    isPrime[0] = false;
    isPrime[1] = false;

    // lets cound the prime

    int primecount = 0;

    for (int i = 2; i * i <= n; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    cout << "Prime numbers up to " << n << ":\n";
    for (int i = 2; i <= n; ++i)
    {
        if (isPrime[i])
        {
            cout << i << " \n"
                 << endl;
            primecount += 1;
        }
    }

    cout << endl
         << primecount << " prime number total ";

    return 0;     
 
}

 */

  /* 
    we got the output its nice one 0.60 milli scend to find prime form 1 millon numbers;

        999979

        999983


        78498 prime number total
        [Done] exited with code=0 in 0.607 seconds

        */







// let's check my one i wrote in unpropetional way but still works 

#include <iostream>

using namespace std;

// warking algorith function to check the number is prime or not

bool prime(int number)
{

    // this line first check the number is 2 or not if its 2 then its a prime number obius so return ture ;

    if (number == 2)
    {
        return true;
    }

    // this check if the number is a invalid number or not;

    if (number <= 1)
    {
        // cout << "\n this is a invalid number plz enter something els ;) \n";
        return false;
    }

    // loop check the number still reach the number it self check if it get devided by anynumber and get zero if get then its not a prime number

    // Change this:

 for (int i = 2; i * i <= number; i++)
    {

        if (number % i == 0)
        {
            return false;
        }
    }

    // if the number not a invalid not 2 and not get any reminder left then its truely a prime number so at the end it desurve ture return;

    return true;
}

int primeprint(int n)
{
    int primecount = 1;

    for (int i = 2; i <= n; i++)
    {   
        if (prime(i))
        {   
            cout<< " " <<i << " is a prime number . \n";
            primecount += 1;
        }
        
    }
    
    cout<<"\n \n we got toal "<<primecount<<" prime numer . \n";
    return 0;
}

int main()
{

    // now this one will print all the number 2 to n all the prime number 

    primeprint(1000000); // same as befor 1million number 

    return 0;
}

// result of this one 

//  i don't axactly know whats the matter ur one and my one almost same logic but my one works fast 
//  it took 0.49 milli scend . i gess u used vector and libbary so it took come time there . 

/*

 999953 is a prime number . 
 999959 is a prime number . 
 999961 is a prime number . 
 999979 is a prime number . 
 999983 is a prime number . 

 
 we got toal 78499 prime numer . 

[Done] exited with code=0 in 0.492 seconds

 

*/
