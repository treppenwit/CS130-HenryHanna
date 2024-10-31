/*
Programmer: Henry Hanna
Date: 10/28/24
CS130

*/
/*


*/

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

pair<int, int> calculateTotals(const vector<double>& pieces) {
    int n = pieces.size();
    vector<double> sortedPieces = pieces;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (sortedPieces[j] < sortedPieces[j + 1]) {
                double temp = sortedPieces[j];
                sortedPieces[j] = sortedPieces[j + 1];
                sortedPieces[j + 1] = temp;
            }
        }
    }

    double aliceTotal = 0.0; // total value of Alice's pieces
    double bobTotal = 0.0;   // total value of Bob's pieces

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            aliceTotal += sortedPieces[i]; // Alice picks first
        } else {
            bobTotal += sortedPieces[i]; // Bob picks second
        }
    }

    return {static_cast<int>(aliceTotal), static_cast<int>(bobTotal)};
}

void runTests() {
    //test case 1
    vector<double> pieces1 = {1.0, 2.0, 3.0, 4.0, 5.0};
    assert(calculateTotals(pieces1) == make_pair(9, 6)); 

    //test case 2
    vector<double> pieces2 = {10.0, 20.0, 30.0};
    assert(calculateTotals(pieces2) == make_pair(40, 20)); 

    //test case 3
    vector<double> pieces3 = {5.5, 3.3, 2.2};
    assert(calculateTotals(pieces3) == make_pair(8, 3)); 

    cout << "All tests passed!" << endl;
}


int main(int argc, char* argv[]) {
    if (argc > 1 && string(argv[1]) == "test") {
        runTests();
        return 0; // exit after running tests
    }

    int n;

    //input how many pieces are dropped
    cin >> n;

    vector<double> pieces(n); //stores values of pieces
    //input the amount/value of each piece
    for(int i = 0; i < n; i++) {
		cin >> pieces[i];
	}

    //sort the pieces in descending order
   for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (pieces[j] < pieces[j + 1]) {
                // Swap pieces[j] and pieces[j + 1]
                double temp = pieces[j];
                pieces[j] = pieces[j + 1];
                pieces[j + 1] = temp;
            }
        }
    }


    pair<int, int> totals = calculateTotals(pieces);
    cout << totals.first << " " << totals.second << endl;



    return 0;
}


