#include <iostream>
#include <vector>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
  vector<int> result(2, 0); // Initialize result vector with size 2 and all elements 0

  // Iterate through corresponding elements in both vectors
  for (int i = 0; i < a.size(); ++i) {
    if (a[i] > b[i]) {
      result[0]++; // Increment Alice's score
    } else if (a[i] < b[i]) {
      result[1]++; // Increment Bob's score
    }
  }

  return result;
}

int main() {
  int a0, a1, a2, b0, b1, b2;
  cin >> a0 >> a1 >> a2 >> b0 >> b1 >> b2;

  vector<int> alice(3); // Vector for Alice's scores
  alice[0] = a0;
  alice[1] = a1;
  alice[2] = a2;

  vector<int> bob(3); // Vector for Bob's scores
  bob[0] = b0;
  bob[1] = b1;
  bob[2] = b2;

  vector<int> result = compareTriplets(alice, bob);

  cout << result[0] << " " << result[1] << endl;

  return 0;
}
