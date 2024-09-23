#include<iostream>

using namespace std;

long count = 1;
int main()
{
    cout << ::count++ << endl;
    main();
    return 0;
}