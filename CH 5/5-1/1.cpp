 #include "class1.cpp"

int main() {
    A a1;
    a1.set();

    int a = a1.getA();
    int b = a1.getB();
    int c = a1.getC();
    int d = a1.getD();
    int e = a1.getE();

    a1.calc(a, b);
    a1.calc(a, b, c);
    a1.calc(a, b, c, d);
    a1.calc(a, b, c, d, e);

    return 0;
}