#include <iostream>
using namespace std;
template <class T>
class Queue
{
 T arr[5];
 int front, rear;
public:
 Queue()
 {
 front = -1;
 rear = -1;
 }
 void enqueue(T value)
 {
 if (rear == 4)
 {
 cout << "Queue is Full\n";
 }
 else
 {
 if (front == -1)
 front = 0;
 rear++;
 arr[rear] = value;
 }
 }
 void dequeue()
 {
 if (front == -1 || front > rear)
 {
 cout << "Queue is Empty\n"; }
 else
 {
 cout << "Deleted: " << arr[front] << endl;
 front++;
 }
 }
 void display()
 {
 if (front == -1 || front > rear)
 {
 cout << "Queue is Empty\n";
 return;
 }
 cout << "Queue: ";
 for (int i = front; i <= rear; i++)
 {
 cout << arr[i] << " ";
 }
 cout << endl;
 }
};
int main()
{
 Queue<int> q;
 q.enqueue(10);
 q.enqueue(20);
 q.enqueue(30);
 q.display();
 q.dequeue();
 q.display();
 return 0;
}
