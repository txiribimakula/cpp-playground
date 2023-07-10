#include <iostream>
#include <list>

class Something {
public:
    Something(int data)
    {
        this->data = data;
    }
    int data = 0;
};

int main()
{
    std::list<Something> list = { Something(0), Something(1) };
    
    std::list<Something>::iterator it = list.begin();

    while (it != list.end()) {
        list.erase(it++);
    }
}
