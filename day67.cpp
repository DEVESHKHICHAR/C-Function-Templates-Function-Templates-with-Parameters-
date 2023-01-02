// C++ Function Templates & Function Templates with Parameters
#include <iostream>
using namespace std;
template<class t1, class t2>
void average(t1 a, t2 b){
     t1 x=a;
     t2 y=b;
     cout<<"the vlaue of x is: "<<x<<endl;
     cout<<"the vlaue of y is: "<<y<<endl;
}
int main() {
    average(5.02,"devesh");
    return 0;
}