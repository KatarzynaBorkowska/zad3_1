//Katarzyna Borkowska 7
//zad 3_1

#include <iostream>
using namespace std;
int NWD(int a,int b)
{
    return a == b?a:(a > b?NWD(a - b, b):NWD(a, b - a));
}
int NWW(int a,int b)
{
    return a * b/ NWD(a, b);
}
void fun(int a,int b,int *c,int *d)
{
    *c = NWD(a, b);
    *d = NWW(a, b);
}
int main() {
    int a,b,c,d;
    cin >> a >> b;
    fun(a, b, &c, &d);
    cout << "NWD = " << c << " NWW = " << d << endl;
    
    return 0;
}
