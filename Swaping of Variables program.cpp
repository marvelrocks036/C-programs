/*C++ Program to Swap Values of Two Variables.*/

//Soln 1: 3 Variable method
/*
#include <iostream>
using namespace std;
int main() 
{
    int a, b, temp;
    cout << "Enter Two Integers\n";
    cin >> a >> b;
     
    cout << "Before Swapping\n";
    cout << "a = " << a << "\nb = " << b << endl;
     
    // Swap two numbers
    temp = a;
    a = b;
    b = temp;
 
    cout << "After Swapping\n";
    cout << "a = " << a << "\nb = " << b;
 
    return 0;
}
*/


//Soln 2: Direct Swap Function
/*
#include <iostream>  
using namespace std;  
int main()  
{  
int a = 10;
int b = 20;

std::cout << "Before swap\n";
std::cout << "Value of a: " << a << '\n';
std::cout << "Value of b: " << b << '\n';

std::swap(a, b);

std::cout << "After swap\n";
std::cout << "Value of a: " << a << '\n';
std::cout << "Value of b: " << b << '\n';
return 0;
}
*/


//Soln 3: 2 Variable Method
/*
#include <iostream>
using namespace std;
int main() 
{
    int a, b;
    cout << "Enter Two Integers\n";
    cin >> a >> b;
     
    cout << "Before Swapping\n";
    cout << "a = " << a << "\nb = " << b << endl;
     
    // Swap two numbers
    a = a + b;
    b = a - b;
    a = a - b;
    
    //Final Step
    cout << "After Swapping\n";
    cout << "a = " << a << "\nb = " << b;
    return 0;
}
*/
