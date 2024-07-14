#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numElements;
    cin >> numElements;

    vector<int> initialArray(numElements);
    for (int i = 0; i < numElements; ++i) {
        cin >> initialArray[i];
    }

    vector<int> negativeSet;
    vector<int> positiveSet;
    vector<int> zeroSet;

    for (int element : initialArray) {
        if (element < 0) {
            negativeSet.push_back(element);
        } else if (element > 0) {
            positiveSet.push_back(element);
        } else {
            zeroSet.push_back(element);
        }
    }

    vector<int> setA, setB, setC;

    setA.push_back(negativeSet.front());
    negativeSet.erase(negativeSet.begin());

    if (!positiveSet.empty()) {
        setB.push_back(positiveSet.front());
        positiveSet.erase(positiveSet.begin());
    } else {
        setB.push_back(negativeSet.front());
        negativeSet.erase(negativeSet.begin());
        setB.push_back(negativeSet.front());
        negativeSet.erase(negativeSet.begin());
    }

    for (int neg : negativeSet) {
        setC.push_back(neg);
    }
    for (int pos : positiveSet) {
        setC.push_back(pos);
    }
    for (int zero : zeroSet) {
        setC.push_back(zero);
    }

    cout << setA.size() << " ";
    for (int element : setA) {
        cout << element << " ";
    }
    cout << endl;

    cout << setB.size() << " ";
    for (int element : setB) {
        cout << element << " ";
    }
    cout << endl;

    cout << setC.size() << " ";
    for (int element : setC) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
