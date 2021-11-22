
#include <iostream>
using namespace std;

int Text1();
int Text2();

int main()
{
    Text1();
    Text1();
    Text2();
    Text2();
    return 0;
}


int Text1 () {
    cout << "Three blind mice" << endl;
    return 0;
}

int Text2() {
    cout << "See how they run" << endl;
    return 0;
}