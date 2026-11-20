#include <iostream>
using namespace std;

class result {
    float *a;
    int size;
    float aver; // Moved here so both out() and large() can access it

public:
    void in() {
        cout << "Enter the size of array: ";
        cin >> size;
        a = new float[size];
        for (int i = 0; i < size; i++) {
            cin >> *(a + i);
        }
    }

    void out() {
        float sum = 0; // Removed 'aver' from here so it uses the class variable
        for (int i = 0; i < size; i++) {
            sum = sum + *(a + i);
        }
        aver = sum / size;
        cout << "The average is = " << aver << endl;
    }

    void large() {
        cout << "Elements larger than the average are: ";
        for (int i = 0; i < size; i++) {
            if (*(a + i) > aver) {
                cout << *(a + i) << " ";
            }
        }
        cout << endl;
    }

    ~result() {
        delete[] a; // Frees the dynamic memory when the program finishes
    }
};

int main() {
    result rr;
    rr.in();
    rr.out();
    rr.large();
    return 0;
}

