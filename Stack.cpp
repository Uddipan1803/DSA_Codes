/* Designing a stack.*/

#include<iostream>
#include<climits>
using namespace std;

class Stack
{
    int *data;
    int index;
    int capacity;
public:
    Stack(int s)
    {
        data=new int[s];
        index=-1;
        capacity=s;
    }
    int sizeOfStack()
    {
        return index+1;
    }
    bool isEmpty()
    {
        if(index==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int element)
    {
        if(index==capacity-1)
        {
            cout<<"Stack full"<<endl;
            return;
        }
        index++;
        data[index]=element;
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return data[index--];
    }
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return data[index];
    }

};

int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.sizeOfStack()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}

/*OUTPUT:
    Stack full
    5
    5
    4
    3
    2
    1
    0
    1
*/
