#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string endd = "\n";
    float a, b, c, secC, secC2, perSq, rhand, sqrhand, msqrhand, negB, sqrB, secPar, dubA, par2, sqrPar2, ans1, sol1, sol2;
    cout << "input the values of a b and c accordingly\n Hit enter after imputing each value\n" << endd;
    cout << "Note this program will not work for invalid inputs\n";
    cin >> a >> b >> secC;
    if(a != 1){
        b /= a;
        secC /= a;
        a /= a;
    }
    secC2 = -1 * secC;
    perSq = (b/2);
    perSq = perSq * perSq;
    c = perSq;
    rhand = secC2 + perSq;
    sqrhand = sqrt(rhand);
    msqrhand = -1 * sqrhand;
    negB = b * -1;
    sqrB = b * b;
    secPar = 4 * a * c;
    dubA = 2 * a;
    par2 = sqrB - secPar;
    sqrPar2 = sqrt(par2);
    ans1 = (negB + sqrPar2) / dubA;
    sol1 = msqrhand + ans1;
    sol2 = sqrhand + ans1;
    if(sol1 < 0 || sol1 > 0){
            cout << "x is = " << sol1 << " or " << sol2 << endd;
    }
    else{
        cout << "Not a valid input";
    }
    return 0;
    }
