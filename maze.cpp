#include <iostream>

#define size 4

using namespace std;

int maze[size][size];
int solution[size][size]; 


int solvemaze(int r, int c) {
    if (r == size - 1 && c == size - 1) {
        solution[r][c] = 1;
        return 1;
    }
    if (r < size && c < size && solution[r][c] == 0 && maze[r][c] == 0) {
        solution[r][c] = 1;
        if (solvemaze(r + 1, c))
            return 1;
        if (solvemaze(r, c + 1))
            return 1;
        if (solvemaze(r - 1, c))
            return 1;
        if (solvemaze(r, c - 1))
            return 1;
    } else {
        solution[r][c] = 0;
        return 0;
    }
}

void printsolution() {
    cout << "Solution maze is: \n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << solution[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            solution[i][j] = 0;
        }
    }

    cout << "Enter a maze of 4x4 (1s and 0s)\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> maze[i][j];
        }
    }

    cout << "\nEntered maze is: \n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << maze[i][j] << "\t";
        }
        cout << endl;
    }

    if (solvemaze(0, 0))
        printsolution();

    return 0;
}