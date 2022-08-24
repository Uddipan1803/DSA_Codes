/*Write a recursive function that returns the sum of the digits of a given integer.
    Sample Input 1 :
    12345
    Sample Output 1 :
    15
    Sample Input 2 :
    9
    Sample Output 2 :
    9
*/

#include<iostream>
using namespace std;

int sumOfDigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    int d=n%10;
    int a=sumOfDigits(n/10);
    return a+d;

}

int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
