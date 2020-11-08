#include <vector>
using namespace std;

template <class T>
bool isOK(T value, T key) {
    if (value >= key) return true;
    else return false;
}

template <class T>
T binary_search(const vector<T> vec, T key) {
    T ng = -1;
    T ok = (T)vec.size();

    while (abs(ok - ng) > 1) {
        T mid = (ok + ng) / 2;

        if (isOK(vec.at(mid), key)) ok = mid;
        else ng = mid;
    }
    return ok;
}
