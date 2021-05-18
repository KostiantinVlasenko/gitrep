#include <iostream>
using namespace std;
class base{

    int a;

    float b;

};



class derived:public base{

    int b1;

    float b[6];

};



int main()

{

   derived obj;

   cout<<sizeof(obj);

    return 0;

}

