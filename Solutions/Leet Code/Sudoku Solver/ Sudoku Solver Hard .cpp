//
// Created by Mazen on 11/15/2023.
//
#include<bits/stdc++.h>

using namespace std;

    char mem[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    bool check(int x, int y, vector<vector<char>> &arr) {
        int ref_x=x/3;
        int ref_y=y/3;
        ref_x*=3;
        ref_y*=3;
        for (int i = ref_y; i < 3+ref_y; i++) {
            for (int j = ref_x; j < 3+ref_x; j++) {
                if (i == y && j == x)
                    continue;
                if (arr[i][j] == arr[y][x])
                    return false;
            }
        }

        for (int i = 1; i < 9; i++) {
            if (arr[y][(x + i) % 9] == arr[y][x])
                return false;
        }
        for (int i = 1; i < 9; i++) {
            if (arr[(y + i) % 9][x] == arr[y][x])
                return false;
        }
        return true;
    }

    bool rec(int x, int y, vector<vector<char>> &arr) {
        if (x == 0 && y == 9) {
            for (int i = 0; i < 9; ++i) {
                for (int j = 0; j < 9; ++j) {
                    std::cout << arr[i][j] << " ";
                }
                std::cout << std::endl;
            }
            return true;
        }
        if (arr[y][x] != '.') {
            bool m=0;
            if (x + 1 < 9) {
               m|= rec(x + 1, y, arr);
            } else {
                m|=rec(0, y + 1, arr);
            }
            if(m)
            {
                return m;
            }
        } else {
            for (int i = 0; i <= 8; i++) {
                arr[y][x] = mem[i];
                if(check(x,y,arr)) {
                    bool m=0;
                    if (x + 1 < 9) {
                        m|=rec(x + 1, y, arr);
                    } else {
                        m|=rec(0, y + 1, arr);
                    }
                    if(m)
                    {
                        return m;
                    }
                }
                arr[y][x] = '.';
            }
        }
        return false;
    }


    int main() {
        std::vector<std::vector<char>> sudoku = {
                {'5','3','.','.','7','.','.','.','.'},
                {'6','.','.','1','9','5','.','.','.'},
                {'.','9','8','.','.','.','.','6','.'},
                {'8','.','.','.','6','.','.','.','3'},
                {'4','.','.','8','.','3','.','.','1'},
                {'7','.','.','.','2','.','.','.','6'},
                {'.','6','.','.','.','.','2','8','.'},
                {'.','.','.','4','1','9','.','.','5'},
                {'.','.','.','.','8','.','.','7','9'}
        };

        rec(0,0,sudoku);


        return 0;
    }
