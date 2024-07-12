#include <iostream>
#include <cmath> // Use <cmath> instead of <math.h> for C++
using namespace std;
// Use int main() for better portability and return 0 at the end
int main() 
{
    // Variables
    float n, sum = 0.0;
    
    // Prompt user for input
    std::cout << "Enter the number of terms in the series (n): ";
    std::cin >> n;
    
    // Validate input
    if (n <= 0) {
        std::cout << "The number of terms must be positive." << std::endl;
        return 1; // Return an error code
    }

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) 
    {
        sum += 1.0 / i; // Add the reciprocal of i to the sum
    }

    // Output the result
    std::cout << "The sum of the series is: " << sum << std::endl;

    return 0; // Return 0 to indicate successful execution
}
