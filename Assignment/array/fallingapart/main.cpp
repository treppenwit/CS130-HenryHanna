/*
Programmer: Henry Hanna
Date: 10/28/24
CS130

*/
/*


*/

#include <iostream>
#include <vector>

using namespace std;


int main(){

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


    double aliceTotal = 0.0; // total value of Alice's pieces
    double bobTotal = 0.0;   // total value of Bob's pieces


    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            aliceTotal += pieces[i]; // Alice picks first
        } else {
            bobTotal += pieces[i]; // Bob picks second
        }
    }

    cout << static_cast<int>(aliceTotal) << " " << static_cast<int>(bobTotal) << endl;




    return 0;
}


