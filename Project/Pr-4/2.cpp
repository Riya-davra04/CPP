#include "class2.cpp"

int main() {
  
    Distance input1;
    input1.setKm();
    input1.setMeter();

    Distance input2;
    input2.setKm();
    input2.setMeter();

    Distance total = input1 + input2;

    cout << "Output: " <<endl;
    total.getDis();

    return 0;
}