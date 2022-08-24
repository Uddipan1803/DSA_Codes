/*Check whether a given String S is a palindrome using recursion. Return true or false.
    Sample Input 1 :
    racecar
    Sample Output 1:
    true
    Sample Input 2 :
    samurai
    Sample Output 2:
    false
*/

#include<iostream>
using namespace std;

int length(char input[])
{
    int c=0;
    for(int i=0;input[i]!='\0';i++)
    {
        c++;
    }
    return c;
}
bool helper(char input[],int start, int end)
{
 	int dist=end-start;
    if(dist==0 || dist==1)
    {
        return true;
    }
    if(input[start]!=input[end])
    {
        return false;
    }
    else
    {
        bool b=helper(input,start+1,end-1);
        return b;
    }
}
bool checkPalindrome(char input[])
{
    int start=0;
    int end=length(input)-1;
    return helper(input,start,end);
}

int main() {
    char input[50];
    cin >> input;

    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
