#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    Queue(int size);
    ~Queue();
    void enqueue(int x);
    int dequeue();
    void display();

    int isEmpty() { return front == rear ? 1 : 0; }
    int isFull() { return rear == size - 1 ? 1 : 0; }
};

Queue::Queue(int size)
{
    this->size = size;
    front = rear = -1;
    Q = new int[size];
}

Queue::~Queue()
{
    delete[] Q;
}

void Queue::enqueue(int x)
{
    if (isFull())
        cout << "Queue is Full"<<endl;
    else
    {
        Q[++rear] = x;
    }
}

int Queue::dequeue()
{
    int x = -1;
    if (isEmpty())
        cout << "Queue is Empty";
    else
    {
        x = Q[++front];
    }
    return x;
}

void Queue::display()
{
    for (int i = front + 1; i <= rear; i++)
    {
        cout<<Q[i]<<flush;
        if (i < rear){
            cout << " <- " << flush;
        }
    }
    cout<<endl;
}

int main()
{
    int A[] = {1, 3, 5, 7, 9};
 
    Queue q(sizeof(A)/sizeof(A[0]));
 
    // Enqueue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.enqueue(A[i]);
    }

    // Display
    q.display();
 
    // Overflow
    q.enqueue(10);
    
    //Dequeue
    q.dequeue();
    q.display();


}