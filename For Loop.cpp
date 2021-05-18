#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int num1,num2;
    cin >> num1 >> num2;
    for(int num = num1; num <= num2; num++)
    {
        if((1 <= num)&&(num <= 9))
            switch(num)
            {
                case 1: cout << "one\n";
                        break;      
                case 2: cout << "two\n";
                        break;
                case 3: cout << "three\n";
                        break;
                case 4: cout << "four\n";
                        break;
                case 5: cout << "five\n";
                        break;
                case 6: cout << "six\n";
                        break;
                case 7: cout << "seven\n";
                        break;
                case 8: cout << "eight\n";
                        break;
                default: cout << "nine\n";
                        break;
                        
            }
    
    else
    {
        if((num % 2) == 0)
            cout << "even\n";
                
        else
            cout << "odd\n";
        
        }
    }    
    return 0;
}
