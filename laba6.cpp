#include <iostream>

using namespace std;

//template <typename T>
//T myAbs(T x) {
//    if (x < 0)
//        return -x;
//    return x;
//}
//
//int main() {
//    cout << myAbs(-5) << endl;       
//    cout << myAbs(-3.14) << endl;   
//    cout << myAbs(7) << endl; 
//
//    return 0;
//}



template <typename T>
class mySearch {
private:
    T* arr;      // вказівник на масив
    int size;    // розмір масиву

public:
    mySearch(T* array, int n) {
        arr = array;
        size = n;
    }

    void search(T key) {
        bool found = false;

        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                cout << "elements is found: " << arr[i] << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << "element isn't found" << endl;
    }
};

int main() {
    int arr1[] = { 5, 10, 15, 20, 25 };
    double arr2[] = { 2.5, 4.7, 3.14, 7.2 };
    char arr3[] = { 'a', 'b', 'c', 'd' };

    mySearch<int> s1(arr1, 5);
    mySearch<double> s2(arr2, 4);
    mySearch<char> s3(arr3, 4);

    cout << "search for int: " << endl;
    s1.search(15);

    cout << "search for double: " << endl;
    s2.search(3.14);

    cout << "search for char: " << endl;
    s3.search('z'); 
}
