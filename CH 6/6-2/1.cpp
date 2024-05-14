 #include "class1.cpp"

int main() {
    double a, b;

    cout << "Enter the radius of the circle: ";
    cin >> a;
    Circle c(a);

    cout << "Enter the base of the triangle: ";
    cin >> a;
    cout << "Enter the height of the triangle: ";
    cin >> b;
    Triangle t(a, b);

    cout << "Enter the length of the rectangle: ";
    cin >> a;
    cout << "Enter the width of the rectangle: ";
    cin >> b;
    Rectangle r(a, b);

    c.calculate();
    t.calculate();
    r.calculate();

    return 0;
}