#include <iostream>
using namespace std;

double calcOver60(double ce1, double ce2, double ass) {
    return (ce1 + ce2 + ass) / 5;
}

double calcCA(double CA) {
    return CA * 2 / 5;
}

double calcAVGTotal(double Over60, double CAAvg) {
    return Over60 + CAAvg;
}

int main() {
    double ce1;
    double ce2;
    double ass;
    double ca;
    cout << "Enter CE1: ";
    cin >> ce1;
    
    cout << "Enter CE2: ";
    cin >> ce2;
    
    cout << "Enter ASS: ";
    cin >> ass;
    
    double over60 = calcOver60(ce1, ce2, ass);
    
    cout << "Enter CA: ";
    cin >> ca;
    
    double over40 = calcCA(ca);
    double avg = calcAVGTotal(over60, over40);
    cout << "The total average is " << avg;
}

