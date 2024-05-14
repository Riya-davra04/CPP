#include <iostream>
using namespace std;

class Cricket {
public:
    int getTotalOvers() {
        return 50;
    }
};

class T20Match : public Cricket {
public:
    int getTotalOvers() {
        return 20; 
    }
};

class TestMatch : public Cricket {
public:
    int getTotalOvers()  {
        return 90; 
    }
};

