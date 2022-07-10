#include<iostream>
using namespace std;

class DeQueue
{
    int q[100],f,r,n;
public:
    DeQueue()
    {
        f=r=-1;
        n=5;
    }
    DeQueue(int n)
    {
        f=r=-1;
        this->n=n;
    }


    void enqueuer(int x)
    {
        if(r==n-1)
        {
            cout<<"queue overflow\n";
            return;
        }
        r+=1;
        q[r]=x;
        if(f==-1)
        {
            f=0;
        }
        return;
    }

    void enqueuef(int x)
    {
        if(f==0)
        {
            cout<<"enqueue at front not possible\n";
            return;
        }
        if(f==-1)
        {
            f=r=0;
        }
        f-=1;
        q[f]=x;
        return;
    }

    int dequeuef()
    {

        if(f==-1)
        {
            cout<<"queue underflow\n";
            return -1;
        }
        int temp=q[f];
        if(r==f)
        {
            r=f=-1;
            return temp;
        }
        f+=1;
        return temp;
    }

    int dequeuer()
    {
        if(f==-1)
        {
            cout<<"queue underflow\n";
            return -1;
        }
        int temp=q[r];
        if(r==f)
        {
            r=f=-1;
            return temp;
        }
        r-=1;
        return temp;
    }

    int peekf()
    {
        if(f==-1)
        {
            cout<<"queue underflow\n";
            return -1;
        }

        return q[f];
    }
int peekr()
    {
        if(f==-1)
        {
            cout<<"queue underflow\n";
            return -1;
        }

        return q[r];
    }


bool isempty()
{
    if(f==-1)
    {
        return true;
    }
    return false;
}


bool isfull()
{
    if(r=n-1)
    {
        return true;
    }
    return false;
}

void display()
{
    if(f==-1)
    {
        cout<<"queue underflow\n";
    }
    for(int i=f;i<=r;i++)
    {
        cout<<q[i]<<" ";
    }
    cout<<endl;
}
};

int main()
{
    DeQueue q1;
    int s,val,p;
    do
    {
        cout<<"enter 1 for enqueue rear\n";
        cout<<"enter 2 for dequeue front\n";
        cout<<"enter 3 for enqueue front\n";
        cout<<"enter 4 for dequeue rear\n";
        cout<<"enter 5 for isempty\n";
        cout<<"enter 6 for isfull\n";
        cout<<"enter 7 for display\n";
        cout<<"enter 8 for peek front\n";
        cout<<"enter 9 for peek rear\n";
        cout<<"enter 10 for exit\n";
        cout<<"enter your choice : ";
        cin>>s;
        switch(s)
        {
        case 1:
            cout<<"enter element to insert : ";
            cin>>val;
            q1.enqueuer(val);
            break;
        case 2:
            cout<<"deleted element is "<<q1.dequeuef()<<"\n";
            break;
        case 3:
            cout<<"enter element to insert : ";
            cin>>val;
            q1.enqueuef(val);
            break;
        case 4:
            cout<<"deleted element is "<<q1.dequeuer()<<"\n";
            break;
          case 5:
                if(q1.isempty())
                    cout<<"stack is empty\n";

                else
                    cout<<"stack is not empty\n";
                break;
              case 6:
                if(q1.isfull())
                    cout<<"stack is full\n";
                else
                    cout<<"stack is not full\n";
                break;
          case 7:
            q1.display();
            break;
          case 8:
              cout<<"The peeked element from front is "<<q1.peekf()<<endl;
            break;
          case 9:
              cout<<"The peeked element from rear is "<<q1.peekr()<<endl;
            break;
          case 10:
            break;
          default:
            cout<<"Invalid input\n";
            break;

        }
    }while(s!=10);
q1.display();
}



