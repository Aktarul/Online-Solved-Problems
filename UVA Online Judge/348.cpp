#include <iostream>

using namespace std;

#define MAX_MATRICES 10

typedef long long ll;

struct Mat{
  int rows;
  int cols;
};

void printChain(int splits[][MAX_MATRICES + 1], int head, int tail){
  if (head == tail){
    cout << "A" << head;
    return;
  }
  if (tail == head + 1){
    cout << "A" << head << " x " << "A" << tail;
    return;
  }
  int middle = splits[head][tail];
  if (head == middle){
    printChain(splits, head, middle);
  } else {
    cout << "(";
    printChain(splits, head, middle);
    cout << ")";
  }
  cout << " x ";
  if (middle + 1 == tail){
    printChain(splits, middle + 1, tail);
  } else {
    cout << "(";
    printChain(splits, middle + 1, tail);
    cout << ")";
  }

}
int main()
{
  Mat m[MAX_MATRICES + 1];      // matrices
  int ncases = 0;               // cases
  int nmatrices;                // number of matrices

  // matrix chain multiplication cost table
  ll c[MAX_MATRICES + 1][MAX_MATRICES + 1];

  // auxiliary table that stores position to achieve optimal cost
  int splits[MAX_MATRICES + 1][MAX_MATRICES + 1];

  while (cin >> nmatrices, nmatrices != 0){
    ncases++;
    for (int i = 1; i <= nmatrices; ++i){
      cin >> m[i].rows >> m[i].cols;
    }

    for (int i = 1; i <= nmatrices; ++i){
      c[i][i] = 0;
    }

    for (int L = 2; L <= nmatrices; ++L){
      for (int i = 1; i + L - 1 <= nmatrices; ++i){
        int j = i + L - 1;
        ll q = ((ll)1 << 63) - 1;
        for (int k = i; k <= i + L - 2; ++k){
          if (c[i][k] + c[k+1][j] + m[i].rows * m[k].cols * m[j].cols < q){
            q = c[i][k] + c[k+1][j] + m[i].rows * m[k].cols * m[j].cols;
            splits[i][j] = k;
          }
        }
        c[i][j] = q;
      }
    }

    cout << "Case " << ncases << ": ";
    cout << "(";
    printChain(splits, 1, nmatrices);
    cout << ")" << endl;
  }
  return 0;
}
