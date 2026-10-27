#include <iostream> 
#include <limits> 
using namespace std; 
 
int main() 
{ 
    int k, i = 1, sum_k = 0, number; 
 
    cout << "Enter the amount of integers to sum = "; 
    cin >> k; 
    if (cin.fail()) 
    { 
        cout << "Warning: k must be an integer."; 
        return 1; 
    } 
    if (k <= 0) 
    { 
        cout << "Nothing to sum. The total sum is: 0"; 
        return 0; 
    } 
 
    do { 
        cout << "Enter integer nr. " << i << ": "; 
        cin >> number; 
 
        if (cin.fail()) // input was not an integer 
        { 
            cout << "Warning: this is not an integer. Please try again.\n"; 
            cin.clear();                                         // reset the error flag 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard bad input 
            continue; // jump to the condition; i is unchanged, so the same number is requested again 
        } 
 
        sum_k += number; 
        i++; 
    } while (i <= k); 
 
    cout << "The total sum of " << k << " integers is: " << sum_k; 
    return 0; 
}
