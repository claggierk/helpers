#include <iostream>
#include <cstdlib>

using namespace std;

class Foo
{
    public:
        Foo() {}
};

ostream& operator<<(ostream& out, const Foo& f)
{
    out << "Foo is an object";
    return out;
}


int main(int argc, char* argv[])
{
    Foo f;
    cout << "Foo f: " << f;
    cout << endl << "The End";
    cout << endl;
    return EXIT_SUCCESS;
}
