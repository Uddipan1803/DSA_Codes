/* Design a queue*/

#include<iostream>
using namespace std;

class Queue
{
  int *data;
  int nextIndex;
  int firstIndex;
  int size_queue;
  int capacity;
  public:
  Queue(int s)
  {
      data=new int[s];
      nextIndex=0;
      firstIndex=-1;
      size_queue=0;
      capacity=s;
  }
  int get_size()
  {
      return size_queue;
  }
  bool isEmpty()
  {
      return size_queue==0;
  }
  void enqueue(int element)
  {
      if(size_queue==capacity)
      {
          cout<<"Queue full"<<endl;
          return;
      }
      data[nextIndex]=element;
      nextIndex=(nextIndex+1)%capacity;
      if(firstIndex==-1)
      {
          firstIndex=0;
      }
      size_queue++;
  }
  int top()
  {
      if(isEmpty())
      {
          cout<<"Queue empty"<<endl;
          return 0;
      }
      return data[firstIndex];
  }
  int dequeue()
  {
       if(isEmpty())
      {
          cout<<"Queue empty"<<endl;
          return 0;
      }
      int ans=data[firstIndex];
      firstIndex=(firstIndex+1)%capacity;
      size_queue--;
      if(size_queue==0)
      {
          firstIndex=-1;
          nextIndex=0;
      }
      return ans;
  }
};


int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout<<q.top()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.get_size()<<endl;
    cout<<q.isEmpty()<<endl;
    return 0;
}

/* Output:
Queue full
10
10
20
30
2
0*/
