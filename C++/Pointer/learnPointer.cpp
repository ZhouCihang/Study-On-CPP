#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    int b = 20;
    int *r = &b;


    //Null pointer
    int *j = NULL;

    //dont have permission to access a NULL pointer. 
    //cout << *j << endl;


    cout << "sizeof int * = "<< sizeof(int *) << endl;
    cout << "sizeof int * = "<< sizeof(float *) << endl;
    cout << "sizeof int * = "<< sizeof(double *) << endl;
    cout << "sizeof int * = "<< sizeof(char *) << endl;

    cout << "memory address for a" << &a << endl;
    cout << "pointer p = " << p << endl;

    cout << "value of a " << a << endl;
    cout << "value of pointer p = " << *p << endl;
    return 0;
}