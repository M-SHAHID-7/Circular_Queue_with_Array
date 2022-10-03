#include<iostream>
using namespace std;

const int MAX_SIZE = 10;


class Queue
{

private:
 int front ;
 int rare;
 string arr[MAX_SIZE];


public:
 Queue()
 {
    front = rare = -1;

 }


 bool isFull()
 {
    if((front == 0 && rare == MAX_SIZE -1) || front == rare +1 )
    {
    return true;
    }
    return false;
 }


 bool isEmpty()
 {

    if(front == -1)
    {
        return true;
    }
    return false;
 }

 bool  Enqueue(string name)
 {
    if(isFull())
    {
        return false;   
    }
    else if(isEmpty())
    {
        front ++;
    }
   rare = (rare + 1) % MAX_SIZE;
   arr[rare] =  name;
   return true;
 }

string Dequeue()
{
    if(isEmpty())
    {
        return "empty" ;
    }
    string data = arr[front];
    if( front == rare )
    {
        front = rare = -1;
       return data;
    }
    front = (front + 1) % MAX_SIZE;
    return data;
}
};


int main()
{

 Queue q;
 while(true)
 {
 cout<<"1 enqueue"<<endl;
 cout<<"2. dequeue"<<endl;
int opt;
 cin>>opt;
 if(opt == 1)
 {
    cout<<" enter name "<<endl;
    string name;
    cin>>name;
    bool check =q.Enqueue(name);
    if(check==false)
    {
        cout<<" full"<<endl;
    }
    else
    cout<<"success"<<endl;
 }
 if(opt==2)
 {
 string data=   q.Dequeue();
 cout<<data;

 }
 }
}