#include <iostream>
#include <memory>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Object created\n";
    }

    ~Demo()
    {
        cout << "Object destroyed\n";
    }

    void show()
    {
        cout << "Demo function called\n";
    }
};

int main()
{
    cout << "\n--- unique_ptr ownership transfer ---\n";

    unique_ptr<Demo> u1 = make_unique<Demo>();
    u1->show();

    unique_ptr<Demo> u2 = move(u1);

    if(u1 == nullptr)
        cout << "u1 lost ownership\n";

    u2->show();


    cout << "\n--- shared_ptr shared ownership ---\n";

    shared_ptr<Demo> s1 = make_shared<Demo>();
    cout << "Count: " << s1.use_count() << endl;

    shared_ptr<Demo> s2 = s1;
    cout << "Count after copy: " << s1.use_count() << endl;

    s2->show();


    cout << "\n--- weak_ptr non owning reference ---\n";

    weak_ptr<Demo> w1 = s1;

    cout << "Shared count: " << s1.use_count() << endl;

    if(auto temp = w1.lock())
    {
        cout << "Accessing object via weak_ptr\n";
        temp->show();
    }

    s1.reset();
    s2.reset();

    if(w1.expired())
        cout << "Object no longer exists\n";

    return 0;
}