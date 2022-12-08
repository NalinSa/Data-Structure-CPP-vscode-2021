#include <iostream>

using namespace std;
void test(int x){
    if (x>0){
        int y = x-1;
        cout << "I am test" << x << "continue" << endl;
        test(y);
        cout << "now x is " << x << endl;
    
    }
    else {
        cout << "I am test(0). stop" << endl;
    }
}
int main()
{   test(4);
    return 0;
}
